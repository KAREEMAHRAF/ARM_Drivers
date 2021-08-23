/*
 * TIMER.c
 *
 *  Created on: Jan 17, 2021
 *      Author: kareem ashraf
 */



#include "TIMER.h"

void TIMER_INIT_Periodic_Timer(NUM_Timer TIMER ,Type_Timer_Register  REGISTER)
{


    if(REGISTER==REGISTER_A)
    {
        if(TIMER==Timer_0)
            {
                    Timer0.GPTMCTL    = 0 ;            //CLEAR_TIMER
                    Timer0.GPTMCFG    = 0x00000000;
                    Timer0.GPTMTAMR   = (3<<0x2) ;     //TO_USE_ONE SHOO TMOOD
                    Timer0.GPTMTAILR  = 4.294967296;
                    Timer0.GPTMCTL    |= (1<<0);       //ENABEL_TIMER
            }
            if(TIMER==Timer_1)
                {
                    Timer1.GPTMCTL    = 0 ;            //CLEAR_TIMER
                    Timer1.GPTMCFG    = 0x00000000;
                    Timer1.GPTMTAMR   = (3<<0x2) ;     //TO_USE_ONE SHOO TMOOD
                    Timer1.GPTMTAILR  = 4.294967296;
                    Timer1.GPTMCTL    |= (1<<0);       //ENABEL_TIMER
                }
            if(TIMER==Timer_2)
                {
                    Timer2.GPTMCTL    = 0 ;            //CLEAR_TIMER
                    Timer2.GPTMCFG    = 0x00000000;
                    Timer2.GPTMTAMR   = (3<<0x2) ;     //TO_USE_ONE SHOO TMOOD
                    Timer2.GPTMTAILR  = 4.294967296;
                    Timer2.GPTMCTL    |= (1<<0);       //ENABEL_TIMER
                }
            if(TIMER==Timer_3)
                {
                    Timer3.GPTMCTL    = 0 ;            //CLEAR_TIMER
                    Timer3.GPTMCFG    = 0x00000000;
                    Timer3.GPTMTAMR   = (3<<0x2) ;     //TO_USE_ONE SHOO TMOOD
                    Timer3.GPTMTAILR  = 4.294967296;
                    Timer3.GPTMCTL    |= (1<<0);       //ENABEL_TIMER
                }
            if(TIMER==Timer_4)
                {
                    Timer4.GPTMCTL    = 0 ;            //CLEAR_TIMER
                    Timer4.GPTMCFG    = 0x00000000;
                    Timer4.GPTMTAMR   = (3<<0x2) ;     //TO_USE_ONE SHOO TMOOD
                    Timer4.GPTMTAILR  = 4.294967296;
                    Timer4.GPTMCTL    |= (1<<0);       //ENABEL_TIMER
                }
            if(TIMER==Timer_5)
                {
                    Timer5.GPTMCTL    = 0 ;            //CLEAR_TIMER
                    Timer5.GPTMCFG    = 0x00000000;
                    Timer5.GPTMTAMR   = (3<<0x2) ;     //TO_USE_ONE SHOO TMOOD
                    Timer5.GPTMTAILR  = 4.294967296;
                    Timer5.GPTMCTL    |= (1<<0);       //ENABEL_TIMER
                }
    }
    if(REGISTER==REGISTER_B)
    {
        if(TIMER==Timer_0)
            {
                    Timer0.GPTMCTL    = 0 ;            //CLEAR_TIMER
                    Timer0.GPTMCFG    = 0x00000000;
                    Timer0.GPTMTBMR   = (3<<0x2) ;     //TO_USE_ONE SHOO TMOOD
                    Timer0.GPTMTBILR  = 4.294967296;
                    Timer0.GPTMCTL    |= (1<<0);       //ENABEL_TIMER
            }
            if(TIMER==Timer_1)
                {
                    Timer1.GPTMCTL    = 0 ;            //CLEAR_TIMER
                    Timer1.GPTMCFG    = 0x00000000;
                    Timer1.GPTMTBMR   = (3<<0x2) ;     //TO_USE_ONE SHOO TMOOD
                    Timer1.GPTMTBILR  = 4.294967296;
                    Timer1.GPTMCTL    |= (1<<0);       //ENABEL_TIMER
                }
            if(TIMER==Timer_2)
                {
                    Timer2.GPTMCTL    = 0 ;            //CLEAR_TIMER
                    Timer2.GPTMCFG    = 0x00000000;
                    Timer2.GPTMTBMR   = (3<<0x2) ;     //TO_USE_ONE SHOO TMOOD
                    Timer2.GPTMTBILR  = 4.294967296;
                    Timer2.GPTMCTL    |= (1<<0);       //ENABEL_TIMER
                }
            if(TIMER==Timer_3)
                {
                    Timer3.GPTMCTL    = 0 ;            //CLEAR_TIMER
                    Timer3.GPTMCFG    = 0x00000000;
                    Timer3.GPTMTBMR   = (3<<0x2) ;     //TO_USE_ONE SHOO TMOOD
                    Timer3.GPTMTBILR  = 4.294967296;
                    Timer3.GPTMCTL    |= (1<<0);       //ENABEL_TIMER
                }
            if(TIMER==Timer_4)
                {
                    Timer4.GPTMCTL    = 0 ;            //CLEAR_TIMER
                    Timer4.GPTMCFG    = 0x00000000;
                    Timer4.GPTMTBMR   = (3<<0x2) ;     //TO_USE_ONE SHOO TMOOD
                    Timer4.GPTMTBILR  = 4.294967296;
                    Timer4.GPTMCTL    |= (1<<0);       //ENABEL_TIMER
                }
            if(TIMER==Timer_5)
                {
                    Timer5.GPTMCTL    = 0 ;            //CLEAR_TIMER
                    Timer5.GPTMCFG    = 0x00000000;
                    Timer5.GPTMTBMR   = (3<<0x2) ;     //TO_USE_ONE SHOO TMOOD
                    Timer5.GPTMTBILR  = 4.294967296;
                    Timer5.GPTMCTL    |= (1<<0);       //ENABEL_TIMER
                }
    }


}
void TIMER_INIT_ONESHOT_Timer(NUM_Timer TIMER ,Type_Timer_Register  REGISTER)
{


    if(REGISTER==REGISTER_A)
       {
           if(TIMER==Timer_0)
               {
                       Timer0.GPTMCTL    = 0 ;            //CLEAR_TIMER
                       Timer0.GPTMCFG    = 0x00000000;
                       Timer0.GPTMTAMR   = (3<<0x1) ;     //TO_USE_ONE SHOO TMOOD
                       Timer0.GPTMTAILR  = 4.294967296;
                       Timer0.GPTMCTL    |= (1<<0);       //ENABEL_TIMER
               }
               if(TIMER==Timer_1)
                   {
                       Timer1.GPTMCTL    = 0 ;            //CLEAR_TIMER
                       Timer1.GPTMCFG    = 0x00000000;
                       Timer1.GPTMTAMR   = (3<<0x1) ;     //TO_USE_ONE SHOO TMOOD
                       Timer1.GPTMTAILR  = 4.294967296;
                       Timer1.GPTMCTL    |= (1<<0);       //ENABEL_TIMER
                   }
               if(TIMER==Timer_2)
                   {
                       Timer2.GPTMCTL    = 0 ;            //CLEAR_TIMER
                       Timer2.GPTMCFG    = 0x00000000;
                       Timer2.GPTMTAMR   = (3<<0x1) ;     //TO_USE_ONE SHOO TMOOD
                       Timer2.GPTMTAILR  = 4.294967296;
                       Timer2.GPTMCTL    |= (1<<0);       //ENABEL_TIMER
                   }
               if(TIMER==Timer_3)
                   {
                       Timer3.GPTMCTL    = 0 ;            //CLEAR_TIMER
                       Timer3.GPTMCFG    = 0x00000000;
                       Timer3.GPTMTAMR   = (3<<0x1) ;     //TO_USE_ONE SHOO TMOOD
                       Timer3.GPTMTAILR  = 4.294967296;
                       Timer3.GPTMCTL    |= (1<<0);       //ENABEL_TIMER
                   }
               if(TIMER==Timer_4)
                   {
                       Timer4.GPTMCTL    = 0 ;            //CLEAR_TIMER
                       Timer4.GPTMCFG    = 0x00000000;
                       Timer4.GPTMTAMR   = (3<<0x1) ;     //TO_USE_ONE SHOO TMOOD
                       Timer4.GPTMTAILR  = 4.294967296;
                       Timer4.GPTMCTL    |= (1<<0);       //ENABEL_TIMER
                   }
               if(TIMER==Timer_5)
                   {
                       Timer5.GPTMCTL    = 0 ;            //CLEAR_TIMER
                       Timer5.GPTMCFG    = 0x00000000;
                       Timer5.GPTMTAMR   = (3<<0x1) ;     //TO_USE_ONE SHOO TMOOD
                       Timer5.GPTMTAILR  = 4.294967296;
                       Timer5.GPTMCTL    |= (1<<0);       //ENABEL_TIMER
                   }
       }
       if(REGISTER==REGISTER_B)
       {
           if(TIMER==Timer_0)
               {
                       Timer0.GPTMCTL    = 0 ;            //CLEAR_TIMER
                       Timer0.GPTMCFG    = 0x00000000;
                       Timer0.GPTMTBMR   = (3<<0x1) ;     //TO_USE_ONE SHOO TMOOD
                       Timer0.GPTMTBILR  = 4.294967296;
                       Timer0.GPTMCTL    |= (1<<0);       //ENABEL_TIMER
               }
               if(TIMER==Timer_1)
                   {
                       Timer1.GPTMCTL    = 0 ;            //CLEAR_TIMER
                       Timer1.GPTMCFG    = 0x00000000;
                       Timer1.GPTMTBMR   = (3<<0x1) ;     //TO_USE_ONE SHOO TMOOD
                       Timer1.GPTMTBILR  = 4.294967296;
                       Timer1.GPTMCTL    |= (1<<0);       //ENABEL_TIMER
                   }
               if(TIMER==Timer_2)
                   {
                       Timer2.GPTMCTL    = 0 ;            //CLEAR_TIMER
                       Timer2.GPTMCFG    = 0x00000000;
                       Timer2.GPTMTBMR   = (3<<0x1) ;     //TO_USE_ONE SHOO TMOOD
                       Timer2.GPTMTBILR  = 4.294967296;
                       Timer2.GPTMCTL    |= (1<<0);       //ENABEL_TIMER
                   }
               if(TIMER==Timer_3)
                   {
                       Timer3.GPTMCTL    = 0 ;            //CLEAR_TIMER
                       Timer3.GPTMCFG    = 0x00000000;
                       Timer3.GPTMTBMR   = (3<<0x1) ;     //TO_USE_ONE SHOO TMOOD
                       Timer3.GPTMTBILR  = 4.294967296;
                       Timer3.GPTMCTL    |= (1<<0);       //ENABEL_TIMER
                   }
               if(TIMER==Timer_4)
                   {
                       Timer4.GPTMCTL    = 0 ;            //CLEAR_TIMER
                       Timer4.GPTMCFG    = 0x00000000;
                       Timer4.GPTMTBMR   = (3<<0x1) ;     //TO_USE_ONE SHOO TMOOD
                       Timer4.GPTMTBILR  = 4.294967296;
                       Timer4.GPTMCTL    |= (1<<0);       //ENABEL_TIMER
                   }
               if(TIMER==Timer_5)
                   {
                       Timer5.GPTMCTL    = 0 ;            //CLEAR_TIMER
                       Timer5.GPTMCFG    = 0x00000000;
                       Timer5.GPTMTBMR   = (3<<0x1) ;     //TO_USE_ONE SHOO TMOOD
                       Timer5.GPTMTBILR  = 4.294967296;
                       Timer5.GPTMCTL    |= (1<<0);       //ENABEL_TIMER
                   }
       }
}
void TIMER_INIT_Real_Time_Clock (NUM_Timer TIMER ,Type_Timer_Register  REGISTER)
{


    if(REGISTER==REGISTER_A)
           {
               if(TIMER==Timer_0)
                   {
                       Timer0.GPTMCTL        = 0 ;             //CLEAR_TIMER
                       Timer0.GPTMCFG        = 0x00000001;
                       //Timer0.GPTMTAMATCHR   =255;
                       Timer0.GPTMCTL        |= (1<<4);
                       Timer0.GPTMCTL        &=~(1<<1);
                       //Timer0.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                       Timer0.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                       Timer0.GPTMICR        |= (1<<3);
                   }
                   if(TIMER==Timer_1)
                       {
                       Timer1.GPTMCTL        = 0 ;             //CLEAR_TIMER
                       Timer1.GPTMCFG        = 0x00000001;
                       //Timer1.GPTMTAMATCHR   =255;
                       Timer1.GPTMCTL        |= (1<<4);
                       Timer1.GPTMCTL        &=~(1<<1);
                       //Timer1.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                       Timer1.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                       Timer1.GPTMICR        |= (1<<3);
                       }
                   if(TIMER==Timer_2)
                       {
                       Timer2.GPTMCTL        = 0 ;             //CLEAR_TIMER
                       Timer2.GPTMCFG        = 0x00000001;
                       //Timer2.GPTMTAMATCHR   =255;
                       Timer2.GPTMCTL        |= (1<<4);
                       Timer2.GPTMCTL        &=~(1<<1);
                       //Timer2.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                       Timer2.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                       Timer2.GPTMICR        |= (1<<3);
                       }
                   if(TIMER==Timer_3)
                       {
                       Timer3.GPTMCTL        = 0 ;             //CLEAR_TIMER
                       Timer3.GPTMCFG        = 0x00000001;
                       //Timer3.GPTMTAMATCHR   =255;
                       Timer3.GPTMCTL        |= (1<<4);
                       Timer3.GPTMCTL        &=~(1<<1);
                       //Timer3.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                       Timer3.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                       Timer3.GPTMICR        |= (1<<3);
                       }
                   if(TIMER==Timer_4)
                       {
                       Timer4.GPTMCTL        = 0 ;             //CLEAR_TIMER
                       Timer4.GPTMCFG        = 0x00000001;
                       //Timer4.GPTMTAMATCHR   =255;
                       Timer4.GPTMCTL        |= (1<<4);
                       Timer4.GPTMCTL        &=~(1<<1);
                       //Timer4.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                       Timer4.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                       Timer4.GPTMICR        |= (1<<3);
                       }
                   if(TIMER==Timer_5)
                       {
                       Timer5.GPTMCTL        = 0 ;             //CLEAR_TIMER
                       Timer5.GPTMCFG        = 0x00000001;
                       //Timer5.GPTMTAMATCHR   =255;
                       Timer5.GPTMCTL        |= (1<<4);
                       Timer5.GPTMCTL        &=~(1<<1);
                       //Timer5.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                       Timer5.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                       Timer5.GPTMICR        |= (1<<3);
                       }
           }
           if(REGISTER==REGISTER_B)
           {
               if(TIMER==Timer_0)
                   {
                       Timer0.GPTMCTL        = 0 ;             //CLEAR_TIMER
                       Timer0.GPTMCFG        = 0x00000001;
                       //Timer0.GPTMTAMATCHR   =255;
                       Timer0.GPTMCTL        |= (1<<4);
                       Timer0.GPTMCTL        &=~(1<<1);
                       //Timer0.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                       Timer0.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                       Timer0.GPTMICR        |= (1<<3);
                   }
                   if(TIMER==Timer_1)
                   {
                       Timer1.GPTMCTL        = 0 ;             //CLEAR_TIMER
                       Timer1.GPTMCFG        = 0x00000001;
                       //Timer1.GPTMTAMATCHR   =255;
                       Timer1.GPTMCTL        |= (1<<4);
                       Timer1.GPTMCTL        &=~(1<<1);
                       //Timer1.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                       Timer1.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                       Timer1.GPTMICR        |= (1<<3);
                       }
                   if(TIMER==Timer_2)
                       {
                       Timer2.GPTMCTL        = 0 ;             //CLEAR_TIMER
                       Timer2.GPTMCFG        = 0x00000001;
                       //Timer2.GPTMTAMATCHR   =255;
                       Timer2.GPTMCTL        |= (1<<4);
                       Timer2.GPTMCTL        &=~(1<<1);
                       //Timer2.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                       Timer2.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                       Timer2.GPTMICR        |= (1<<3);
                       }
                   if(TIMER==Timer_3)
                       {
                       Timer3.GPTMCTL        = 0 ;             //CLEAR_TIMER
                       Timer3.GPTMCFG        = 0x00000001;
                       //Timer3.GPTMTAMATCHR   =255;
                       Timer3.GPTMCTL        |= (1<<4);
                       Timer3.GPTMCTL        &=~(1<<1);
                       //Timer3.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                       Timer3.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                       Timer3.GPTMICR        |= (1<<3);
                       }
                   if(TIMER==Timer_4)
                       {
                       Timer4.GPTMCTL        = 0 ;             //CLEAR_TIMER
                       Timer4.GPTMCFG        = 0x00000001;
                       //Timer4.GPTMTAMATCHR   =255;
                       Timer4.GPTMCTL        |= (1<<4);
                       Timer4.GPTMCTL        &=~(1<<1);
                       //Timer4.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                       Timer4.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                       Timer4.GPTMICR        |= (1<<3);
                       }
                   if(TIMER==Timer_5)
                       {
                       Timer5.GPTMCTL        = 0 ;             //CLEAR_TIMER
                       Timer5.GPTMCFG        = 0x00000001;
                       //Timer5.GPTMTAMATCHR   =255;
                       Timer5.GPTMCTL        |= (1<<4);
                       Timer5.GPTMCTL        &=~(1<<1);
                       //Timer5.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                       Timer5.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                       Timer5.GPTMICR        |= (1<<3);
                       }
           }
}
void TIMER_INIT_Edge_Count(NUM_Timer TIMER ,Type_Timer_Register  REGISTER)
{
    if(REGISTER==REGISTER_A)
               {
                   if(TIMER==Timer_0)
                       {
                           Timer0.GPTMCTL        = 0 ;             //CLEAR_TIMER
                           Timer0.GPTMCFG        = 0x00000001;
                           //Timer0.GPTMTAMATCHR   =255;
                           Timer0.GPTMCTL        |= (1<<4);
                           Timer0.GPTMCTL        &=~(1<<1);
                           //Timer0.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                           Timer0.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                           Timer0.GPTMICR        |= (1<<3);
                       }
                       if(TIMER==Timer_1)
                           {
                           Timer1.GPTMCTL        = 0 ;             //CLEAR_TIMER
                           Timer1.GPTMCFG        = 0x00000001;
                           //Timer1.GPTMTAMATCHR   =255;
                           Timer1.GPTMCTL        |= (1<<4);
                           Timer1.GPTMCTL        &=~(1<<1);
                           //Timer1.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                           Timer1.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                           Timer1.GPTMICR        |= (1<<3);
                           }
                       if(TIMER==Timer_2)
                           {
                           Timer2.GPTMCTL        = 0 ;             //CLEAR_TIMER
                           Timer2.GPTMCFG        = 0x00000001;
                           //Timer2.GPTMTAMATCHR   =255;
                           Timer2.GPTMCTL        |= (1<<4);
                           Timer2.GPTMCTL        &=~(1<<1);
                           //Timer2.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                           Timer2.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                           Timer2.GPTMICR        |= (1<<3);
                           }
                       if(TIMER==Timer_3)
                           {
                           Timer3.GPTMCTL        = 0 ;             //CLEAR_TIMER
                           Timer3.GPTMCFG        = 0x00000001;
                           //Timer3.GPTMTAMATCHR   =255;
                           Timer3.GPTMCTL        |= (1<<4);
                           Timer3.GPTMCTL        &=~(1<<1);
                           //Timer3.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                           Timer3.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                           Timer3.GPTMICR        |= (1<<3);
                           }
                       if(TIMER==Timer_4)
                           {
                           Timer4.GPTMCTL        = 0 ;             //CLEAR_TIMER
                           Timer4.GPTMCFG        = 0x00000001;
                           //Timer4.GPTMTAMATCHR   =255;
                           Timer4.GPTMCTL        |= (1<<4);
                           Timer4.GPTMCTL        &=~(1<<1);
                           //Timer4.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                           Timer4.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                           Timer4.GPTMICR        |= (1<<3);
                           }
                       if(TIMER==Timer_5)
                           {
                           Timer5.GPTMCTL        = 0 ;             //CLEAR_TIMER
                           Timer5.GPTMCFG        = 0x00000001;
                           //Timer5.GPTMTAMATCHR   =255;
                           Timer5.GPTMCTL        |= (1<<4);
                           Timer5.GPTMCTL        &=~(1<<1);
                           //Timer5.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                           Timer5.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                           Timer5.GPTMICR        |= (1<<3);
                           }
               }
               if(REGISTER==REGISTER_B)
               {
                   if(TIMER==Timer_0)
                       {
                           Timer0.GPTMCTL        = 0 ;             //CLEAR_TIMER
                           Timer0.GPTMCFG        = 0x00000001;
                           //Timer0.GPTMTAMATCHR   =255;
                           Timer0.GPTMCTL        |= (1<<4);
                           Timer0.GPTMCTL        &=~(1<<1);
                           //Timer0.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                           Timer0.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                           Timer0.GPTMICR        |= (1<<3);
                       }
                       if(TIMER==Timer_1)
                       {
                           Timer1.GPTMCTL        = 0 ;             //CLEAR_TIMER
                           Timer1.GPTMCFG        = 0x00000001;
                           //Timer1.GPTMTAMATCHR   =255;
                           Timer1.GPTMCTL        |= (1<<4);
                           Timer1.GPTMCTL        &=~(1<<1);
                           //Timer1.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                           Timer1.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                           Timer1.GPTMICR        |= (1<<3);
                           }
                       if(TIMER==Timer_2)
                           {
                           Timer2.GPTMCTL        = 0 ;             //CLEAR_TIMER
                           Timer2.GPTMCFG        = 0x00000001;
                           //Timer2.GPTMTAMATCHR   =255;
                           Timer2.GPTMCTL        |= (1<<4);
                           Timer2.GPTMCTL        &=~(1<<1);
                           //Timer2.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                           Timer2.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                           Timer2.GPTMICR        |= (1<<3);
                           }
                       if(TIMER==Timer_3)
                           {
                           Timer3.GPTMCTL        = 0 ;             //CLEAR_TIMER
                           Timer3.GPTMCFG        = 0x00000001;
                           //Timer3.GPTMTAMATCHR   =255;
                           Timer3.GPTMCTL        |= (1<<4);
                           Timer3.GPTMCTL        &=~(1<<1);
                           //Timer3.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                           Timer3.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                           Timer3.GPTMICR        |= (1<<3);
                           }
                       if(TIMER==Timer_4)
                           {
                           Timer4.GPTMCTL        = 0 ;             //CLEAR_TIMER
                           Timer4.GPTMCFG        = 0x00000001;
                           //Timer4.GPTMTAMATCHR   =255;
                           Timer4.GPTMCTL        |= (1<<4);
                           Timer4.GPTMCTL        &=~(1<<1);
                           //Timer4.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                           Timer4.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                           Timer4.GPTMICR        |= (1<<3);
                           }
                       if(TIMER==Timer_5)
                           {
                           Timer5.GPTMCTL        = 0 ;             //CLEAR_TIMER
                           Timer5.GPTMCFG        = 0x00000001;
                           //Timer5.GPTMTAMATCHR   =255;
                           Timer5.GPTMCTL        |= (1<<4);
                           Timer5.GPTMCTL        &=~(1<<1);
                           //Timer5.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                           Timer5.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                           Timer5.GPTMICR        |= (1<<3);
                           }
               }

}
void TIMER_INIT_Edge_Time(NUM_Timer TIMER ,Type_Timer_Register  REGISTER)
{
    if(REGISTER==REGISTER_A)
               {
                   if(TIMER==Timer_0)
                       {
                           Timer0.GPTMCTL        = 0 ;             //CLEAR_TIMER
                           Timer0.GPTMCFG        = 0x00000001;
                           //Timer0.GPTMTAMATCHR   =255;
                           Timer0.GPTMCTL        |= (1<<4);
                           Timer0.GPTMCTL        &=~(1<<1);
                           //Timer0.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                           Timer0.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                           Timer0.GPTMICR        |= (1<<3);
                       }
                       if(TIMER==Timer_1)
                           {
                           Timer1.GPTMCTL        = 0 ;             //CLEAR_TIMER
                           Timer1.GPTMCFG        = 0x00000001;
                           //Timer1.GPTMTAMATCHR   =255;
                           Timer1.GPTMCTL        |= (1<<4);
                           Timer1.GPTMCTL        &=~(1<<1);
                           //Timer1.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                           Timer1.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                           Timer1.GPTMICR        |= (1<<3);
                           }
                       if(TIMER==Timer_2)
                           {
                           Timer2.GPTMCTL        = 0 ;             //CLEAR_TIMER
                           Timer2.GPTMCFG        = 0x00000001;
                           //Timer2.GPTMTAMATCHR   =255;
                           Timer2.GPTMCTL        |= (1<<4);
                           Timer2.GPTMCTL        &=~(1<<1);
                           //Timer2.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                           Timer2.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                           Timer2.GPTMICR        |= (1<<3);
                           }
                       if(TIMER==Timer_3)
                           {
                           Timer3.GPTMCTL        = 0 ;             //CLEAR_TIMER
                           Timer3.GPTMCFG        = 0x00000001;
                           //Timer3.GPTMTAMATCHR   =255;
                           Timer3.GPTMCTL        |= (1<<4);
                           Timer3.GPTMCTL        &=~(1<<1);
                           //Timer3.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                           Timer3.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                           Timer3.GPTMICR        |= (1<<3);
                           }
                       if(TIMER==Timer_4)
                           {
                           Timer4.GPTMCTL        = 0 ;             //CLEAR_TIMER
                           Timer4.GPTMCFG        = 0x00000001;
                           //Timer4.GPTMTAMATCHR   =255;
                           Timer4.GPTMCTL        |= (1<<4);
                           Timer4.GPTMCTL        &=~(1<<1);
                           //Timer4.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                           Timer4.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                           Timer4.GPTMICR        |= (1<<3);
                           }
                       if(TIMER==Timer_5)
                           {
                           Timer5.GPTMCTL        = 0 ;             //CLEAR_TIMER
                           Timer5.GPTMCFG        = 0x00000001;
                           //Timer5.GPTMTAMATCHR   =255;
                           Timer5.GPTMCTL        |= (1<<4);
                           Timer5.GPTMCTL        &=~(1<<1);
                           //Timer5.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                           Timer5.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                           Timer5.GPTMICR        |= (1<<3);
                           }
               }
               if(REGISTER==REGISTER_B)
               {
                   if(TIMER==Timer_0)
                       {
                           Timer0.GPTMCTL        = 0 ;             //CLEAR_TIMER
                           Timer0.GPTMCFG        = 0x00000001;
                           //Timer0.GPTMTAMATCHR   =255;
                           Timer0.GPTMCTL        |= (1<<4);
                           Timer0.GPTMCTL        &=~(1<<1);
                           //Timer0.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                           Timer0.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                           Timer0.GPTMICR        |= (1<<3);
                       }
                       if(TIMER==Timer_1)
                       {
                           Timer1.GPTMCTL        = 0 ;             //CLEAR_TIMER
                           Timer1.GPTMCFG        = 0x00000001;
                           //Timer1.GPTMTAMATCHR   =255;
                           Timer1.GPTMCTL        |= (1<<4);
                           Timer1.GPTMCTL        &=~(1<<1);
                           //Timer1.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                           Timer1.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                           Timer1.GPTMICR        |= (1<<3);
                           }
                       if(TIMER==Timer_2)
                           {
                           Timer2.GPTMCTL        = 0 ;             //CLEAR_TIMER
                           Timer2.GPTMCFG        = 0x00000001;
                           //Timer2.GPTMTAMATCHR   =255;
                           Timer2.GPTMCTL        |= (1<<4);
                           Timer2.GPTMCTL        &=~(1<<1);
                           //Timer2.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                           Timer2.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                           Timer2.GPTMICR        |= (1<<3);
                           }
                       if(TIMER==Timer_3)
                           {
                           Timer3.GPTMCTL        = 0 ;             //CLEAR_TIMER
                           Timer3.GPTMCFG        = 0x00000001;
                           //Timer3.GPTMTAMATCHR   =255;
                           Timer3.GPTMCTL        |= (1<<4);
                           Timer3.GPTMCTL        &=~(1<<1);
                           //Timer3.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                           Timer3.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                           Timer3.GPTMICR        |= (1<<3);
                           }
                       if(TIMER==Timer_4)
                           {
                           Timer4.GPTMCTL        = 0 ;             //CLEAR_TIMER
                           Timer4.GPTMCFG        = 0x00000001;
                           //Timer4.GPTMTAMATCHR   =255;
                           Timer4.GPTMCTL        |= (1<<4);
                           Timer4.GPTMCTL        &=~(1<<1);
                           //Timer4.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                           Timer4.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                           Timer4.GPTMICR        |= (1<<3);
                           }
                       if(TIMER==Timer_5)
                           {
                           Timer5.GPTMCTL        = 0 ;             //CLEAR_TIMER
                           Timer5.GPTMCFG        = 0x00000001;
                           //Timer5.GPTMTAMATCHR   =255;
                           Timer5.GPTMCTL        |= (1<<4);
                           Timer5.GPTMCTL        &=~(1<<1);
                           //Timer5.GPTMIMR        |= (1<<3);      //ENABEL INTERRUPT
                           Timer5.GPTMCTL        |= (1<<0);          //ENABEL_TIMER
                           Timer5.GPTMICR        |= (1<<3);
                           }
               }

}
void TIMER_INIT_PWM(uint8 duty,NUM_Timer TIMER ,Type_Timer_Register  REGISTER)
{
    Timer0.GPTMCTL    = 0 ;
    Timer0.GPTMCFG    = 0x00000004;
   // Timer0.GPTMTAMR   |= (1<<3) |= (1<<2) |= (1<<1) |= (1<<0);
   // Timer0.GPTMCTL    |= (1<<0) |= (1<<0) |= (1<<6);
    Timer0.GPTMTAILR  = duty * 42949672.96;
   // Timer0.GPTMTAMATCHR;
}

void TIMER0_A()
{

}
void TIMER1_A()
{

}
void TIMER2_A()
{

}
void TIMER3_A()
{

}
void TIMER4_A()
{

}
void TIMER5_A()
{

}



void TIMER0_B()
{

}
void TIMER1_B()
{

}
void TIMER2_B()
{

}
void TIMER3_B()
{

}
void TIMER4_B()
{

}
void TIMER5_B()
{

}


