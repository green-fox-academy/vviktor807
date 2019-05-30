#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

I2C_HandleTypeDef I2C_handle;            // defining the I2C configuration structure

GPIO_InitTypeDef SCL_SDA_config;           // configure GPIOs for I2C data and clock lines

/* 7 bit address of an I2C sensor shifted to left 1 bit, leaving place for W/R bit,
 * which is inserted by the HAL_I2C_Master_Transmit and HAL_I2C_Master_Receive */
#define TEMP_SENSOR_ADDRESS (0b1001000 << 1)
#define LED_MATRIX_ADDRESS  (0b1110000 << 1)

UART_HandleTypeDef uart_handle;

void SystemClock_Config(void);
void Error_Handler(void);

void init_uart()
{
    /* enable the clock of the used peripherial instance */
    __HAL_RCC_USART1_CLK_ENABLE();

    /* defining the UART configuration structure */
    uart_handle.Instance = USART1;
    uart_handle.Init.BaudRate = 115200;
    uart_handle.Init.WordLength = UART_WORDLENGTH_8B;
    uart_handle.Init.StopBits = UART_STOPBITS_1;
    uart_handle.Init.Parity = UART_PARITY_NONE;
    uart_handle.Init.HwFlowCtl = UART_HWCONTROL_NONE;
    uart_handle.Init.Mode = UART_MODE_TX_RX;

    BSP_COM_Init(COM1, &uart_handle);
}

void I2C_init()
{

  __HAL_RCC_GPIOB_CLK_ENABLE();       /* enable GPIO clock */

  SCL_SDA_config.Pin         = GPIO_PIN_8 | GPIO_PIN_9;  /* PB8: SCL, PB9: SDA */
  SCL_SDA_config.Pull        = GPIO_PULLUP;
  SCL_SDA_config.Mode        = GPIO_MODE_AF_OD;          /* configure in pen drain mode */
  SCL_SDA_config.Alternate   = GPIO_AF4_I2C1;
  HAL_GPIO_Init(GPIOB, &SCL_SDA_config);

  __HAL_RCC_I2C1_CLK_ENABLE();        /* enable the clock of the used peripheral */

  /* defining the UART configuration structure */
  I2C_handle.Instance             = I2C1;
  I2C_handle.Init.Timing          = 0x40912732; //ezt használd paraszt
  I2C_handle.Init.AddressingMode  = I2C_ADDRESSINGMODE_7BIT;

  HAL_I2C_Init(&I2C_handle);

}

uint8_t read_temp_reg = 0;
uint8_t read_temp_val;

const uint8_t data[10][8] =
{
    { 0x0e, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e },	//0
		{ 0x04, 0x06, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0e },	//1
		{ 0x0e, 0x11, 0x10, 0x10, 0x08, 0x04, 0x02, 0x1f },	//2
		{ 0x0e, 0x11, 0x10, 0x0c, 0x10, 0x10, 0x11, 0x0e },	//3
		{ 0x10, 0x18, 0x14, 0x12, 0x11, 0x1f, 0x10, 0x10 },	//4
		{ 0x1f, 0x01, 0x01, 0x0f, 0x10, 0x10, 0x11, 0x0e },	//5
		{ 0x0e, 0x11, 0x01, 0x0f, 0x11, 0x11, 0x11, 0x0e },	//6
		{ 0x1f, 0x10, 0x10, 0x08, 0x04, 0x02, 0x02, 0x02 },	//7
		{ 0x0e, 0x11, 0x11, 0x0e, 0x11, 0x11, 0x11, 0x0e },	//8
		{ 0x0e, 0x11, 0x11, 0x11, 0x1e, 0x10, 0x11, 0x0e }	//9

};

const uint8_t celsius[8] = { 0x60, 0x60, 0x1e, 0x33, 0x81, 0x81, 0x33, 0x1e };

/* regiszter címek */
#define SYSTEM_SETUP_REG	0x20
#define ROW_INT_SET_REG		0xA0
#define DISPLAY_SETUP_REG	0x80

/* regiszter értékek */
#define STANDBY_MODE		(0 << 0)
#define NORMAL_MODE			(1 << 0)
#define OUTPUT_MODE			(0 << 0)
#define DISP_ON_BLINK_OFF	(1 << 0) //11 OLDAL!


uint8_t normal_mode = (SYSTEM_SETUP_REG | NORMAL_MODE);
uint8_t output_mode = (ROW_INT_SET_REG | OUTPUT_MODE);
uint8_t no_blinking = (DISPLAY_SETUP_REG | DISP_ON_BLINK_OFF);
uint8_t max_brightness = (0xE0 | 0x0F);

void dot_matrix_init(void) {
	HAL_I2C_Master_Transmit(&I2C_handle, LED_MATRIX_ADDRESS, &normal_mode, 1, 100);
	HAL_I2C_Master_Transmit(&I2C_handle, LED_MATRIX_ADDRESS, &output_mode, 1, 100);
	HAL_I2C_Master_Transmit(&I2C_handle, LED_MATRIX_ADDRESS, &no_blinking, 1, 100);
	//HAL_I2C_Master_Transmit(&hi2c1, HT16K33_ADDRESS, &max_brightness, 1, 100);
	HAL_Delay(50);
}

void print_numb(int x)
{
  for (int i = 0; i < 8; i++) {
      HAL_I2C_Mem_Write(&I2C_handle, LED_MATRIX_ADDRESS, i * 2, I2C_MEMADD_SIZE_8BIT, &data[x][i], 1, 100);
  }
}
void print_celsius()
{
  for (int i = 0; i < 8; i++) {
      HAL_I2C_Mem_Write(&I2C_handle, LED_MATRIX_ADDRESS, i * 2, I2C_MEMADD_SIZE_8BIT, &celsius[i], 1, 100);
  }
}

int main(void)
{
    HAL_Init();
    I2C_init();
    init_uart();
    SystemClock_Config();

    dot_matrix_init();


  uint8_t column = 0b11111111;
	uint8_t clear = 0;

    while (1) {
        HAL_Delay(1000);

        HAL_I2C_Master_Transmit(&I2C_handle, TEMP_SENSOR_ADDRESS, &read_temp_reg, sizeof(read_temp_reg), 100);
        HAL_I2C_Master_Receive(&I2C_handle, TEMP_SENSOR_ADDRESS, &read_temp_val, sizeof(read_temp_val), 100);
        print_numb(read_temp_val / 10);
        HAL_Delay(1000);
        print_numb(read_temp_val % 10);
        HAL_Delay(1000);
        print_celsius();

        /* or using HAL_I2C_Mem_Read():
        HAL_I2C_Mem_Read(&I2C_handle, TEMP_SENSOR_ADDRESS, read_temp_reg, I2C_MEMADD_SIZE_8BIT,
		&read_temp_val, sizeof(read_temp_val), 100);
        */

      /*  HAL_I2C_Mem_Write(&I2C_handle, LED_MATRIX_ADDRESS, 0, I2C_MEMADD_SIZE_8BIT, &column, 1, 100);
        HAL_I2C_Mem_Write(&I2C_handle, LED_MATRIX_ADDRESS, 2, I2C_MEMADD_SIZE_8BIT, &clear, 1, 100);
        HAL_I2C_Mem_Write(&I2C_handle, LED_MATRIX_ADDRESS, 4, I2C_MEMADD_SIZE_8BIT, &clear, 1, 100);
        HAL_I2C_Mem_Write(&I2C_handle, LED_MATRIX_ADDRESS, 6, I2C_MEMADD_SIZE_8BIT, &clear, 1, 100);
        HAL_I2C_Mem_Write(&I2C_handle, LED_MATRIX_ADDRESS, 8, I2C_MEMADD_SIZE_8BIT, &clear, 1, 100);
        HAL_I2C_Mem_Write(&I2C_handle, LED_MATRIX_ADDRESS, 10, I2C_MEMADD_SIZE_8BIT, &clear, 1, 100);
        HAL_I2C_Mem_Write(&I2C_handle, LED_MATRIX_ADDRESS, 12, I2C_MEMADD_SIZE_8BIT, &clear, 1, 100);
        HAL_I2C_Mem_Write(&I2C_handle, LED_MATRIX_ADDRESS, 14, I2C_MEMADD_SIZE_8BIT, &clear, 1, 100);
*/

    }
}

void SystemClock_Config(void) {
	RCC_OscInitTypeDef RCC_OscInitStruct = { 0 };
	RCC_ClkInitTypeDef RCC_ClkInitStruct = { 0 };
	RCC_PeriphCLKInitTypeDef PeriphClkInitStruct = { 0 };

	/** Configure the main internal regulator output voltage
	 */
	__HAL_RCC_PWR_CLK_ENABLE()
	;
	__HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE3);
	/** Initializes the CPU, AHB and APB busses clocks
	 */
	RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
	RCC_OscInitStruct.HSIState = RCC_HSI_ON;
	RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
	RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
	if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
		Error_Handler();
	}
	/** Initializes the CPU, AHB and APB busses clocks
	 */
	RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
			| RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
	RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
	RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
	RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
	RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

	if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK) {
		Error_Handler();
	}
	PeriphClkInitStruct.PeriphClockSelection = RCC_PERIPHCLK_I2C1;
	PeriphClkInitStruct.I2c1ClockSelection = RCC_I2C1CLKSOURCE_PCLK1;
	if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInitStruct) != HAL_OK) {
		Error_Handler();
	}
}

void Error_Handler(void) {
	/* USER CODE BEGIN Error_Handler_Debug */
	/* User can add his own implementation to report the HAL error return state */

	/* USER CODE END Error_Handler_Debug */
}


int _write(int file, char *ptr, int len)
{
	int DataIdx;

	for (DataIdx = 0; DataIdx < len; DataIdx++) {
		HAL_UART_Transmit(&uart_handle, &ptr[DataIdx], 1, HAL_MAX_DELAY);
	}
	return len;
}
