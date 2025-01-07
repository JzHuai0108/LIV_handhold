#include "led.h"
#include "delay.h"
#include "key.h"
#include "sys.h"
#include "usart.h"
#include "timer.h"
//��ɫ SWIO  7 ��4
//��ɫ SWCLK 9 ��5
//��ɫ GND �� 2


extern vu16 var_Exp;
int main(void)
{

	delay_init();	    	 //��ʱ������ʼ��	  
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); 	 //����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
	//uart_init(115200);	 //���ڳ�ʼ��Ϊ115200
	uart_init(9600);
 	LED_Init();			     //LED�˿ڳ�ʼ��
	//1000 ms 50 
	TIM2_PWM_Init(999,7199); // 10 Hz    pin_A1 TIM2 CH2

	TIM3_PWM_Init(9999,7199);	 // 1 Hz  pin_B5 TIM3 CH2

	TIM4_PWM_Init(399,7199); // 25 Hz    pin_B7 TIM4 CH2

	TIM1_PWM_Init(99,7199); // 100 Hz    pin_A10 TIM1 CH3

	while(1)
	{
		
	}
}
