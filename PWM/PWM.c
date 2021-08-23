/*
 * PWM.c
 *
 *  Created on: Jan 18, 2021
 *      Author: kareem ashraf
 */



#include "PWM.h"
#include "DIO/DIO.h"


void PWM0_B6_ININT_3000KV_MOTOR_PERIOD()              //PIN B6
{
    //PIN_CONFIGER
        RCGCGPIO |= 0x20;
        RCGCPWM |= (1<<0);                           //ENABEL_PWM0
        RCC &= ~0x00100000;

        GPIOB.GPIODEN |= (1<<6);                     //B6

        GPIOB.GPIOAFSEL |= (1<<6);                   //ENABEL PIN_B6 TO WORK PWM
        GPIOB.GPIOPCTL  &=~ (1<<6);                  // clear
        GPIOB.GPIOPCTL  |= 0x04000000;               //set B6



        PWM0._1CTL  &=~  (1<<0);                     // clear
        PWM0._1CTL  |=   (1<<1);
        PWM0._1GENA  =   0x0000008C;
        PWM0._1LOAD  =   (16000);                    //STEP SIVEN set period
        PWM0._1CTL   =   (1<<0);                     //STEP TEN Start the timers in PWM generator 0
        PWM0.ENABLE  =   (0x64);                     //STEP ELEVEN Enable PWM outputs
}

void PWM0_B7_ININT_3000KV_MOTOR_PERIOD()             //PIN B7
{
    //PIN_CONFIGER
        RCGCGPIO |= 0x20;
        RCGCPWM |= (1<<0);                          //ENABEL_PWM0
        RCC &= ~0x00100000;

        GPIOB.GPIODEN |= (1<<7);                     //B7

        GPIOB.GPIOAFSEL |= (1<<7);                  //ENABEL PIN_B7 TO WORK PWM
        GPIOB.GPIOPCTL  &=~ (1<<7);                 // clear
        GPIOB.GPIOPCTL  |= 0x40000000;              //set B7



        PWM0._1CTL  &=~  (1<<0);                    // clear
        PWM0._1CTL  |=   (1<<1);
        PWM0._1GENB  =   0x0000080C;
        PWM0._1LOAD  =   (16000);                   //STEP SIVEN set period
        PWM0._1CTL   =   (1<<0);                    //STEP TEN Start the timers in PWM generator 0
        PWM0.ENABLE  =   (0x128);                   //STEP ELEVEN Enable PWM outputs
}


void PWM0_B4_ININT_3000KV_MOTOR_PERIOD()            //PIN B4
{
    //PIN_CONFIGER
        RCGCGPIO |= 0x20;
        RCGCPWM |= (1<<0);                          //ENABEL_PWM0
        RCC &= ~0x00100000;

        GPIOB.GPIODEN |= (1<<4);                    //B4

        GPIOB.GPIOAFSEL |= (1<<4);                  //ENABEL PIN_B6 TO WORK PWM
        GPIOB.GPIOPCTL  &=~ (1<<4);                 // clear
        GPIOB.GPIOPCTL  |= 0x00040000;              //set B4



        PWM0._1CTL  &=~  (1<<0);                   // clear
        PWM0._1CTL  |=   (1<<1);
        PWM0._1GENA  =   0x0000008C;
        PWM0._1LOAD  =   (16000);                  //STEP SIVEN set period
        PWM0._1CTL   =   (1<<0);                   //STEP TEN Start the timers in PWM generator 0
        PWM0.ENABLE  =   (0x16);                   //STEP ELEVEN Enable PWM outputs
}


void PWM0_B5_ININT_3000KV_MOTOR_PERIOD()             //PIN B5
{
    //PIN_CONFIGER
        RCGCGPIO |= 0x20;
        RCGCPWM |= (1<<0);                           //ENABEL_PWM0
        RCC &= ~0x00100000;

        GPIOB.GPIODEN |= (1<<5);                     //B5

        GPIOB.GPIOAFSEL |= (1<<5);                   //ENABEL PIN_B6 TO WORK PWM
        GPIOB.GPIOPCTL  &=~ (1<<5);                  // clear
        GPIOB.GPIOPCTL  |= 0x00400000;               //set B5



        PWM0._1CTL  &=~  (1<<0);                     // clear
        PWM0._1CTL  |=   (1<<1);
        PWM0._1GENB  =   0x0000080C;
        PWM0._1LOAD  =   (16000);                   //STEP SIVEN set period
        PWM0._1CTL   =   (1<<0);                    //STEP TEN Start the timers in PWM generator 0
        PWM0.ENABLE  =   (0x32);                    //STEP ELEVEN Enable PWM outputs
}



void PWM0_C4_ININT_SERVO_LEGS()                       //PIN C4
{
    //PIN_CONFIGER
        RCGCGPIO |= 0x20;
        RCGCPWM |= (1<<0);                            //ENABEL_PWM0
        RCC &= ~0x00100000;

        GPIOC.GPIODEN |= (1<<4);                      //C4

        GPIOC.GPIOAFSEL |= (1<<4);                    //ENABEL PIN_B6 TO WORK PWM
        GPIOC.GPIOPCTL  &=~ (1<<4);                   // clear
        GPIOC.GPIOPCTL  |= 0x00040000;                //set C4



        PWM0._3CTL  &=~  (1<<0);                      // clear
        PWM0._3CTL  |=   (1<<1);
        PWM0._3GENA  =   0x0000008C;
        PWM0._3LOAD  =   (16000);                     //STEP SIVEN set period
        PWM0._3CTL   =   (1<<0);                      //STEP TEN Start the timers in PWM generator 0
        PWM0.ENABLE  =   (0x16);                      //STEP ELEVEN Enable PWM outputs
}

void PWM0_C5_ININT_SERVO_EDF()                        //PIN C5
{
    //PIN_CONFIGER
        RCGCGPIO |= 0x20;
        RCGCPWM |= (1<<0);                            //ENABEL_PWM0
        RCC &= ~0x00100000;

        GPIOC.GPIODEN |= (1<<5);                      //BC5

        GPIOC.GPIOAFSEL |= (1<<5);                    //ENABEL PIN_C5 TO WORK PWM
        GPIOC.GPIOPCTL  &=~ (1<<5);                   // clear
        GPIOC.GPIOPCTL  |= 0x00400000;                //set C5



        PWM0._3CTL  &=~  (1<<0);                      // clear
        PWM0._3CTL  |=   (1<<1);
        PWM0._3GENB  =   0x0000080C;
        PWM0._3LOAD  =   (16000);                     //STEP SIVEN set period
        PWM0._3CTL   =   (1<<0);                      //STEP TEN Start the timers in PWM generator 0
        PWM0.ENABLE  =   (0x32);                      //STEP ELEVEN Enable PWM outputs
}



void PWM1_F0_ININT_SERVOV_BALANCE()                  //PIN F0
{
    //PIN_CONFIGER
    RCGCGPIO |= 0x20;
    RCGCPWM |= (1<<1);                               //ENABEL_PWM1
    RCC &= ~0x00100000;

    GPIOF.GPIODEN |= (1<<0);

    GPIOF.GPIOAFSEL |=  (1<<0);                      //ENABEL PIN_F2 TO WORK PWM
    GPIOF.GPIOPCTL  &=~ (1<<0);                      // clear
    GPIOF.GPIOPCTL  |=  0x00000005;                  //set F2




    PWM1._2CTL  &=~ (1<<0);                          // clear
    PWM1._2CTL  |=  (1<<1);
    PWM1._2GENA  =  0x0000008C;
    PWM1._2LOAD  =  (16000);                        //STEP SIVEN set period
    PWM1._2CTL   =  (1<<0);                         //STEP TEN Start the timers in PWM generator 0
    PWM1.ENABLE  =  (0x10);                         //STEP ELEVEN Enable PWM outputs
}

void PWM1_F1_ININT_SERVOV_BALANCE()                //PIN F1
{
    //PIN_CONFIGER
    RCGCGPIO |= 0x20;
    RCGCPWM |= (1<<1);                            //ENABEL_PWM1
    RCC &= ~0x00100000;

    GPIOF.GPIODEN |= (1<<1);

    GPIOF.GPIOAFSEL |= (1<<1);                    //ENABEL PIN_F2 TO WORK PWM
    GPIOF.GPIOPCTL  &=~(0xF<<4);                    // clear
    GPIOF.GPIOPCTL  |= 0x00000050;                //set F2



    PWM1._2CTL  &=~ (1<<0);                       // clear
    PWM1._2CTL  &=~ (1<<1);
    PWM1._2GENB  =  0x0000080C;
    PWM1._2LOAD  =  (16000)  ;                   //STEP SIVEN set period
    PWM1._2CTL   =  (1<<0);                      //STEP TEN Start the timers in PWM generator 0
    PWM1.ENABLE  =  (0x20);                      //STEP ELEVEN Enable PWM outputs
}

void PWM1_F2_ININT_SERVOV_BALANCE()              //PIN F2
{
    //PIN_CONFIGER
    RCGCGPIO |= 0x20;
    RCGCPWM |= (1<<1);                          //ENABEL_PWM1
    RCC &= ~0x00100000;
    GPIOF.GPIODEN |= (1<<2);

    GPIOF.GPIOAFSEL |= (1<<2);                  //ENABEL PIN_F2 TO WORK PWM
    GPIOF.GPIOPCTL  &= ~(0xF<<8) ;                // clear
    GPIOF.GPIOPCTL  |= 0x00000500;              //set F2



    PWM1._3CTL  &=~ (1<<0);                     // clear
    PWM1._3CTL  &=~ (1<<1);
    PWM1._3GENA  =  0x0000008C;
    PWM1._3LOAD  =  (16000);                    //STEP SIVEN set period
    PWM1._3CTL   =  (1<<0);                     //STEP TEN Start the timers in PWM generator 0
    PWM1.ENABLE  =  (0x40);                     //STEP ELEVEN Enable PWM outputs
}

void PWM1_F3_ININT_SERVOV_BALANCE()              //PIN F3
{
    //PIN_CONFIGER
    RCGCGPIO |= 0x20;
    RCGCPWM |= (1<<1);                           //ENABEL_PWM1
    RCC &= ~0x00100000;

    GPIOF.GPIODEN |= (1<<3);

    GPIOF.GPIOAFSEL |= (1<<3);                   //ENABEL PIN_F3 TO WORK PWM
    GPIOF.GPIOPCTL  &= ~(0xF<<12);                  // clear
    GPIOF.GPIOPCTL  |= 0x00005000 ;              //set F3



    PWM1._3CTL  &= ~ (1<<0);                     // clear
    PWM1._3CTL  |=  (1<<1);
    PWM1._3GENB  =   0x0000020C;
    PWM1._3LOAD  =   (16000);                     //STEP SIVEN set period
    PWM1._3CTL   |=  (1<<3);
    PWM1.CTL  |= (1<<3);
    PWM1._3CTL   =   (1<<0);                     //STEP TEN Start the timers in PWM generator 3
    PWM1.ENABLE  |=   (1<<7);                     //STEP ELEVEN Enable PWM outputs
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////D       U       T        Y /////////////////////////////////////////////////////




void PWM0_B6_duty(uint8 duty){


    if(duty==0)
    {
        PWM0._0CMPA = 320*duty ;
    }
    else

        PWM0._0CMPA = 320*duty -1;   /* set duty cycle  */
}
void PWM0_B7_duty(uint8 duty){


    if(duty==0)
    {
        PWM0._0CMPB  = 320*duty ;
    }
    else

        PWM0._0CMPB  = 320*duty -1;   /* set duty cycle  */
}
void PWM0_B4_duty(uint8 duty){


    if(duty==0)
    {
        PWM0._1CMPA = 320*duty ;
    }
    else

        PWM0._1CMPA = 320*duty -1;   /* set duty cycle  */
}
void PWM0_B5_duty(uint8 duty){


    if(duty==0)
    {
        PWM0._1CMPB = 320*duty ;
    }
    else

        PWM0._1CMPB  = 320*duty -1;   /* set duty cycle  */
}




void PWM0_C4_duty(uint8 duty){


    if(duty==0)
    {
        PWM0._3CMPA = 320*duty ;
    }
    else

        PWM0._3CMPA = 320*duty -1;   /* set duty cycle  */
}
void PWM0_C5_duty(uint8 duty){


    if(duty==0)
    {
        PWM0._3CMPB = 320*duty ;
    }
    else

        PWM0._3CMPB = 320*duty -1;   /* set duty cycle  */
}




void PWM1_F0_duty(uint8 duty){


    if(duty==0)
    {
        PWM1._2CMPA = 320*duty ;
    }
    else

        PWM1._2CMPA = 320*duty -1;   /* set duty cycle  */

}
void PWM1_F1_duty(uint8 duty){


    if(duty==0)
    {
        PWM1._2CMPB = 160*duty ;
    }
    else

        PWM1._2CMPB = 160*duty -1;   /* set duty cycle  */

}
void PWM1_F2_duty(uint8 duty){


    if(duty==0)
    {
        PWM1._3CMPA = 160*duty ;
    }
    else

        PWM1._3CMPA = 160*duty -1;   /* set duty cycle  */
}
void PWM1_F3_duty(uint8 duty){
    if(duty==0)
    {
        PWM1._3CMPB = 160*duty ;
    }
    else

       PWM1._3CMPB = 160*duty -1;   /* set duty cycle  */
}



