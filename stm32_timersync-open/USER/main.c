#include "led.h"
#include "usart.h"
#include "sync_timer.h"

int main(void)
{
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	uart_init(9600);
	LED_Init();

    // Initialize GPIO pins for PWM output
    GPIO_Init_PWM();

    TIM1_Master_Init(359, 999, 180); // 200 Hz    pin_A8 TIM1 CH1
    TIM2_Slave_Init(49999, 143, 2); // 10 Hz    pin_A1 TIM2 CH2
    TIM3_Slave_Init(7199, 9999, 3600); // 1 Hz  remap to pin_B5 TIM3 CH2
    TIM4_Slave_Init(3599, 999, 360); // 20 Hz    pin_B7 TIM4 CH2

    // Reset all timers
    TIM1->EGR = TIM_EGR_UG;  // Generate update event for TIM1
    TIM2->EGR = TIM_EGR_UG;  // Generate update event for TIM2
    TIM3->EGR = TIM_EGR_UG;  // Generate update event for TIM3
    TIM4->EGR = TIM_EGR_UG;  // Generate update event for TIM4

    // Start timers
    TIM1->CR1 |= TIM_CR1_CEN;  // Enable TIM1 (master)
    TIM2->CR1 |= TIM_CR1_CEN;  // Enable TIM2 (slave)
    TIM3->CR1 |= TIM_CR1_CEN;  // Enable TIM3 (slave)
    TIM4->CR1 |= TIM_CR1_CEN;  // Enable TIM4 (slave)

    while (1)
    {
        // Main loop
    }
}
