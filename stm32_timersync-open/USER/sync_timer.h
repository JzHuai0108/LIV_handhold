#ifndef __SYNC_TIMER_H
#define __SYNC_TIMER_H

#include "stm32f10x.h"


void TIM1_Master_Init(u16 arr, u16 psc, u16 cmp);

void TIM2_Slave_Init(u16 arr, u16 psc, u16 cmp);

void TIM3_Slave_Init(u16 arr, u16 psc, u16 cmp);

void TIM4_Slave_Init(u16 arr, u16 psc, u16 cmp);

// Initialize GPIO pins for PWM output
void GPIO_Init_PWM(void);

#endif
