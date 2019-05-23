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

	HAL_NVIC_EnableIRQ(EXTI15_10_IRQn);
	HAL_NVIC_SetPriority(EXTI15_10_IRQn, 16, 0);

}

uint32_t counter = 0;

int main(void)
{
	HAL_Init();
	init_led_pin();
	init_button_pin();

	while (1) {
	}
}

void EXTI15_10_IRQHandler()
{
	counter++;
	HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_11);
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	if (counter == 5) {
	HAL_GPIO_WritePin(GPIOI, GPIO_PIN_1, 1);
	}


}

