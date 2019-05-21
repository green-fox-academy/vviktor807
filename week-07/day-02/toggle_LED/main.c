#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

int main(void) {

	HAL_Init();

	BSP_PB_Init(BUTTON_KEY, BUTTON_MODE_GPIO);

	BSP_LED_Init(LED1);

	int ledstate = 0;
	int flag = 0;
	while (1) {
		/* If button is pressed do something */
		if (BSP_PB_GetState(BUTTON_KEY) == 1 && flag == 0) {
			ledstate = (ledstate + 1 )% 2;
			flag = 1;
		}
		if (BSP_PB_GetState(BUTTON_KEY) == 0) {
			flag = 0;
		}
		if (ledstate)
			BSP_LED_On(LED1);
		else
			BSP_LED_Off(LED1);
	}

}

