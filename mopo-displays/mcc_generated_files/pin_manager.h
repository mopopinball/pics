/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.78
        Device            :  PIC18F45K22
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.05 and above
        MPLAB 	          :  MPLAB X 5.20	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set D13 aliases
#define D13_TRIS                 TRISAbits.TRISA2
#define D13_LAT                  LATAbits.LATA2
#define D13_PORT                 PORTAbits.RA2
#define D13_ANS                  ANSELAbits.ANSA2
#define D13_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define D13_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define D13_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define D13_GetValue()           PORTAbits.RA2
#define D13_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define D13_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define D13_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define D13_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set E2 aliases
#define E2_TRIS                 TRISAbits.TRISA3
#define E2_LAT                  LATAbits.LATA3
#define E2_PORT                 PORTAbits.RA3
#define E2_ANS                  ANSELAbits.ANSA3
#define E2_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define E2_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define E2_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define E2_GetValue()           PORTAbits.RA3
#define E2_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define E2_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define E2_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define E2_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set fA_D1 aliases
#define fA_D1_TRIS                 TRISAbits.TRISA5
#define fA_D1_LAT                  LATAbits.LATA5
#define fA_D1_PORT                 PORTAbits.RA5
#define fA_D1_ANS                  ANSELAbits.ANSA5
#define fA_D1_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define fA_D1_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define fA_D1_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define fA_D1_GetValue()           PORTAbits.RA5
#define fA_D1_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define fA_D1_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define fA_D1_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define fA_D1_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set A0 aliases
#define A0_TRIS                 TRISAbits.TRISA6
#define A0_LAT                  LATAbits.LATA6
#define A0_PORT                 PORTAbits.RA6
#define A0_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define A0_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define A0_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define A0_GetValue()           PORTAbits.RA6
#define A0_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define A0_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)

// get/set A1 aliases
#define A1_TRIS                 TRISAbits.TRISA7
#define A1_LAT                  LATAbits.LATA7
#define A1_PORT                 PORTAbits.RA7
#define A1_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define A1_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define A1_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define A1_GetValue()           PORTAbits.RA7
#define A1_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define A1_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)

// get/set cB aliases
#define cB_TRIS                 TRISBbits.TRISB0
#define cB_LAT                  LATBbits.LATB0
#define cB_PORT                 PORTBbits.RB0
#define cB_WPU                  WPUBbits.WPUB0
#define cB_ANS                  ANSELBbits.ANSB0
#define cB_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define cB_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define cB_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define cB_GetValue()           PORTBbits.RB0
#define cB_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define cB_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define cB_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define cB_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define cB_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define cB_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set aB_D7 aliases
#define aB_D7_TRIS                 TRISBbits.TRISB1
#define aB_D7_LAT                  LATBbits.LATB1
#define aB_D7_PORT                 PORTBbits.RB1
#define aB_D7_WPU                  WPUBbits.WPUB1
#define aB_D7_ANS                  ANSELBbits.ANSB1
#define aB_D7_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define aB_D7_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define aB_D7_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define aB_D7_GetValue()           PORTBbits.RB1
#define aB_D7_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define aB_D7_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define aB_D7_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define aB_D7_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define aB_D7_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define aB_D7_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set gA_D2 aliases
#define gA_D2_TRIS                 TRISBbits.TRISB2
#define gA_D2_LAT                  LATBbits.LATB2
#define gA_D2_PORT                 PORTBbits.RB2
#define gA_D2_WPU                  WPUBbits.WPUB2
#define gA_D2_ANS                  ANSELBbits.ANSB2
#define gA_D2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define gA_D2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define gA_D2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define gA_D2_GetValue()           PORTBbits.RB2
#define gA_D2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define gA_D2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define gA_D2_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define gA_D2_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define gA_D2_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define gA_D2_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set eA aliases
#define eA_TRIS                 TRISBbits.TRISB3
#define eA_LAT                  LATBbits.LATB3
#define eA_PORT                 PORTBbits.RB3
#define eA_WPU                  WPUBbits.WPUB3
#define eA_ANS                  ANSELBbits.ANSB3
#define eA_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define eA_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define eA_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define eA_GetValue()           PORTBbits.RB3
#define eA_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define eA_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define eA_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define eA_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define eA_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define eA_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set dA aliases
#define dA_TRIS                 TRISBbits.TRISB4
#define dA_LAT                  LATBbits.LATB4
#define dA_PORT                 PORTBbits.RB4
#define dA_WPU                  WPUBbits.WPUB4
#define dA_ANS                  ANSELBbits.ANSB4
#define dA_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define dA_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define dA_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define dA_GetValue()           PORTBbits.RB4
#define dA_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define dA_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define dA_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define dA_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define dA_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define dA_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set cA aliases
#define cA_TRIS                 TRISBbits.TRISB5
#define cA_LAT                  LATBbits.LATB5
#define cA_PORT                 PORTBbits.RB5
#define cA_WPU                  WPUBbits.WPUB5
#define cA_ANS                  ANSELBbits.ANSB5
#define cA_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define cA_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define cA_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define cA_GetValue()           PORTBbits.RB5
#define cA_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define cA_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define cA_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define cA_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define cA_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define cA_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set bA_D0 aliases
#define bA_D0_TRIS                 TRISBbits.TRISB6
#define bA_D0_LAT                  LATBbits.LATB6
#define bA_D0_PORT                 PORTBbits.RB6
#define bA_D0_WPU                  WPUBbits.WPUB6
#define bA_D0_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define bA_D0_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define bA_D0_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define bA_D0_GetValue()           PORTBbits.RB6
#define bA_D0_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define bA_D0_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define bA_D0_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define bA_D0_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)

// get/set aA_D3 aliases
#define aA_D3_TRIS                 TRISBbits.TRISB7
#define aA_D3_LAT                  LATBbits.LATB7
#define aA_D3_PORT                 PORTBbits.RB7
#define aA_D3_WPU                  WPUBbits.WPUB7
#define aA_D3_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define aA_D3_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define aA_D3_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define aA_D3_GetValue()           PORTBbits.RB7
#define aA_D3_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define aA_D3_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define aA_D3_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define aA_D3_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)

// get/set aC aliases
#define aC_TRIS                 TRISCbits.TRISC0
#define aC_LAT                  LATCbits.LATC0
#define aC_PORT                 PORTCbits.RC0
#define aC_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define aC_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define aC_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define aC_GetValue()           PORTCbits.RC0
#define aC_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define aC_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)

// get/set cC aliases
#define cC_TRIS                 TRISCbits.TRISC1
#define cC_LAT                  LATCbits.LATC1
#define cC_PORT                 PORTCbits.RC1
#define cC_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define cC_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define cC_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define cC_GetValue()           PORTCbits.RC1
#define cC_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define cC_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)

// get/set eC aliases
#define eC_TRIS                 TRISCbits.TRISC2
#define eC_LAT                  LATCbits.LATC2
#define eC_PORT                 PORTCbits.RC2
#define eC_ANS                  ANSELCbits.ANSC2
#define eC_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define eC_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define eC_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define eC_GetValue()           PORTCbits.RC2
#define eC_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define eC_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define eC_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define eC_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set SCL1 aliases
#define SCL1_TRIS                 TRISCbits.TRISC3
#define SCL1_LAT                  LATCbits.LATC3
#define SCL1_PORT                 PORTCbits.RC3
#define SCL1_ANS                  ANSELCbits.ANSC3
#define SCL1_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define SCL1_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define SCL1_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define SCL1_GetValue()           PORTCbits.RC3
#define SCL1_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define SCL1_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define SCL1_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define SCL1_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set SDA1 aliases
#define SDA1_TRIS                 TRISCbits.TRISC4
#define SDA1_LAT                  LATCbits.LATC4
#define SDA1_PORT                 PORTCbits.RC4
#define SDA1_ANS                  ANSELCbits.ANSC4
#define SDA1_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define SDA1_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define SDA1_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define SDA1_GetValue()           PORTCbits.RC4
#define SDA1_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define SDA1_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define SDA1_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define SDA1_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set fC aliases
#define fC_TRIS                 TRISCbits.TRISC5
#define fC_LAT                  LATCbits.LATC5
#define fC_PORT                 PORTCbits.RC5
#define fC_ANS                  ANSELCbits.ANSC5
#define fC_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define fC_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define fC_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define fC_GetValue()           PORTCbits.RC5
#define fC_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define fC_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define fC_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define fC_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set dC aliases
#define dC_TRIS                 TRISCbits.TRISC6
#define dC_LAT                  LATCbits.LATC6
#define dC_PORT                 PORTCbits.RC6
#define dC_ANS                  ANSELCbits.ANSC6
#define dC_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define dC_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define dC_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define dC_GetValue()           PORTCbits.RC6
#define dC_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define dC_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define dC_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define dC_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set bC aliases
#define bC_TRIS                 TRISCbits.TRISC7
#define bC_LAT                  LATCbits.LATC7
#define bC_PORT                 PORTCbits.RC7
#define bC_ANS                  ANSELCbits.ANSC7
#define bC_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define bC_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define bC_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define bC_GetValue()           PORTCbits.RC7
#define bC_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define bC_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define bC_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define bC_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

// get/set A2 aliases
#define A2_TRIS                 TRISDbits.TRISD0
#define A2_LAT                  LATDbits.LATD0
#define A2_PORT                 PORTDbits.RD0
#define A2_ANS                  ANSELDbits.ANSD0
#define A2_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define A2_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define A2_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define A2_GetValue()           PORTDbits.RD0
#define A2_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define A2_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define A2_SetAnalogMode()      do { ANSELDbits.ANSD0 = 1; } while(0)
#define A2_SetDigitalMode()     do { ANSELDbits.ANSD0 = 0; } while(0)

// get/set E1_E3 aliases
#define E1_E3_TRIS                 TRISDbits.TRISD1
#define E1_E3_LAT                  LATDbits.LATD1
#define E1_E3_PORT                 PORTDbits.RD1
#define E1_E3_ANS                  ANSELDbits.ANSD1
#define E1_E3_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define E1_E3_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define E1_E3_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define E1_E3_GetValue()           PORTDbits.RD1
#define E1_E3_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define E1_E3_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define E1_E3_SetAnalogMode()      do { ANSELDbits.ANSD1 = 1; } while(0)
#define E1_E3_SetDigitalMode()     do { ANSELDbits.ANSD1 = 0; } while(0)

// get/set hC aliases
#define hC_TRIS                 TRISDbits.TRISD2
#define hC_LAT                  LATDbits.LATD2
#define hC_PORT                 PORTDbits.RD2
#define hC_ANS                  ANSELDbits.ANSD2
#define hC_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define hC_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define hC_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define hC_GetValue()           PORTDbits.RD2
#define hC_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define hC_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define hC_SetAnalogMode()      do { ANSELDbits.ANSD2 = 1; } while(0)
#define hC_SetDigitalMode()     do { ANSELDbits.ANSD2 = 0; } while(0)

// get/set gC aliases
#define gC_TRIS                 TRISDbits.TRISD3
#define gC_LAT                  LATDbits.LATD3
#define gC_PORT                 PORTDbits.RD3
#define gC_ANS                  ANSELDbits.ANSD3
#define gC_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define gC_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define gC_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define gC_GetValue()           PORTDbits.RD3
#define gC_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define gC_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define gC_SetAnalogMode()      do { ANSELDbits.ANSD3 = 1; } while(0)
#define gC_SetDigitalMode()     do { ANSELDbits.ANSD3 = 0; } while(0)

// get/set hB_LD2 aliases
#define hB_LD2_TRIS                 TRISDbits.TRISD4
#define hB_LD2_LAT                  LATDbits.LATD4
#define hB_LD2_PORT                 PORTDbits.RD4
#define hB_LD2_ANS                  ANSELDbits.ANSD4
#define hB_LD2_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define hB_LD2_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define hB_LD2_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define hB_LD2_GetValue()           PORTDbits.RD4
#define hB_LD2_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define hB_LD2_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define hB_LD2_SetAnalogMode()      do { ANSELDbits.ANSD4 = 1; } while(0)
#define hB_LD2_SetDigitalMode()     do { ANSELDbits.ANSD4 = 0; } while(0)

// get/set gB_D6 aliases
#define gB_D6_TRIS                 TRISDbits.TRISD5
#define gB_D6_LAT                  LATDbits.LATD5
#define gB_D6_PORT                 PORTDbits.RD5
#define gB_D6_ANS                  ANSELDbits.ANSD5
#define gB_D6_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define gB_D6_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define gB_D6_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define gB_D6_GetValue()           PORTDbits.RD5
#define gB_D6_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define gB_D6_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define gB_D6_SetAnalogMode()      do { ANSELDbits.ANSD5 = 1; } while(0)
#define gB_D6_SetDigitalMode()     do { ANSELDbits.ANSD5 = 0; } while(0)

// get/set fB_D5 aliases
#define fB_D5_TRIS                 TRISDbits.TRISD6
#define fB_D5_LAT                  LATDbits.LATD6
#define fB_D5_PORT                 PORTDbits.RD6
#define fB_D5_ANS                  ANSELDbits.ANSD6
#define fB_D5_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define fB_D5_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define fB_D5_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define fB_D5_GetValue()           PORTDbits.RD6
#define fB_D5_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define fB_D5_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define fB_D5_SetAnalogMode()      do { ANSELDbits.ANSD6 = 1; } while(0)
#define fB_D5_SetDigitalMode()     do { ANSELDbits.ANSD6 = 0; } while(0)

// get/set eB aliases
#define eB_TRIS                 TRISDbits.TRISD7
#define eB_LAT                  LATDbits.LATD7
#define eB_PORT                 PORTDbits.RD7
#define eB_ANS                  ANSELDbits.ANSD7
#define eB_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define eB_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define eB_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define eB_GetValue()           PORTDbits.RD7
#define eB_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define eB_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define eB_SetAnalogMode()      do { ANSELDbits.ANSD7 = 1; } while(0)
#define eB_SetDigitalMode()     do { ANSELDbits.ANSD7 = 0; } while(0)

// get/set hA_LD1 aliases
#define hA_LD1_TRIS                 TRISEbits.TRISE0
#define hA_LD1_LAT                  LATEbits.LATE0
#define hA_LD1_PORT                 PORTEbits.RE0
#define hA_LD1_ANS                  ANSELEbits.ANSE0
#define hA_LD1_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define hA_LD1_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define hA_LD1_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define hA_LD1_GetValue()           PORTEbits.RE0
#define hA_LD1_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define hA_LD1_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define hA_LD1_SetAnalogMode()      do { ANSELEbits.ANSE0 = 1; } while(0)
#define hA_LD1_SetDigitalMode()     do { ANSELEbits.ANSE0 = 0; } while(0)

// get/set bB_D4 aliases
#define bB_D4_TRIS                 TRISEbits.TRISE1
#define bB_D4_LAT                  LATEbits.LATE1
#define bB_D4_PORT                 PORTEbits.RE1
#define bB_D4_ANS                  ANSELEbits.ANSE1
#define bB_D4_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define bB_D4_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define bB_D4_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define bB_D4_GetValue()           PORTEbits.RE1
#define bB_D4_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define bB_D4_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define bB_D4_SetAnalogMode()      do { ANSELEbits.ANSE1 = 1; } while(0)
#define bB_D4_SetDigitalMode()     do { ANSELEbits.ANSE1 = 0; } while(0)

// get/set dB aliases
#define dB_TRIS                 TRISEbits.TRISE2
#define dB_LAT                  LATEbits.LATE2
#define dB_PORT                 PORTEbits.RE2
#define dB_ANS                  ANSELEbits.ANSE2
#define dB_SetHigh()            do { LATEbits.LATE2 = 1; } while(0)
#define dB_SetLow()             do { LATEbits.LATE2 = 0; } while(0)
#define dB_Toggle()             do { LATEbits.LATE2 = ~LATEbits.LATE2; } while(0)
#define dB_GetValue()           PORTEbits.RE2
#define dB_SetDigitalInput()    do { TRISEbits.TRISE2 = 1; } while(0)
#define dB_SetDigitalOutput()   do { TRISEbits.TRISE2 = 0; } while(0)
#define dB_SetAnalogMode()      do { ANSELEbits.ANSE2 = 1; } while(0)
#define dB_SetDigitalMode()     do { ANSELEbits.ANSE2 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/