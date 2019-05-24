/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f7xx.h"
#include "stm32746g_discovery.h"
#include "stm32746g_discovery_lcd.h"
#include "stm32746g_discovery_ts.h"

static void Error_Handler(void);
static void SystemClock_Config(void);

void count_time();

void draw_square();

void init_led_pin()
{
	__HAL_RCC_GPIOI_CLK_ENABLE();

	GPIO_InitTypeDef gpio_config;

	gpio_config.Pin = GPIO_PIN_1;
	gpio_config.Mode = GPIO_MODE_OUTPUT_PP;
	gpio_config.Pull = GPIO_NOPULL;
	gpio_config.Speed = GPIO_SPEED_FAST;

	HAL_GPIO_Init(GPIOI, &gpio_config);
}

void init_button_pin()
{
	__HAL_RCC_GPIOI_CLK_ENABLE();

	GPIO_InitTypeDef gpio_config;

	gpio_config.Pin = GPIO_PIN_11;
	gpio_config.Mode = GPIO_MODE_IT_RISING;
	gpio_config.Pull = GPIO_NOPULL;
	gpio_config.Speed = GPIO_SPEED_FAST;

	HAL_GPIO_Init(GPIOI, &gpio_config);
}

void LCD_init()
{
	BSP_LCD_Init();
	BSP_LCD_LayerDefaultInit(1, LCD_FB_START_ADDRESS);
	BSP_LCD_SelectLayer(1);
	BSP_LCD_Clear(0xFF808080);
	BSP_LCD_SetBackColor(0xFF808080);
	BSP_LCD_SetFont(&Font24);
	BSP_LCD_SetTextColor(LCD_COLOR_RED);


}

void TS_init()
{
	TS_INT_GPIO_CLK_ENABLE();
	BSP_TS_Init(BSP_LCD_GetXSize(), BSP_LCD_GetYSize());
	BSP_TS_ITConfig();
}

uint32_t counter = 0;
uint32_t timer = 10;
uint8_t char_buffer[1];
RNG_HandleTypeDef rng_handle;



int main(void)
{
	HAL_Init();

	SystemClock_Config();

	__HAL_RCC_RNG_CLK_ENABLE();
	rng_handle.Instance = RNG;
	HAL_RNG_Init(&rng_handle);

	init_led_pin();
	init_button_pin();
	while (counter == 0) {
		HAL_GPIO_TogglePin(GPIOI, GPIO_PIN_1);
		HAL_Delay(500);
		if (BSP_PB_GetState(BUTTON_KEY) == 1) {
			counter++;
		}
	}
	if (counter != 0) {
		BSP_LED_On(LED1);
		LCD_init();
		TS_init();
		draw_square();
		while (timer != 0) {
			count_time();
			sprintf(char_buffer, "%d", timer);
			//BSP_LCD_Clear(0xFF808080);
			BSP_LCD_DisplayStringAt(10, 10, char_buffer, LEFT_MODE);
		}
		if (timer <= 0) {
			BSP_LCD_DisplayStringAt(10, 10, "Time's up!", LEFT_MODE);
		}
	}

}

void draw_square()
{
	uint32_t randX = HAL_RNG_GetRandomNumber(&rng_handle) % (440 + 1);
	uint32_t randY = (HAL_RNG_GetRandomNumber(&rng_handle) % (232 + 1 - 35)) + 35;
	BSP_LCD_FillRect(randX, randY, 40, 40);

}

void EXTI15_10_IRQHandler()
{

	HAL_GPIO_EXTI_IRQHandler(TS_INT_PIN);
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	draw_square();
}

void count_time()
{
	timer--;
	HAL_Delay(1000);
}

static void Error_Handler(void)
{
}

static void SystemClock_Config(void)
{
	RCC_OscInitTypeDef RCC_OscInitStruct =
	{ 0 };
	RCC_ClkInitTypeDef RCC_ClkInitStruct =
	{ 0 };

	/**Configure the main internal regulator output voltage */
	__HAL_RCC_PWR_CLK_ENABLE()
	;
	__HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

	/**Initializes the CPU, AHB and APB busses clocks */
	RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
	RCC_OscInitStruct.HSIState = RCC_HSI_ON;
	RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
	RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
	RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
	RCC_OscInitStruct.PLL.PLLM = 8;
	RCC_OscInitStruct.PLL.PLLN = 216;
	RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
	RCC_OscInitStruct.PLL.PLLQ = 2;

	if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
		Error_Handler();
	}

	/**Activate the Over-Drive mode */
	if (HAL_PWREx_EnableOverDrive() != HAL_OK) {
		Error_Handler();
	}

	/**Initializes the CPU, AHB and APB busses clocks */
	RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
	RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
	RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
	RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
	RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

	if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK) {
		Error_Handler();
	}
}
