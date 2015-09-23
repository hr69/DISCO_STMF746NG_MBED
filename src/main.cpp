#include "mbed.h"
void  MX_GPIO_Init (void);

//Serial pc(USBTX, USBRX); // tx, rx
DigitalOut myled(LED1);
DigitalIn myswitch(PI_11);
int main() {  

	MX_GPIO_Init ();
    while(true) {
    	HAL_GPIO_TogglePin (GPIOI, GPIO_PIN_1);
    	wait(0.5);
     }

    return 0;
}



void  MX_GPIO_Init (void)
{
  GPIO_InitTypeDef GPIO_InitStruct;

  /* GPIO ports Clock Enable */
  __GPIOI_CLK_ENABLE ();

  /* Configure GPIO pin: PI1 */
  GPIO_InitStruct.Pin = GPIO_PIN_1;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_LOW;
  HAL_GPIO_Init (GPIOI, & GPIO_InitStruct);
}
