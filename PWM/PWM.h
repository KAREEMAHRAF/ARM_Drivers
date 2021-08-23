/*
 * PWM.h
 *
 *  Created on: Jan 18, 2021
 *      Author: kareem ashraf
 */

#ifndef PWM_PWM_H_
#define PWM_PWM_H_

#include "HW_CONFIGURATION.h"


void PWM_ININT();





void PWM0_B6_ININT_3000KV_MOTOR_PERIOD();
void PWM0_B7_ININT_3000KV_MOTOR_PERIOD();
void PWM0_B4_ININT_3000KV_MOTOR_PERIOD();
void PWM0_B5_ININT_3000KV_MOTOR_PERIOD();


void PWM0_C4_ININT_SERVO_LEGS();
void PWM0_C5_ININT_SERVO_EDF();


void PWM1_F0_ININT_SERVOV_BALANCE();
void PWM1_F1_ININT_SERVOV_BALANCE();
void PWM1_F2_ININT_SERVOV_BALANCE();
void PWM1_F3_ININT_SERVOV_BALANCE();




void PWM0_B6_duty(uint8 duty);
void PWM0_B7_duty(uint8 duty);
void PWM0_B4_duty(uint8 duty);
void PWM0_B5_duty(uint8 duty);

void PWM0_C4_duty(uint8 duty);
void PWM0_C5_duty(uint8 duty);


void PWM1_F0_duty(uint8 duty);
void PWM1_F1_duty(uint8 duty);
void PWM1_F2_duty(uint8 duty);
void PWM1_F3_duty(uint8 duty);

#endif /* PWM_PWM_H_ */
