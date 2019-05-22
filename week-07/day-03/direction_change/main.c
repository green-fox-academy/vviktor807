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

void init_pins() {
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOFEN; /* GPIOI clock enable */
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOBEN;

	// Init user led (I 1)
	GPIOF->MODER |= (GPIO_MODER_MODER10_0); /* configure PI1 in output mode */
	GPIOF->MODER |= (GPIO_MODER_MODER9_0);
	GPIOF->MODER |= (GPIO_MODER_MODER8_0);
	GPIOF->MODER |= (GPIO_MODER_MODER7_0);

}

int main(void) {
	HAL_Init();
	init_pins();

	uint32_t ON = (1 << 7);
	//uint32_t OFF = (ON << 16);
	uint32_t prev;
	uint32_t button = (1 << 4);

	while (1) {

		if (button & GPIOB->IDR) {
			for (int i = 3; i >= 0; --i) {
				GPIOF->BSRR = prev << 16;
				GPIOF->BSRR = ON << i;
				prev = ON << i;
				HAL_Delay(100);
			}
		} else {
			for (int i = 0; i < 4; ++i) {
				GPIOF->BSRR = prev << 16;
				GPIOF->BSRR = ON << i;
				prev = ON << i;
				HAL_Delay(100);
			}
		}
		/*GPIOF->BSRR = ON;
		 HAL_Delay(40);
		 GPIOF->BSRR = OFF;
		 GPIOF->BSRR = ON << 1;
		 HAL_Delay(40);
		 GPIOF->BSRR = OFF << 1;
		 GPIOF->BSRR = ON << 2;
		 HAL_Delay(40);
		 GPIOF->BSRR = OFF << 2;
		 GPIOF->BSRR = ON << 3;
		 HAL_Delay(40);
		 GPIOF->BSRR = OFF << 3;
		 HAL_Delay(40);
		 GPIOF->BSRR = ON << 2;
		 HAL_Delay(40);
		 GPIOF->BSRR = OFF << 2;
		 GPIOF->BSRR = ON << 1;
		 HAL_Delay(40);
		 GPIOF->BSRR = OFF << 1;
		 GPIOF->BSRR = ON;
		 HAL_Delay(40);
		 GPIOF->BSRR = OFF;*/
	}
}
