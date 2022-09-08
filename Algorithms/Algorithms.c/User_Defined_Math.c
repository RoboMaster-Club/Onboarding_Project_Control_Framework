/**
 * @file User_Defined_Math.c
 * @author Leo Liu
 * @brief Basic Math/Logic Operations
 * @version 1.0
 * @date 2022-07-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "User_Defined_Math.h"

float INV_SQRT(float x);
float VAL_LIMIT(float Value, float Upper_Limit,float Lower_Limit);

float INV_SQRT(float x)
{
    float halfx = 0.5f * x;
    float y = x;
    long i = *(long *)&y;

    i = 0x5f3759df - (i >> 1);
    y = *(float *)&i;
    y = y * (1.5f - (halfx * y * y));

    return y;
}

float VAL_LIMIT(float Value, float Upper_Limit, float Lower_Limit)
{
	if(Value > Upper_Limit)
		Value = Upper_Limit;
	else if(Value < Lower_Limit)
		Value = Lower_Limit;
	
	return Value;
}
