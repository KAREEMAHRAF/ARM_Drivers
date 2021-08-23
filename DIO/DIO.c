/*
 * DIO.c
 *
 *  Created on: Jan 10, 2021
 *      Author: kareem ashraf
 */

#include "DIO.h"

void ENABEL_OUTPUT_PIN (PORT_pos PORT, uint8 pin, uint8 DATA)
{
    if(PORT==PORTA)
    {
        RCGCGPIO |= (1<<0) ;
        GPIOA.GPIODIR |= (1<<pin) ;
        GPIOA.GPIODEN |= (1<<pin) ;
        GPIOA.GPIODATA[DATA] |= (1<<pin) ;
    }
    if(PORT==PORTB)
    {
        RCGCGPIO |= (1<<1) ;
        GPIOB.GPIODIR |= (1<<pin) ;
        GPIOB.GPIODEN |= (1<<pin) ;
        GPIOB.GPIODATA[DATA] |= (1<<pin) ;
    }
    if(PORT==PORTC)
    {

        RCGCGPIO |= (1<<2) ;
        GPIOC.GPIODIR |= (1<<pin) ;
        GPIOC.GPIODEN |= (1<<pin) ;
        GPIOC.GPIODATA[DATA] |= (1<<pin) ;
    }
    if(PORT==PORTD)
    {
        RCGCGPIO |= (1<<3) ;
        GPIOD.GPIODIR |= (1<<pin) ;
        GPIOD.GPIODEN |= (1<<pin) ;
        GPIOD.GPIODATA[DATA] |= (1<<pin) ;
    }
    if(PORT==PORTE)
    {
        RCGCGPIO |= (1<<4) ;
        GPIOE.GPIODIR |= (1<<pin) ;
        GPIOE.GPIODEN |= (1<<pin) ;
        GPIOE.GPIODATA[DATA] |= (1<<pin) ;
    }
    if(PORT==PORTF)
    {
        RCGCGPIO |= (1<<5) ;
        GPIOF.GPIODIR |= (1<<pin) ;
        GPIOF.GPIODEN |= (1<<pin) ;
        GPIOF.GPIODATA[DATA] |= (1<<pin) ;
    }
}

void ENABEL_OUTPUT_TOGGEL_PIN (PORT_pos PORT, uint8 pin, uint8 DATA)
{

    if(PORT==PORTA)
    {
        RCGCGPIO |= (1<<0) ;
        GPIOA.GPIODIR |= (1<<pin) ;
        GPIOA.GPIODEN |= (1<<pin) ;
        GPIOA.GPIODATA[DATA] ^= (1<<pin) ;
    }
    if(PORT==PORTB)
    {
        RCGCGPIO |= (1<<1) ;
        GPIOB.GPIODIR |= (1<<pin) ;
        GPIOB.GPIODEN |= (1<<pin) ;
        GPIOB.GPIODATA[DATA] ^= (1<<pin) ;
    }
    if(PORT==PORTC)
    {

        RCGCGPIO |= (1<<2) ;
        GPIOC.GPIODIR |= (1<<pin) ;
        GPIOC.GPIODEN |= (1<<pin) ;
        GPIOC.GPIODATA[DATA] ^= (1<<pin) ;
    }
    if(PORT==PORTD)
    {
        RCGCGPIO |= (1<<3) ;
        GPIOD.GPIODIR |= (1<<pin) ;
        GPIOD.GPIODEN |= (1<<pin) ;
        GPIOD.GPIODATA[DATA] ^= (1<<pin) ;
    }
    if(PORT==PORTE)
    {
        RCGCGPIO |= (1<<4) ;
        GPIOE.GPIODIR |= (1<<pin) ;
        GPIOE.GPIODEN |= (1<<pin) ;
        GPIOE.GPIODATA[DATA] ^= (1<<pin) ;
    }
    if(PORT==PORTF)
    {
        RCGCGPIO |= (1<<5) ;
        GPIOF.GPIODIR |= (1<<pin) ;
        GPIOF.GPIODEN |= (1<<pin) ;
        GPIOF.GPIODATA[DATA] ^= (1<<pin) ;
    }
}

void DISABEL_OUTPUT_PIN(PORT_pos PORT , uint8 DATA)
{

            if(PORT==PORTA)
            {
                GPIOA.GPIODATA[DATA]=0 ;
            }
            if(PORT==PORTB)
            {
                GPIOB.GPIODATA[DATA]=0 ;
            }
            if(PORT==PORTC)
            {
                GPIOC.GPIODATA[DATA]=0 ;
            }
            if(PORT==PORTD)
            {
                GPIOD.GPIODATA[DATA]=0 ;
            }
            if(PORT==PORTE)
            {
                GPIOE.GPIODATA[DATA]=0 ;
            }
            if(PORT==PORTF)
            {
                GPIOF.GPIODATA[DATA]=0 ;
            }

}
void INPUT_PIN(PORT_pos PORT , uint8 pin)
{
        if(PORT==PORTA)
        {
            RCGCGPIO |= (1<<0) ;
            GPIOA.GPIODIR  &=~ (1<<pin)  ;
            GPIOA.GPIODEN  |= (1<<pin) ;
            GPIOA.GPIOLOCK = 0x4C4F434B;                                // UNLOCK able to write GPIOCR
            GPIOA.GPIOCR   |=  (1<<pin)  ;                              // enabel to write GPIOPUR
            GPIOA.GPIOPUR  |=  (1<<pin)  ;                              // detect pullup
        }
        if(PORT==PORTB)
        {
            RCGCGPIO |= (1<<1) ;
            GPIOB.GPIODIR  &=~ (1<<pin)  ;
            GPIOB.GPIODEN  |= (1<<pin) ;
            GPIOB.GPIOLOCK = 0x4C4F434B;                                // UNLOCK able to write GPIOCR
            GPIOB.GPIOCR   |=  (1<<pin)  ;                              // enabel to write GPIOPUR
            GPIOB.GPIOPUR  |=  (1<<pin)  ;                              // detect pullup
        }
        if(PORT==PORTC)
        {
            RCGCGPIO |= (1<<2) ;
            GPIOC.GPIODIR  &=~ (1<<pin)  ;
            GPIOC.GPIODEN  |= (1<<pin) ;
            GPIOC.GPIOLOCK = 0x4C4F434B;                                // UNLOCK able to write GPIOCR
            GPIOC.GPIOCR   |=  (1<<pin)  ;                              // enabel to write GPIOPUR
            GPIOC.GPIOPUR  |=  (1<<pin)  ;                              // detect pullup
        }
        if(PORT==PORTD)
        {
            RCGCGPIO |= (1<<3) ;
            GPIOD.GPIODIR  &=~ (1<<pin)  ;
            GPIOD.GPIODEN  |= (1<<pin) ;
            GPIOD.GPIOLOCK = 0x4C4F434B;                                // UNLOCK able to write GPIOCR
            GPIOD.GPIOCR   |=  (1<<pin)  ;                              // enabel to write GPIOPUR
            GPIOD.GPIOPUR  |=  (1<<pin)  ;                              // detect pullup
        }
        if(PORT==PORTE)
        {
            RCGCGPIO |= (1<<4) ;
            GPIOE.GPIODIR  &=~ (1<<pin)  ;
            GPIOE.GPIODEN  |= (1<<pin) ;
            GPIOE.GPIOLOCK = 0x4C4F434B;                                // UNLOCK able to write GPIOCR
            GPIOE.GPIOCR   |=  (1<<pin)  ;                              // enabel to write GPIOPUR
            GPIOE.GPIOPUR  |=  (1<<pin)  ;                              // detect pullup
        }
        if(PORT==PORTF)
        {
            RCGCGPIO |= (1<<5) ;
            GPIOF.GPIODIR  &=~ (1<<pin)  ;
            GPIOF.GPIODEN  |= (1<<pin) ;
            GPIOF.GPIOLOCK = 0x4C4F434B;                                // UNLOCK able to write GPIOCR
            GPIOF.GPIOCR   |=  (1<<pin)  ;                              // enabel to write GPIOPUR
            GPIOF.GPIOPUR  |=  (1<<pin)  ;                              // detect pullup
        }
}
