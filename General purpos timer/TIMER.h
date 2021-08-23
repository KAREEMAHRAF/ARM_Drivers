/*
 * TIMER.h
 *
 *  Created on: Jan 17, 2021
 *      Author: kareem ashraf
 */

#ifndef GENERAL_PURPOSE_TIMER_TIMER_H_
#define GENERAL_PURPOSE_TIMER_TIMER_H_

#include "HW_CONFIGURATION.h"
#include "TIMER.h"

    typedef enum
    {
        REGISTER_A,
        REGISTER_B,

    }Type_Timer_Register;

    typedef enum
    {
        Timer_0,
        Timer_1,
        Timer_2,
        Timer_3,
        Timer_4,
        Timer_5,

    }NUM_Timer;

    void TIMER_INIT_Periodic_Timer(NUM_Timer TIMER ,Type_Timer_Register  REGISTER);
    void TIMER_INIT_ONESHOT_Timer(NUM_Timer TIMER ,Type_Timer_Register  REGISTER);
    void TIMER_INIT_Real_Time_Clock (NUM_Timer TIMER ,Type_Timer_Register  REGISTER);
    void TIMER_INIT_Edge_Count(NUM_Timer TIMER ,Type_Timer_Register  REGISTER);
    void TIMER_INIT_Edge_Time(NUM_Timer TIMER ,Type_Timer_Register  REGISTER);
    void TIMER_INIT_PWM(uint8 duty,NUM_Timer TIMER ,Type_Timer_Register  REGISTER);


#endif /* GENERAL_PURPOSE_TIMER_TIMER_H_ */
