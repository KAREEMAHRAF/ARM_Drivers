/*
 * NVIC.h
 *
 *  Created on: Jan 10, 2021
 *      Author: kareem ashraf
 */

#ifndef MCAL_NVIC_NVIC_H_
#define MCAL_NVIC_NVIC_H_
#include "../HW_CONFIGURATION.h"
#include "DIO/DIO.h"


void interrupt_init(PORT_pos PORT ,uint8 pinout ,uint8 pinin, uint32 number_inturrupt);
void PORTA_ISR(void);                      // GPIO Port A
void PORTB_ISR(void);                      // GPIO Port B
void PORTC_ISR(void);                      // GPIO Port C
void PORTD_ISR(void);                      // GPIO Port D
void PORTE_ISR(void);                      // GPIO Port E
void PORTF_ISR(void);                      // GPIO Port F


#endif /* MCAL_NVIC_NVIC_H_ */
