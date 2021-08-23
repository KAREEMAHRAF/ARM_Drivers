/*
 * NIVC.c
 *
 *  Created on: Jan 10, 2021
 *      Author: kareem ashraf
 */

#include "NVIC.h"
#include "../DIO/DIO.h"

void interrupt_init(PORT_pos PORT ,uint8 pinout ,uint8 pinin, uint32 number_inturrupt)        //number inturrupt chosse from victor tabel                                                          //
{

                  if(PORT==PORTA)
                    {
                      RCGCGPIO |= 0x20;

                      GPIOA.GPIODIR &= ~(1<<pinin);             /* Set PA and PFA as a digital input pins */
                      GPIOA.GPIODIR |= (1<<pinout);             /* Set PA as digital output to control green */
                      GPIOA.GPIODEN |= (1<<pinin)|(1<<pinout);  /* make FA-FA digital pins */
                      GPIOA.GPIOPUR |= (1<<pinin);              /* enable pull up for A */
                      //GPIOA interrupt
                      GPIOA.GPIOIS      &=~(1<<pinin) ;
                      GPIOA.GPIOIBE     &=~(1<<pinin) ;
                      GPIOA.GPIOIEV     |= (1<<pinin) ;
                      GPIOA.GPIOICR     |= (1<<pinin) ;
                      GPIOA.GPIOIM      |= (1<<pinin) ;


                      NVICPORTF.pri[30] = 3 << 5;     /* set interrupt priority to 3 */
                      NVICPORTF.EN[0]   |= (1<<number_inturrupt);    /* */
                      //GPIOF -> GPIORIS |= 1<<4 ;
                    }
                    if(PORT==PORTB)
                    {
                        RCGCGPIO |= 0x20;

                        GPIOB.GPIODIR &= ~(1<<pinin);             /* Set PF4 and PF0 as a digital input pins */
                        GPIOB.GPIODIR |= (1<<pinout);             /* Set PF3 as digital output to control green */
                        GPIOB.GPIODEN |= (1<<pinin)|(1<<pinout);  /* make F4-F3 digital pins */
                        GPIOB.GPIOPUR |= (1<<pinin);              /* enable pull up for F4 */
                        //GPIOB interrupt
                        GPIOB.GPIOIS      &=~(1<<pinin) ;           //F4
                        GPIOB.GPIOIBE     &=~(1<<pinin) ;           //F4
                        GPIOB.GPIOIEV     |= (1<<pinin) ;           //F4
                        GPIOB.GPIOICR     |= (1<<pinin) ;           //F4
                        GPIOB.GPIOIM      |= (1<<pinin) ;           //F4


                        NVICPORTF.pri[30] = 3 << 5;     /* set interrupt priority to 3 */
                        NVICPORTF.EN[0]   |= (1<<number_inturrupt);    /* */
                        //GPIOF -> GPIORIS |= 1<<4 ;
                    }
                    if(PORT==PORTC)
                    {

                        RCGCGPIO |= 0x20;

                        GPIOC.GPIODIR &= ~(1<<pinin);             /* Set PF4 and PF0 as a digital input pins */
                        GPIOC.GPIODIR |= (1<<pinout);             /* Set PF3 as digital output to control green */
                        GPIOC.GPIODEN |= (1<<pinin)|(1<<pinout);  /* make F4-F3 digital pins */
                        GPIOC.GPIOPUR |= (1<<pinin);              /* enable pull up for F4 */
                        //GPIOC interrupt
                        GPIOC.GPIOIS      &=~(1<<pinin) ;           //F4
                        GPIOC.GPIOIBE     &=~(1<<pinin) ;           //F4
                        GPIOC.GPIOIEV     |= (1<<pinin) ;           //F4
                        GPIOC.GPIOICR     |= (1<<pinin) ;           //F4
                        GPIOC.GPIOIM      |= (1<<pinin) ;           //F4


                        NVICPORTF.pri[30] = 3 << 5;     /* set interrupt priority to 3 */
                        NVICPORTF.EN[0]   |= (1<<number_inturrupt);    /* */
                                                //GPIOF -> GPIORIS |= 1<<4 ;
                    }
                    if(PORT==PORTD)
                    {
                        RCGCGPIO |= 0x20;

                        GPIOD.GPIODIR &= ~(1<<pinin);             /* Set PF4 and PF0 as a digital input pins */
                        GPIOD.GPIODIR |= (1<<pinout);             /* Set PF3 as digital output to control green */
                        GPIOD.GPIODEN |= (1<<pinin)|(1<<pinout);  /* make F4-F3 digital pins */
                        GPIOD.GPIOPUR |= (1<<pinin);              /* enable pull up for F4 */
                        //GPIOD interrupt
                        GPIOD.GPIOIS      &=~(1<<pinin) ;           //F4
                        GPIOD.GPIOIBE     &=~(1<<pinin) ;           //F4
                        GPIOD.GPIOIEV     |= (1<<pinin) ;           //F4
                        GPIOD.GPIOICR     |= (1<<pinin) ;           //F4
                        GPIOD.GPIOIM      |= (1<<pinin) ;           //F4


                        NVICPORTF.pri[30] = 3 << 5;     /* set interrupt priority to 3 */
                        NVICPORTF.EN[0]   |= (1<<number_inturrupt);    /* */
                        //GPIOD -> GPIORIS |= 1<<4 ;
                    }
                    if(PORT==PORTE)
                    {
                        RCGCGPIO |= 0x20;

                        GPIOE.GPIODIR &= ~(1<<pinin);             /* Set PF4 and PF0 as a digital input pins */
                        GPIOE.GPIODIR |= (1<<pinout);             /* Set PF3 as digital output to control green */
                        GPIOE.GPIODEN |= (1<<pinin)|(1<<pinout);  /* make F4-F3 digital pins */
                        GPIOE.GPIOPUR |= (1<<pinin);              /* enable pull up for F4 */
                        //GPIOF interrupt
                        GPIOE.GPIOIS      &=~(1<<pinin) ;           //F4
                        GPIOE.GPIOIBE     &=~(1<<pinin) ;           //F4
                        GPIOE.GPIOIEV     |= (1<<pinin) ;           //F4
                        GPIOE.GPIOICR     |= (1<<pinin) ;           //F4
                        GPIOE.GPIOIM      |= (1<<pinin) ;           //F4


                        NVICPORTF.pri[30] = 3 << 5;     /* set interrupt priority to 3 */
                        NVICPORTF.EN[0]   |= (1<<number_inturrupt);    /* */
                        //GPIOF -> GPIORIS |= 1<<4 ;
                    }
                    if(PORT==PORTF)
                    {
                        RCGCGPIO |= 0x20;

                        GPIOF.GPIODIR &= ~(1<<pinin);             /* Set PF4 and PF0 as a digital input pins */
                        GPIOF.GPIODIR |= (1<<pinout);             /* Set PF3 as digital output to control green */
                        GPIOF.GPIODEN |= (1<<pinin)|(1<<pinout);  /* make F4-F3 digital pins */
                        GPIOF.GPIOPUR |= (1<<pinin);              /* enable pull up for F4 */
                        //GPIOF interrupt
                        GPIOF.GPIOIS      &=~(1<<pinin) ;           //F4
                        GPIOF.GPIOIBE     &=~(1<<pinin) ;           //F4
                        GPIOF.GPIOIEV     |= (1<<pinin) ;           //F4
                        GPIOF.GPIOICR     |= (1<<pinin) ;           //F4
                        GPIOF.GPIOIM      |= (1<<pinin) ;           //F4


                        NVICPORTF.pri[30] = 3 << 5;     /* set interrupt priority to 3 */
                        NVICPORTF.EN[0]   |= (1<<number_inturrupt);    /* */
                        //GPIOF -> GPIORIS |= 1<<4 ;
                    }
}

void PORTA_ISR()
{

       if(GPIOA.GPIOMIS & 0x10)                //pin0    =1
       {
           ENABEL_OUTPUT_PIN(PORTA, 1, 2);
           GPIOA.GPIOICR |= 0x10;
       }
       if(GPIOA.GPIOMIS & 0b00000010)                 //pin1     =2
       {
           GPIOA.GPIOICR |= 0x10;
       }
       if(GPIOA.GPIOMIS& 0b00000100)                 //pin2     =4
       {
           GPIOA.GPIOICR |= 0x10;
       }
       if(GPIOA.GPIOMIS& 0b00001000)                 //pin3    =8
       {
           GPIOA.GPIOICR |= 0x10;
       }
       if(GPIOA.GPIOMIS& 0b00010000)               //pin4     =16
       {
           GPIOA.GPIOICR |= 0x10;
       }
       if(GPIOA.GPIOMIS& 0b00100000)               //pin5      =32
       {
           GPIOA.GPIOICR |= 0x10;
       }
       if(GPIOA.GPIOMIS& 0b01000000)              //pin6       =64
       {
           GPIOA.GPIOICR |= 0x10;
       }
       if(GPIOA.GPIOMIS& 0b10000000)              //pin7      =128
       {
           GPIOA.GPIOICR |= 0x10;
       }
}
void PORTB_ISR()
{
       if(GPIOB.GPIOMIS & 0b00000001)                //pin0    =1
       {
           ENABEL_OUTPUT_PIN(PORTB, 1, 2);
           GPIOB.GPIOICR |= 0x10;
       }
       if(GPIOB.GPIOMIS& 0b00000010)                 //pin1     =2
       {
           GPIOB.GPIOICR |= 0x10;
       }
       if(GPIOB.GPIOMIS& 0b00000100)                 //pin2     =4
       {
           GPIOB.GPIOICR |= 0x10;
       }
       if(GPIOB.GPIOMIS& 0b00001000)                 //pin3    =8
       {
           GPIOB.GPIOICR |= 0x10;
       }
       if(GPIOB.GPIOMIS& 0b000010000)               //pin4     =16
       {
           GPIOB.GPIOICR |= 0x10;
       }
       if(GPIOB.GPIOMIS& 0b00100000)               //pin5      =32
       {
           GPIOB.GPIOICR |= 0x10;
       }
       if(GPIOB.GPIOMIS& 0b01000000)              //pin6       =64
       {
           GPIOB.GPIOICR |= 0x10;
       }
       if(GPIOB.GPIOMIS& 0b10000000)              //pin7      =128
       {
           GPIOB.GPIOICR |= 0x10;
       }
}
void PORTC_ISR()
{
       if(GPIOC.GPIOMIS& 0b00000001)                //pin0    =1
       {
           ENABEL_OUTPUT_PIN(PORTC, 1, 2);
           GPIOC.GPIOICR |= 0x10;
       }
       if(GPIOC.GPIOMIS& 0b00000010)                 //pin1     =2
       {
           GPIOC.GPIOICR |= 0x10;
       }
       if(GPIOC.GPIOMIS& 0b00000100)                 //pin2     =4
       {
           GPIOC.GPIOICR |= 0x10;
       }
       if(GPIOC.GPIOMIS& 0b00001000)                 //pin3    =8
       {
           GPIOC.GPIOICR |= 0x10;
       }
       if(GPIOC.GPIOMIS& 0b00010000)               //pin4     =16
       {
           GPIOC.GPIOICR |= 0x10;
       }
       if(GPIOC.GPIOMIS& 0b00100000)               //pin5      =32
       {
           GPIOC.GPIOICR |= 0x10;
       }
       if(GPIOC.GPIOMIS& 0b00100000)              //pin6       =64
       {
           GPIOC.GPIOICR |= 0x10;
       }
       if(GPIOC.GPIOMIS& 0b10000000)              //pin7      =128
       {
           GPIOC.GPIOICR |= 0x10;
       }
}
void PORTD_ISR()
{
       if(GPIOD.GPIOMIS & 0b00000001)                //pin0    =1
       {
           ENABEL_OUTPUT_PIN(PORTD, 1, 2);
           GPIOD.GPIOICR |= 0x10;
       }
       if(GPIOD.GPIOMIS & 0b00000010)                 //pin1     =2
       {
           GPIOD.GPIOICR |= 0x10;
       }
       if(GPIOD.GPIOMIS& 0b00000100)                 //pin2     =4
       {
           GPIOD.GPIOICR |= 0x10;
       }
       if(GPIOD.GPIOMIS& 0b00001000)                 //pin3    =8
       {
           GPIOD.GPIOICR |= 0x10;
       }
       if(GPIOD.GPIOMIS& 0b00010000)               //pin4     =16
       {
           GPIOD.GPIOICR |= 0x10;
       }
       if(GPIOD.GPIOMIS& 0b00100000)               //pin5      =32
       {
           GPIOD.GPIOICR |= 0x10;
       }
       if(GPIOD.GPIOMIS& 0b01000000)              //pin6       =64
       {
           GPIOD.GPIOICR |= 0x10;
       }
       if(GPIOD.GPIOMIS& 0b10000000)              //pin7      =128
       {
           GPIOD.GPIOICR |= 0x10;
       }
}
void PORTE_ISR()
{
       if(GPIOE.GPIOMIS & 0b00000001)                //pin0    =1
       {
           ENABEL_OUTPUT_PIN(PORTE, 1, 2);
           GPIOE.GPIOICR |= 0x10;
       }
       if(GPIOE.GPIOMIS& 0b00000010)                 //pin1     =2
       {
           GPIOE.GPIOICR |= 0x10;
       }
       if(GPIOE.GPIOMIS& 0b00000100)                 //pin2     =4
       {
           GPIOE.GPIOICR |= 0x10;
       }
       if(GPIOE.GPIOMIS& 0b00001000)                 //pin3    =8
       {
           GPIOE.GPIOICR |= 0x10;
       }
       if(GPIOE.GPIOMIS& 0b00010000)               //pin4     =16
       {
           GPIOE.GPIOICR |= 0x10;
       }
       if(GPIOE.GPIOMIS& 0b00100000)               //pin5      =32
       {
           GPIOE.GPIOICR |= 0x10;
       }
       if(GPIOE.GPIOMIS& 0b01000000)              //pin6       =64
       {
           GPIOE.GPIOICR |= 0x10;
       }
       if(GPIOE.GPIOMIS& 0b10000000)              //pin7      =128
       {
           GPIOE.GPIOICR |= 0x10;
       }
}
void PORTF_ISR()
{
    if(GPIOF.GPIOMIS & 0b00000001)                //pin0    =1
    {
        ENABEL_OUTPUT_PIN(PORTF, 1, 2);
        GPIOF.GPIOICR |= 0x10;
    }
    if(GPIOF.GPIOMIS& 0b00000010)                 //pin1     =2
    {
        GPIOF.GPIOICR |= 0x10;
    }
    if(GPIOF.GPIOMIS& 0b00000100)                 //pin2     =4
    {
        GPIOF.GPIOICR |= 0x10;
    }
    if(GPIOF.GPIOMIS& 0b00001000)                 //pin3    =8
    {
       // ENABEL_OUTPUT_PIN(PORTF, 1, 2);
        GPIOF.GPIOICR |= 0x10;
    }
    if(GPIOF.GPIOMIS& 0b00010000)               //pin4     =16
    {
       // ENABEL_OUTPUT_TOGGEL_PIN (PORTF, 3, 8);
        GPIOF.GPIODATA[255] ^=(1<<3);
        GPIOF.GPIOICR |= 0x10;
    }
    if(GPIOF.GPIOMIS& 0b00100000)               //pin5      =32
    {
        GPIOF.GPIOICR |= 0x10;
    }
    if(GPIOF.GPIOMIS& 0b01000000)              //pin6       =64
    {
        GPIOF.GPIOICR |= 0x10;
    }
    if(GPIOF.GPIOMIS& 0b10000000)              //pin7      =128
    {
        GPIOF.GPIOICR |= 0x10;
    }


}

