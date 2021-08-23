/*
 * HW_CONFIGURATION.h
 *
 *  Created on: Jan 10, 2021
 *      Author: kareem ashraf
 */

#ifndef HW_CONFIGURATION_H_
#define HW_CONFIGURATION_H_

#include "STD_MACROS.h"
#include "BIT_MATH.h"


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////D        I      O//////////////////////////////////////////////////////////////////////
//DIO HW_CONFIGURATION
struct GPIO{

    uint32 GPIODATA [256] ;
    uint32 GPIODIR        ;
    uint32 GPIOIS         ;
    uint32 GPIOIBE        ;
    uint32 GPIOIEV        ;
    uint32 GPIOIM         ;
    uint32 GPIORIS        ;
    uint32 GPIOMIS        ;
    uint32 GPIOICR        ;
    uint32 GPIOAFSEL      ;
    uint32 NON[55]        ;
    uint32 GPIODR2R       ;
    uint32 GPIODR4R       ;
    uint32 GPIODR8R       ;
    uint32 GPIOODR        ;
    uint32 GPIOPUR        ;
    uint32 GPIOPDR        ;
    uint32 GPIOSLR        ;
    uint32 GPIODEN        ;
    uint32 GPIOLOCK       ;
    uint32 GPIOCR         ;
    uint32 GPIOAMSEL      ;
    uint32 GPIOPCTL       ;
    uint32 GPIOADCCTL     ;
    uint32 GPIODMACTL     ;

};

#define GPIOA (*((volatile  struct GPIO *) 0x40004000)) //portA
#define GPIOB (*((volatile  struct GPIO *) 0x40005000)) //PORTB
#define GPIOC (*((volatile  struct GPIO *) 0x40006000)) //PORTC
#define GPIOD (*((volatile  struct GPIO *) 0x40007000)) //PORTD
#define GPIOE (*((volatile  struct GPIO *) 0x40024000)) //PORTE
#define GPIOF (*((volatile  struct GPIO *) 0x40025000)) //PORTF

#define RCGCGPIO    *((volatile uint32 *)0x400FE608)

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////N    V     I     C/////////////////////////////////////////////////////////////////////////////////

   // NVIC HW_CONFIGURATION


    struct NVIC
    {
        uint32 EN[5];
        uint32 non1[27];
        uint32 DIS[5];
        uint32 non2[27];
        uint32 PEND[5];
        uint32 non3[27];
        uint32 UNPEND[5];
        uint32 non4[27];
        uint32 ACTIVE[5];
        uint32 non5[27];
        uint8 pri[140];

    };

#define NVICPORTA  (*((volatile struct NVIC *) 0xE000E100))      //interrupt NVIC
#define NVICPORTB  (*((volatile struct NVIC *) 0xE000E100))      //interrupt NVIC
#define NVICPORTC  (*((volatile struct NVIC *) 0xE000E100))      //interrupt NVIC
#define NVICPORTD  (*((volatile struct NVIC *) 0xE000E100))      //interrupt NVIC
#define NVICPORTE  (*((volatile struct NVIC *) 0xE000E100))      //interrupt NVIC
#define NVICPORTF  (*((volatile struct NVIC *) 0xE000E100))      //interrupt NVIC


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////system   tick///////////////////////////////////////////////////////////////
    //SYSTEM TICK

    struct SysTick
    {
        uint32 STCTRL;
        uint32 STRELOAD;
        uint32 STCURRENT;
    };

#define SystemTick (*((volatile  struct SysTick *) 0xE000E010))  //system tick


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////T    I     M     E      R////////////////////////////////////////////////////////
    //TIMER

    struct TIMER
       {
        uint32 GPTMCFG;
        uint32 GPTMTAMR;
        uint32 GPTMTBMR;
        uint32 GPTMCTL;
        uint32 GPTMSYNC[2];
        uint32 GPTMIMR;
        uint32 GPTMRIS;
        uint32 GPTMMIS;
        uint32 GPTMICR;
        uint32 GPTMTAILR;
        uint32 GPTMTBILR;
        uint32 GPTMTAMATCH;
        uint32 GPTMTBMATCH;
        uint32 GPTMTAPR;
        uint32 GPTMTBPR;
        uint32 GPTMTAPMR;
        uint32 GPTMTBPMR;
        uint32 GPTMTAR;
        uint32 GPTMTBR;
        uint32 GPTMTAV;
        uint32 GPTMTBV;
        uint32 GPTMRTCPD;
        uint32 GPTMTAPS;
        uint32 GPTMTBPS;
        uint32 GPTMTAPV;

       };


#define Timer0  (*((volatile struct TIMER *) 0x40030000))
#define Timer1  (*((volatile struct TIMER *) 0x40031000))
#define Timer2  (*((volatile struct TIMER *) 0x40032000))
#define Timer3  (*((volatile struct TIMER *) 0x40033000))
#define Timer4  (*((volatile struct TIMER *) 0x40034000))
#define Timer5  (*((volatile struct TIMER *) 0x40035000))



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////P            W                      M/////////////////////////////////////////////////////////////////////


    //  Pulse Width Modulator (PWM)



        struct PWM{
            uint32 CTL         ;
            uint32 SYNC        ;
            uint32 ENABLE      ;
            uint32 INVERT      ;
            uint32 FAULT       ;
            uint32 INTEN       ;
            uint32 RIS         ;
            uint32 ISC         ;
            uint32 STATUS      ;
            uint32 FAULTVAL    ;
            uint32 ENUPD       ;
            uint32 non[5]      ;

            uint32 _0CTL        ;
            uint32 _0INTEN      ;
            uint32 _0RIS        ;
            uint32 _0ISC        ;
            uint32 _0LOAD       ;
            uint32 _0COUNT      ;
            uint32 _0CMPA       ;
            uint32 _0CMPB       ;
            uint32 _0GENA       ;
            uint32 _0GENB       ;
            uint32 _0DBCTL      ;
            uint32 _0DBRISE     ;
            uint32 _0DBFALL     ;
            uint32 _0FLTSRC0    ;
            uint32 _0FLTSRC1    ;
            uint32 _0MINFLTPER  ;

            uint32 _1CTL        ;
            uint32 _1INTEN      ;
            uint32 _1RIS        ;
            uint32 _1ISC        ;
            uint32 _1LOAD       ;
            uint32 _1COUNT      ;
            uint32 _1CMPA       ;
            uint32 _1CMPB       ;
            uint32 _1GENA       ;
            uint32 _1GENB       ;
            uint32 _1DBCTL      ;
            uint32 _1DBRISE     ;
            uint32 _1DBFALL     ;
            uint32 _1FLTSRC0    ;
            uint32 _1FLTSRC1    ;
            uint32 _1MINFLTPER  ;

            uint32 _2CTL        ;
            uint32 _2INTEN      ;
            uint32 _2RIS        ;
            uint32 _2ISC        ;
            uint32 _2LOAD       ;
            uint32 _2COUNT      ;
            uint32 _2CMPA       ;
            uint32 _2CMPB       ;
            uint32 _2GENA       ;
            uint32 _2GENB       ;
            uint32 _2DBCTL      ;
            uint32 _2DBRISE     ;
            uint32 _2DBFALL     ;
            uint32 _2FLTSRC0    ;
            uint32 _2FLTSRC1    ;
            uint32 _2MINFLTPER  ;

            uint32 _3CTL        ;
            uint32 _3INTEN      ;
            uint32 _3RIS        ;
            uint32 _3ISC        ;
            uint32 _3LOAD       ;
            uint32 _3COUNT      ;
            uint32 _3CMPA       ;
            uint32 _3CMPB       ;
            uint32 _3GENA       ;
            uint32 _3GENB       ;
            uint32 _3DBCTL      ;
            uint32 _3DBRISE     ;
            uint32 _3DBFALL     ;
            uint32 _3FLTSRC0    ;
            uint32 _3FLTSRC1    ;
            uint32 _3MINFLTPER  ;
        };



#define PWM0 (*((volatile  struct PWM *)  0x40028000))       //PWM
#define PWM1 (*((volatile  struct PWM *)  0x40029000))       //PWM



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////// SYSTEM    CONTROL   ///////////////////////////////////////////////////////////////////

     // SYSTEM CONTROL

    struct SYSTEM_CONTROL
    {

        uint32 DID0         ;
        uint32 DID1         ;
        uint32 PBORCTL      ;
        uint32 RIS          ;
        uint32 IMC          ;
        uint32 MISC         ;
        uint32 RESC         ;
        uint32 RCC          ;
        uint32 GPIOHBCTL    ;
        uint32 RCC2         ;
        uint32 MOSCCTL      ;
        uint32 DSLPCLKCF    ;
        uint32 SYSPROP      ;
        uint32 PIOSCCAL     ;
        uint32 PIOSCSTAT    ;
        uint32 PLLFREQ0     ;
        uint32 PLLFREQ1     ;
        uint32 PLLSTAT      ;
        uint32 SLPPWRCF     ;
        uint32 DSLPPWRC     ;
        uint32 LDOSPCTL     ;
        uint32 LDOSPCAL     ;
        uint32 LDODPCTL     ;
        uint32 LDODPCAL     ;
        uint32 SDPMST       ;
        uint32 PPWD         ;
        uint32 PPTIMER      ;
        uint32 PPGPIO       ;
        uint32 PPDMA        ;
        uint32 PPHIB        ;
        uint32 PPUART       ;
        uint32 PPSSI        ;
        uint32 PPI2C        ;
        uint32 PPUSB        ;
        uint32 PPCAN        ;
        uint32 PPADC        ;
        uint32 PPACMP       ;
        uint32 PPPWM        ;
        uint32 PPQEI        ;
        uint32 PPEEPROM     ;
        uint32 PPWTIMER     ;
        uint32 SRWD         ;
        uint32 SRTIMER      ;
        uint32 SRGPIO       ;
        uint32 SRDMA        ;
        uint32 SRHIB        ;
        uint32 SRUART       ;
        uint32 SRSSI        ;
        uint32 SRI2C        ;
        uint32 SRUSB        ;
        uint32 SRCAN        ;
        uint32 SRADC        ;
        uint32 SRACMP       ;
        uint32 SRPWM        ;
        uint32 SRQEI        ;
        uint32 SREEPROM     ;
        uint32 SRWTIMER     ;
        uint32 RCGCWD       ;
        uint32 RCGCTIMER    ;
    //    uint32 RCGCGPIO     ;
        uint32 RCGCDMA      ;
        uint32 RCGCHIB      ;
        uint32 RCGCUART     ;
        uint32 RCGCSSI      ;
        uint32 RCGCI2C      ;
        uint32 RCGCUSB      ;
        uint32 RCGCCAN      ;
        uint32 RCGCADC      ;
        uint32 RCGCACMP     ;
        uint32 RCGCPWM      ;
        uint32 RCGCQEI      ;
        uint32 RCGCEEPRO    ;
        uint32 RCGCWTIME    ;
        uint32 SCGCWD       ;
        uint32 SCGCTIMER    ;
        uint32 SCGCGPIO     ;
        uint32 SCGCDMA      ;
        uint32 SCGCHIB      ;
        uint32 SCGCUART     ;
        uint32 SCGCSSI      ;
        uint32 SCGCI2C      ;
        uint32 SCGCUSB      ;
        uint32 SCGCCAN      ;
        uint32 SCGCADC      ;
        uint32 SCGCACMP     ;
        uint32 SCGCPWM      ;
        uint32 SCGCQEI      ;
        uint32 SCGCEEPROM   ;
        uint32 SCGCWTIMER   ;
        uint32 DCGCWD       ;
        uint32 DCGCTIMER    ;
        uint32 DCGCGPIO     ;
        uint32 DCGCDMA      ;
        uint32 DCGCHIB      ;
        uint32 DCGCUART     ;
        uint32 DCGCSSI      ;
        uint32 DCGCI2C      ;
        uint32 DCGCUSB      ;
        uint32 DCGCCAN      ;
        uint32 DCGCADC      ;
        uint32 DCGCACMP     ;
        uint32 DCGCPWM      ;
        uint32 DCGCQEI      ;
        uint32 DCGCEEPROM   ;
        uint32 DCGCWTIMER   ;
        uint32 PRWD         ;
        uint32 PRTIMER      ;
        uint32 PRGPIO       ;
        uint32 PRDMA        ;
        uint32 PRHIB        ;
        uint32 PRUART       ;
        uint32 PRSSI        ;
        uint32 PRI2C        ;
        uint32 PRUSB        ;
        uint32 PRCAN        ;
        uint32 PRADC        ;
        uint32 PRACMP       ;
        uint32 PRPWM        ;
        uint32 PRQEI        ;
        uint32 PREEPROM     ;
        uint32 PRWTIMER     ;
    };

#define syscontrol (*((volatile  struct SYSTEM_CONTROL *) 0x400FE000))


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////SYSTEM_CONTROL_Legacy/////////////////////////////////////////////////////////////


    struct SYSTEM_CONTROL_Legacy
    {


        uint32 DC0          ;
        uint32 DC1          ;
        uint32 DC2          ;
        uint32 DC3          ;
        uint32 DC4          ;
        uint32 DC5          ;
        uint32 DC6          ;
        uint32 DC7          ;
        uint32 DC8          ;
        uint32 SRCR0        ;
        uint32 SRCR1        ;
        uint32 SRCR2        ;
        uint32 RCGC0        ;
        uint32 RCGC1        ;
        uint32 RCGC2        ;
        uint32 SCGC0        ;
        uint32 SCGC1        ;
        uint32 SCGC2        ;
        uint32 DCGC0        ;
        uint32 DCGC1        ;
        uint32 DCGC2        ;
        uint32 DC9          ;
        uint32 NVMSTAT      ;
    };

#define sysLegacy (*((volatile  struct SYSTEM_CONTROL_Legacy *) 0x400FE008))

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////I         2             C///////////////////////////////////////////////////////////////

struct I2C
      {
               //MASTER
               uint32 I2CMSA      ;
               uint32 I2CMCS      ;
               uint32 I2CMDR      ;
               uint32 I2CMTPR     ;
               uint32 I2CMIMR     ;
               uint32 I2CMRIS     ;
               uint32 I2CMMIS     ;
               uint32 I2CMICR     ;
               uint32 I2CMCR      ;
               uint32 I2CMCLKOCNT[2];
               uint32 I2CMBMON[3] ;
               uint32 I2CMCR2     ;

               //SLEVE            ;
               uint32 I2CSOAR     ;
               uint32 I2CSCSR     ;
               uint32 I2CSDR      ;
               uint32 I2CSIMR     ;
               uint32 I2CSRIS     ;
               uint32 I2CSMIS     ;
               uint32 I2CSICR     ;
               uint32 I2CSOAR2    ;
               uint32 I2CSACKCTL  ;

               //STATE_I2C        ;
               uint32 I2CPP       ;
               uint32 I2CPC       ;
      };

  #define I2C0_ERG (*((volatile  struct I2C *)  0x40020000))  //12C0
  #define I2C1_ERG (*((volatile  struct I2C *)  0x40021000))  //12C1
  #define I2C2_ERG (*((volatile  struct I2C *)  0x40022000))  //12C2
  #define I2C3_ERG (*((volatile  struct I2C *)  0x40023000))  //12C3


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////  U      A       R        T  ///////////////////////////////////////////////////////////////


struct UART
      {
    uint32 UARTDR       ;
    uint32 UARTRSR      ;
    uint32 UARTECR      ;
    uint32 UARTFR       ;
    uint32 UARTILPR     ;
    uint32 UARTIBRD     ;
    uint32 UARTFBRD     ;
    uint32 UARTLCRH     ;
    uint32 UARTCTL      ;
    uint32 UARTIFLS     ;
    uint32 UARTIM       ;
    uint32 UARTRIS      ;
    uint32 UARTMIS      ;
    uint32 UARTICR      ;
    uint32 UARTDMACTL   ;
    uint32 UART9BITADDR ;
    uint32 UART9BITAMASK;
    uint32 UARTPP       ;
    uint32 UARTCC       ;
    uint32 UARTPeriphID4;
    uint32 UARTPeriphID5;
    uint32 UARTPeriphID6;
    uint32 UARTPeriphID7;
    uint32 UARTPeriphID0;
    uint32 UARTPeriphID1;
    uint32 UARTPeriphID2;
    uint32 UARTPeriphID3;
    uint32 UARTPCellID0 ;
    uint32 UARTPCellID1 ;
    uint32 UARTPCellID2 ;
    uint32 UARTPCellID3 ;

};


    #define UART0_ERG (*((volatile  struct UART *)  0x4000C000))  //UART0
    #define UART1_ERG (*((volatile  struct UART *)  0x4000D000))  //UART1
    #define UART2_ERG (*((volatile  struct UART *)  0x4000E000))  //UART2
    #define UART3_ERG (*((volatile  struct UART *)  0x4000F000))  //UART3
    #define UART4_ERG (*((volatile  struct UART *)  0x40010000))  //UART4
    #define UART5_ERG (*((volatile  struct UART *)  0x40011000))  //UART5
    #define UART6_ERG (*((volatile  struct UART *)  0x40012000))  //UART6
    #define UART7_ERG (*((volatile  struct UART *)  0x40013000))  //UART7


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////  S       P           I     ///////////////////////////////////////////////////////////////


struct SPI
 {
     uint32 SSICR0      ;
     uint32 SSICR1      ;
     uint32 SSIDR       ;
     uint32 SSISR       ;
     uint32 SSICPSR     ;
     uint32 SSIIM       ;
     uint32 SSIRIS      ;
     uint32 SSIMIS      ;
     uint32 SSIICR      ;
     uint32 SSIDMACTL   ;
     uint32 SSICC       ;
     uint32 SSIPeriphID4;
     uint32 SSIPeriphID5;
     uint32 SSIPeriphID6;
     uint32 SSIPeriphID7;
     uint32 SSIPeriphID0;
     uint32 SSIPeriphID1;
     uint32 SSIPeriphID2;
     uint32 SSIPeriphID3;
     uint32 SSIPCellID0 ;
     uint32 SSIPCellID1 ;
     uint32 SSIPCellID2 ;
     uint32 SSIPCellID3 ;
 };


#define SPI0_ERG (*((volatile  struct SPI *)  0x40008000))  //SPI0
#define SPI1_ERG (*((volatile  struct SPI *)  0x40009000))  //SPI1
#define SPI2_ERG (*((volatile  struct SPI *)  0x4000A000))  //SPI2
#define SPI3_ERG (*((volatile  struct SPI *)  0x4000B000))  //SPI3




#define RCGCPWM   *((volatile uint32 *)0x400fE640)
#define RCGCTIMER *((volatile uint32 *)0x400fE604)
#define RCC       *((volatile uint32 *)0x400fE060)
#endif /* HW_CONFIGURATION_H_ */
