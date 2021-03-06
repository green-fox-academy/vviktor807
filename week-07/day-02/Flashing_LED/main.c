#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

int main(void) {

	HAL_Init();

	BSP_PB_Init(BUTTON_KEY, BUTTON_MODE_GPIO);

	BSP_LED_Init(LED1);

	while (1) {
		/* If button is pressed do something */
		if (BSP_PB_GetState(BUTTON_KEY) == 1) {
			BSP_LED_On(LED1);
			HAL_Delay(125);
			BSP_LED_Off(LED1);
			HAL_Delay(125);

		} else {
			BSP_LED_Off(LED1);
		}
	}
}
