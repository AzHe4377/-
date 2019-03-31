#ifndef __PWM_H
#define __PWM_H
#include "stm32f4xx_hal.h"

void PWM_SetDuty(TIM_HandleTypeDef *tim,uint32_t tim_channel,float duty);

#endif
