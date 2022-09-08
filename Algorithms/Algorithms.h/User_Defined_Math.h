/**
 * @file User_Defined_Math.h
 * @author Leo Liu
 * @brief Basic Math/Logic Operations
 * @version 1.0
 * @date 2022-07-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __USER_DEFINED_MATH_H
#define __USER_DEFINED_MATH_H

#define DEG_TO_RAD(DEG) (DEG * 0.0174532925199432957692369076848f)
#define RAD_TO_DEG(RAD)	(RAD * 57.295779513082320876798154814105f)
 
extern float INV_SQRT(float x);
extern float VAL_LIMIT(float Value, float Upper_Limit, float Lower_Limit);

#endif
