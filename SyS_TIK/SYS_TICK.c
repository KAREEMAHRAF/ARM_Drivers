/*
 * SYSTICK.c
 *
 *  Created on: Jan 17, 2021
 *      Author: kareem ashraf
 */
#include "SYS_TICK.h"
#include "../DIO/DIO.h"
#include "PWM/PWM.h"

void SYS_TICK_INIT(PORT_pos PORT, uint8 pin_number)
{
    RCGCGPIO |= 0x20;

    SystemTick.STRELOAD =15999999;
    SystemTick.STCTRL =7;
    SystemTick.STCURRENT =0;

    if(PORT==PORTA)
    {
        GPIOA.GPIODIR       |=(1<<pin_number); //set GREEN pin as a digital output pin
        GPIOA.GPIODEN       |=(1<<pin_number);  // Enable PF3 pin as a digital pin
    }
    if(PORT==PORTB)
    {
        GPIOB.GPIODIR       |=(1<<pin_number); //set GREEN pin as a digital output pin
        GPIOB.GPIODEN       |=(1<<pin_number);  // Enable PF3 pin as a digital pin
    }
    if(PORT==PORTC)
    {
        GPIOC.GPIODIR       |=(1<<pin_number); //set GREEN pin as a digital output pin
        GPIOC.GPIODEN       |=(1<<pin_number);  // Enable PF3 pin as a digital pin
    }
    if(PORT==PORTD)
    {
        GPIOD.GPIODIR       |=(1<<pin_number); //set GREEN pin as a digital output pin
        GPIOD.GPIODEN       |=(1<<pin_number);  // Enable PF3 pin as a digital pin
    }
    if(PORT==PORTE)
    {
        GPIOE.GPIODIR       |=(1<<pin_number); //set GREEN pin as a digital output pin
        GPIOE.GPIODEN       |=(1<<pin_number);  // Enable PF3 pin as a digital pin
    }
    if(PORT==PORTF)
    {
        GPIOF.GPIODIR       |=(1<<pin_number); //set GREEN pin as a digital output pin
        GPIOF.GPIODEN       |=(1<<pin_number);  // Enable PF3 pin as a digital pin
    }


}

void systick_cc(void)
{
       SystemTick.STRELOAD =15999999;
       SystemTick.STCTRL =7;
       SystemTick.STCURRENT =0;
}


void SysTick_handler(PORT_pos PORT, uint8 pin_number)
{
   //ENABEL_OUTPUT_TOGGEL_PIN(PORTF,3,8);
   // GPIOF.GPIODATA[255]  ^= 4;
    if(PORT==PORTA)
       {
        if(pin_number==0)
        {

        }
        if(pin_number==1)
        {

        }
        if(pin_number==2)
        {

        }
        if(pin_number==3)
        {

        }
        if(pin_number==4)
        {

        }
        if(pin_number==5)
        {

        }
        if(pin_number==6)
        {

        }
        if(pin_number==6)
        {

        }
        if(pin_number==7)
        {

        }
   }
       if(PORT==PORTB)
       {
           if(pin_number==0)
           {

           }
           if(pin_number==1)
           {

           }
           if(pin_number==2)
           {

           }
           if(pin_number==3)
           {

           }
           if(pin_number==4)
           {

           }
           if(pin_number==5)
           {

           }
           if(pin_number==6)
           {

           }
           if(pin_number==6)
           {

           }
           if(pin_number==7)
           {

           }
       }
       if(PORT==PORTC)
       {
           if(pin_number==0)
           {

           }
           if(pin_number==1)
           {

           }
           if(pin_number==2)
           {

           }
           if(pin_number==3)
           {

           }
           if(pin_number==4)
           {

           }
           if(pin_number==5)
           {

           }
           if(pin_number==6)
           {

           }
           if(pin_number==6)
           {

           }
           if(pin_number==7)
           {

           }
       }
       if(PORT==PORTD)
       {
           if(pin_number==0)
           {

           }
           if(pin_number==1)
           {

           }
           if(pin_number==2)
           {

           }
           if(pin_number==3)
           {

           }
           if(pin_number==4)
           {

           }
           if(pin_number==5)
           {

           }
           if(pin_number==6)
           {

           }
           if(pin_number==6)
           {

           }
           if(pin_number==7)
           {

           }
       }
       if(PORT==PORTE)
       {
           if(pin_number==0)
           {

           }
           if(pin_number==1)
           {

           }
           if(pin_number==2)
           {

           }
           if(pin_number==3)
           {

           }
           if(pin_number==4)
           {

           }
           if(pin_number==5)
           {

           }
           if(pin_number==6)
           {

           }
           if(pin_number==6)
           {

           }
           if(pin_number==7)
           {

           }
       }
       if(PORT==PORTF)
       {

           if(pin_number==0)
           {

           }
           if(pin_number==1)
           {
               PWM1_F1_ININT_SERVOV_BALANCE();
               PWM1_F1_duty(100);
           }
           if(pin_number==2)
           {
               PWM1_F2_ININT_SERVOV_BALANCE();
               PWM1_F2_duty(100);
           }
           if(pin_number==3)
           {
               PWM1_F3_ININT_SERVOV_BALANCE();
               PWM1_F3_duty(100);
           }
           if(pin_number==4)
           {

           }
           if(pin_number==5)
           {

           }
           if(pin_number==6)
           {

           }
           if(pin_number==6)
           {

           }
           if(pin_number==7)
           {

           }


       }



}




