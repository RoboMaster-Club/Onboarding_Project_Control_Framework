# Onboarding_Project_Control_Framework
This is the basic framework for control team members to use in the onboarding project, it is given so that members can focus more on the actual control (the fun part) and less on the boring communication protocols setting up part. It is also to make members familiarize with our current competition robot control code (as it uses pretty much the same structure) and guide them to use a similar coding structure.
## The framework includes supporting file for:
- DR16 Remote Control
- Board A IMU (MPU6500)
- FreeRTOS Structure
## To navigate & add your own, here are a few guidelines you should follow:
1. Add the definition of functions in the corresponding .c file (e.g. Motor.c)
2. Declare variables in struct in the corresponding .h file (e.g. Motor.h) which you can access at the top of the .c file.
3. Initialize ALL global functions used in one .c file in its corresponding .h file using the same structure as you can find in existing files.
4. Naming convention:
   - Defined variables & established functions (e.g. calculating the inverse square of a number: INV_SQRT): All CAPITALIZED
   - Global variables (e.g. Board_A_IMU.Export_Data.Yaw): declare inside struct, First_Letter_Capitalized, Connect_Using_Underscore, Name_Explain_What_It_Does.
   - Local vairables (e.g. buffer[10]): declare inside a function, all_lower_case_letter, connect_using_underscore, name_explain_what_it_does.
   - Global functions (e.g. Board_A_IMU_Read_Data): declare inside struct in .h file and extern the whole struct, First_Letter_Capitalized, Connect_Using_Underscore, Name_Explain_What_It_Does.
   - Local functions (e.g. Board_A_IMU_I2C_Config): declare in .c file, First_Letter_Capitalized, Connect_Using_Underscore, Name_Explain_What_It_Does.
5. Start by browsing through Board_A_IMU.h & DR16_Remote_Control.h under Devices to see what are the outputs for these devices.
6. Add your own declaration for the motor used in Motors.h under Devices.
7. Write functions that drives the motor in Motors.c under Devices.
8. Add your own declaration for the robot in Robot_Control.h under HigherLevelApps.
9. Write control logics and implement control using PID Controller Algorithm in PID.c for the robot in Robot_Control.c under HigherLevelApps.
10. Modify PID variables in PID.h under Algorithms.
11. Make neccesary modifications in freertos.c under Application/User/Core for using the functions you wrote.
12. Test and have fun debugging! :)
