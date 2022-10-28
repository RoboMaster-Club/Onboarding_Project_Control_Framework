/**
 * @file Motors.c
 * @author Leo Liu
 * @brief control the motors
 * @version 1.0
 * @date 2022-07-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
 
#include "Motors.h"

Motors_t Motors;

void Motors_Init(void);
void Motors_Send_PWM(float Left_PWM, float Right_PWM);
void Motors_Change_Direction(uint8_t Motor, uint8_t Direction);

Motors_Func_t Motors_Func = Motors_Func_GroundInit;
#undef Motors_Func_GroundInit

void Motors_Init(void)
{
	//HAL_TIM_PWM_Start();
	//HAL_TIM_Encoder_Start();

}

void Motors_Send_PWM(float Left_PWM, float Right_PWM)
{
	//__HAL_TIM_SetCompare();
}

void Motors_Change_Direction(uint8_t Motor, uint8_t Direction)
{
	//HAL_GPIO_WritePin();
}
