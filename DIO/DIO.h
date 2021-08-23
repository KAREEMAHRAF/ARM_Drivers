/*
 * DIO.h
 *
 *  Created on: Jan 10, 2021
 *      Author: kareem ashraf
 */

#ifndef MCAL_DIO_DIO_H_
#define MCAL_DIO_DIO_H_
#include "../HW_CONFIGURATION.h"







typedef enum
    {
        PINA0,
        PINA1,
        PINA2,
        PINA3,
        PINA4,
        PINA5,
        PINA6,
        PINA7,

        PINB0,
        PINB1,
        PINB2,
        PINB3,
        PINB4,
        PINB5,
        PINB6,
        PINB7,

        PINC0,
        PINC1,
        PINC2,
        PINC3,
        PINC4,
        PINC5,
        PINC6,
        PINC7,

        PIND0,
        PIND1,
        PIND2,
        PIND3,
        PIND4,
        PIND5,
        PIND6,
        PIND7,

        PINE0,
        PINE1,
        PINE2,
        PINE3,
        PINE4,
        PINE5,
        PINE6,
        PINE7,

        PINF0,
        PINF1,
        PINF2,
        PINF3,
        PINF4,
        PINF5,
        PINF6,
        PINF7


    }DIO_PIN;


typedef enum
    {
    PORTA,
    PORTB,
    PORTC,
    PORTD,
    PORTE,
    PORTF,
    }PORT_pos;

    void ENABEL_OUTPUT_PIN(PORT_pos PORT,uint8 pin,uint8 DATA);
    void ENABEL_OUTPUT_TOGGEL_PIN(PORT_pos PORT,uint8 pin,uint8 DATA);

    void DISABEL_OUTPUT_PIN(PORT_pos PORT , uint8 DATA);
    void INPUT_PIN(PORT_pos PORT , uint8 pin);
#endif /* MCAL_DIO_DIO_H_ */
