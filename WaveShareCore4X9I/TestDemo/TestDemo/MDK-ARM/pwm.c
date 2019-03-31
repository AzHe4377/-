#include <main.h>
#include "pwm.h"
#include "tim.h"

//void PWM_Init()   //PWM初始化
//{

//		
//	HAL_TIM_PWM_Start(&htim5,TIM_CHANNEL_1);
//	HAL_TIM_PWM_Start(&htim5,TIM_CHANNEL_3);
//	HAL_TIM_PWM_Start(&htim5,TIM_CHANNEL_4);
//	
//	HAL_TIM_PWM_Start(&htim8,TIM_CHANNEL_1);
//	HAL_TIM_PWM_Start(&htim8,TIM_CHANNEL_2);
//	HAL_TIM_PWM_Start(&htim8,TIM_CHANNEL_3);
//	HAL_TIM_PWM_Start(&htim8,TIM_CHANNEL_4);
//	
//	HAL_TIM_PWM_Start(&htim12,TIM_CHANNEL_1);
//}

void PWM_SetDuty(TIM_HandleTypeDef *tim,uint32_t tim_channel,float duty)  //PWM占空比设定函数   duty最大为1000，限幅900
	{
	    switch(tim_channel)
			{	
				case TIM_CHANNEL_1: tim->Instance->CCR1 = duty - 1;break;//                      
				case TIM_CHANNEL_2: tim->Instance->CCR2 = duty - 1;break;//                              
				case TIM_CHANNEL_3: tim->Instance->CCR3 = duty - 1;break;//                                                    
				case TIM_CHANNEL_4: tim->Instance->CCR4 = duty - 1;break;//						 
			}
	}
	