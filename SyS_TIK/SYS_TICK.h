/*
 * SYS_TICK.h
 *
 *  Created on: Jan 17, 2021
 *      Author: kareem ashraf
 */

#ifndef SYS_TICK_SYS_TICK_H_
#define SYS_TICK_SYS_TICK_H_

#include "HW_CONFIGURATION.h"
#include "DIO/DIO.h"

void SYS_TICK_INIT(PORT_pos PORT , uint8 pin_number);
void systick_cc(void);
void SysTick_handler(PORT_pos PORT, uint8 pin_number);


#endif /* SYS_TICK_SYS_TICK_H_ */
