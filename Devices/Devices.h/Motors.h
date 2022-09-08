/**
 * @file Motors.h
 * @author Leo Liu
 * @brief control the motors
 * @version 1.0
 * @date 2022-07-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __MOTORS_H
#define __MOTORS_H

#include "gpio.h"
#include "tim.h"
#include <string.h>
#include <stdio.h>
#include <stdint.h>

#define Motors_Func_GroundInit		\
{																	\
		&Motors_Init,									\
				&Motors_Send_PWM,					\
				&Motors_Change_Direction,	\
}

#define MOTOR_PWM_MAX 999.0f

typedef struct
{
	uint8_t Delete_Me;	//Declaration filler, delete this and use your own variables
}Motors_t;

typedef struct
{
	void (*Motors_Init)(void);
	void (*Motors_Send_PWM)(float Left_PWM, float Right_PWM);
	void (*Motors_Change_Direction)(uint8_t Motor, uint8_t Direction);
}Motors_Func_t;

extern Motors_t Motors;
extern Motors_Func_t Motors_Func;

#endif
