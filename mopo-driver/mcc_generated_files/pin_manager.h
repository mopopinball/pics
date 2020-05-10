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

// get/set Sol2 aliases
#define Sol2_TRIS                 TRISAbits.TRISA0
#define Sol2_LAT                  LATAbits.LATA0
#define Sol2_PORT                 PORTAbits.RA0
#define Sol2_ANS                  ANSELAbits.ANSA0
#define Sol2_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define Sol2_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define Sol2_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define Sol2_GetValue()           PORTAbits.RA0
#define Sol2_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define Sol2_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define Sol2_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define Sol2_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set Sol6 aliases
#define Sol6_TRIS                 TRISAbits.TRISA1
#define Sol6_LAT                  LATAbits.LATA1
#define Sol6_PORT                 PORTAbits.RA1
#define Sol6_ANS                  ANSELAbits.ANSA1
#define Sol6_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define Sol6_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define Sol6_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define Sol6_GetValue()           PORTAbits.RA1
#define Sol6_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define Sol6_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define Sol6_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define Sol6_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set Sol9 aliases
#define Sol9_TRIS                 TRISAbits.TRISA2
#define Sol9_LAT                  LATAbits.LATA2
#define Sol9_PORT                 PORTAbits.RA2
#define Sol9_ANS                  ANSELAbits.ANSA2
#define Sol9_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define Sol9_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define Sol9_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define Sol9_GetValue()           PORTAbits.RA2
#define Sol9_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define Sol9_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define Sol9_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define Sol9_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set Sol1 aliases
#define Sol1_TRIS                 TRISAbits.TRISA3
#define Sol1_LAT                  LATAbits.LATA3
#define Sol1_PORT                 PORTAbits.RA3
#define Sol1_ANS                  ANSELAbits.ANSA3
#define Sol1_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define Sol1_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define Sol1_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define Sol1_GetValue()           PORTAbits.RA3
#define Sol1_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define Sol1_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define Sol1_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define Sol1_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set DS12 aliases
#define DS12_TRIS                 TRISAbits.TRISA5
#define DS12_LAT                  LATAbits.LATA5
#define DS12_PORT                 PORTAbits.RA5
#define DS12_ANS                  ANSELAbits.ANSA5
#define DS12_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define DS12_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define DS12_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define DS12_GetValue()           PORTAbits.RA5
#define DS12_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define DS12_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define DS12_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define DS12_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set DS8 aliases
#define DS8_TRIS                 TRISAbits.TRISA6
#define DS8_LAT                  LATAbits.LATA6
#define DS8_PORT                 PORTAbits.RA6
#define DS8_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define DS8_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define DS8_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define DS8_GetValue()           PORTAbits.RA6
#define DS8_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define DS8_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)

// get/set DS7 aliases
#define DS7_TRIS                 TRISAbits.TRISA7
#define DS7_LAT                  LATAbits.LATA7
#define DS7_PORT                 PORTAbits.RA7
#define DS7_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define DS7_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define DS7_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define DS7_GetValue()           PORTAbits.RA7
#define DS7_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define DS7_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)

// get/set Sol5 aliases
#define Sol5_TRIS                 TRISBbits.TRISB1
#define Sol5_LAT                  LATBbits.LATB1
#define Sol5_PORT                 PORTBbits.RB1
#define Sol5_WPU                  WPUBbits.WPUB1
#define Sol5_ANS                  ANSELBbits.ANSB1
#define Sol5_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define Sol5_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define Sol5_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define Sol5_GetValue()           PORTBbits.RB1
#define Sol5_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define Sol5_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define Sol5_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define Sol5_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define Sol5_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define Sol5_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set D6 aliases
#define D6_TRIS                 TRISBbits.TRISB2
#define D6_LAT                  LATBbits.LATB2
#define D6_PORT                 PORTBbits.RB2
#define D6_WPU                  WPUBbits.WPUB2
#define D6_ANS                  ANSELBbits.ANSB2
#define D6_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define D6_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define D6_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define D6_GetValue()           PORTBbits.RB2
#define D6_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define D6_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define D6_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define D6_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define D6_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define D6_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set S8 aliases
#define S8_TRIS                 TRISBbits.TRISB4
#define S8_LAT                  LATBbits.LATB4
#define S8_PORT                 PORTBbits.RB4
#define S8_WPU                  WPUBbits.WPUB4
#define S8_ANS                  ANSELBbits.ANSB4
#define S8_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define S8_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define S8_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define S8_GetValue()           PORTBbits.RB4
#define S8_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define S8_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define S8_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define S8_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define S8_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define S8_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set S4 aliases
#define S4_TRIS                 TRISBbits.TRISB5
#define S4_LAT                  LATBbits.LATB5
#define S4_PORT                 PORTBbits.RB5
#define S4_WPU                  WPUBbits.WPUB5
#define S4_ANS                  ANSELBbits.ANSB5
#define S4_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define S4_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define S4_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define S4_GetValue()           PORTBbits.RB5
#define S4_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define S4_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define S4_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define S4_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define S4_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define S4_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set S2 aliases
#define S2_TRIS                 TRISBbits.TRISB6
#define S2_LAT                  LATBbits.LATB6
#define S2_PORT                 PORTBbits.RB6
#define S2_WPU                  WPUBbits.WPUB6
#define S2_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define S2_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define S2_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define S2_GetValue()           PORTBbits.RB6
#define S2_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define S2_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define S2_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define S2_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)

// get/set S1 aliases
#define S1_TRIS                 TRISBbits.TRISB7
#define S1_LAT                  LATBbits.LATB7
#define S1_PORT                 PORTBbits.RB7
#define S1_WPU                  WPUBbits.WPUB7
#define S1_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define S1_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define S1_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define S1_GetValue()           PORTBbits.RB7
#define S1_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define S1_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define S1_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define S1_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)

// get/set DS5 aliases
#define DS5_TRIS                 TRISCbits.TRISC0
#define DS5_LAT                  LATCbits.LATC0
#define DS5_PORT                 PORTCbits.RC0
#define DS5_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define DS5_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define DS5_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define DS5_GetValue()           PORTCbits.RC0
#define DS5_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define DS5_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)

// get/set DS6 aliases
#define DS6_TRIS                 TRISCbits.TRISC1
#define DS6_LAT                  LATCbits.LATC1
#define DS6_PORT                 PORTCbits.RC1
#define DS6_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define DS6_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define DS6_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define DS6_GetValue()           PORTCbits.RC1
#define DS6_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define DS6_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)

// get/set DS3 aliases
#define DS3_TRIS                 TRISCbits.TRISC2
#define DS3_LAT                  LATCbits.LATC2
#define DS3_PORT                 PORTCbits.RC2
#define DS3_ANS                  ANSELCbits.ANSC2
#define DS3_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define DS3_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define DS3_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define DS3_GetValue()           PORTCbits.RC2
#define DS3_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define DS3_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define DS3_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define DS3_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

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

// get/set LD4 aliases
#define LD4_TRIS                 TRISCbits.TRISC5
#define LD4_LAT                  LATCbits.LATC5
#define LD4_PORT                 PORTCbits.RC5
#define LD4_ANS                  ANSELCbits.ANSC5
#define LD4_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define LD4_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define LD4_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define LD4_GetValue()           PORTCbits.RC5
#define LD4_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define LD4_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define LD4_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define LD4_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set LD2 aliases
#define LD2_TRIS                 TRISCbits.TRISC6
#define LD2_LAT                  LATCbits.LATC6
#define LD2_PORT                 PORTCbits.RC6
#define LD2_ANS                  ANSELCbits.ANSC6
#define LD2_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define LD2_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define LD2_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define LD2_GetValue()           PORTCbits.RC6
#define LD2_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define LD2_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define LD2_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define LD2_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set LD1 aliases
#define LD1_TRIS                 TRISCbits.TRISC7
#define LD1_LAT                  LATCbits.LATC7
#define LD1_PORT                 PORTCbits.RC7
#define LD1_ANS                  ANSELCbits.ANSC7
#define LD1_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define LD1_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define LD1_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define LD1_GetValue()           PORTCbits.RC7
#define LD1_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define LD1_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define LD1_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define LD1_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

// get/set DS4 aliases
#define DS4_TRIS                 TRISDbits.TRISD0
#define DS4_LAT                  LATDbits.LATD0
#define DS4_PORT                 PORTDbits.RD0
#define DS4_ANS                  ANSELDbits.ANSD0
#define DS4_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define DS4_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define DS4_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define DS4_GetValue()           PORTDbits.RD0
#define DS4_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define DS4_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define DS4_SetAnalogMode()      do { ANSELDbits.ANSD0 = 1; } while(0)
#define DS4_SetDigitalMode()     do { ANSELDbits.ANSD0 = 0; } while(0)

// get/set DS1 aliases
#define DS1_TRIS                 TRISDbits.TRISD1
#define DS1_LAT                  LATDbits.LATD1
#define DS1_PORT                 PORTDbits.RD1
#define DS1_ANS                  ANSELDbits.ANSD1
#define DS1_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define DS1_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define DS1_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define DS1_GetValue()           PORTDbits.RD1
#define DS1_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define DS1_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define DS1_SetAnalogMode()      do { ANSELDbits.ANSD1 = 1; } while(0)
#define DS1_SetDigitalMode()     do { ANSELDbits.ANSD1 = 0; } while(0)

// get/set DS2 aliases
#define DS2_TRIS                 TRISDbits.TRISD2
#define DS2_LAT                  LATDbits.LATD2
#define DS2_PORT                 PORTDbits.RD2
#define DS2_ANS                  ANSELDbits.ANSD2
#define DS2_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define DS2_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define DS2_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define DS2_GetValue()           PORTDbits.RD2
#define DS2_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define DS2_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define DS2_SetAnalogMode()      do { ANSELDbits.ANSD2 = 1; } while(0)
#define DS2_SetDigitalMode()     do { ANSELDbits.ANSD2 = 0; } while(0)

// get/set LD3 aliases
#define LD3_TRIS                 TRISDbits.TRISD3
#define LD3_LAT                  LATDbits.LATD3
#define LD3_PORT                 PORTDbits.RD3
#define LD3_ANS                  ANSELDbits.ANSD3
#define LD3_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define LD3_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define LD3_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define LD3_GetValue()           PORTDbits.RD3
#define LD3_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define LD3_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define LD3_SetAnalogMode()      do { ANSELDbits.ANSD3 = 1; } while(0)
#define LD3_SetDigitalMode()     do { ANSELDbits.ANSD3 = 0; } while(0)

// get/set Sol8 aliases
#define Sol8_TRIS                 TRISDbits.TRISD4
#define Sol8_LAT                  LATDbits.LATD4
#define Sol8_PORT                 PORTDbits.RD4
#define Sol8_ANS                  ANSELDbits.ANSD4
#define Sol8_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define Sol8_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define Sol8_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define Sol8_GetValue()           PORTDbits.RD4
#define Sol8_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define Sol8_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define Sol8_SetAnalogMode()      do { ANSELDbits.ANSD4 = 1; } while(0)
#define Sol8_SetDigitalMode()     do { ANSELDbits.ANSD4 = 0; } while(0)

// get/set Sol7 aliases
#define Sol7_TRIS                 TRISDbits.TRISD5
#define Sol7_LAT                  LATDbits.LATD5
#define Sol7_PORT                 PORTDbits.RD5
#define Sol7_ANS                  ANSELDbits.ANSD5
#define Sol7_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define Sol7_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define Sol7_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define Sol7_GetValue()           PORTDbits.RD5
#define Sol7_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define Sol7_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define Sol7_SetAnalogMode()      do { ANSELDbits.ANSD5 = 1; } while(0)
#define Sol7_SetDigitalMode()     do { ANSELDbits.ANSD5 = 0; } while(0)

// get/set Sol4 aliases
#define Sol4_TRIS                 TRISDbits.TRISD6
#define Sol4_LAT                  LATDbits.LATD6
#define Sol4_PORT                 PORTDbits.RD6
#define Sol4_ANS                  ANSELDbits.ANSD6
#define Sol4_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define Sol4_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define Sol4_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define Sol4_GetValue()           PORTDbits.RD6
#define Sol4_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define Sol4_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define Sol4_SetAnalogMode()      do { ANSELDbits.ANSD6 = 1; } while(0)
#define Sol4_SetDigitalMode()     do { ANSELDbits.ANSD6 = 0; } while(0)

// get/set Sol3 aliases
#define Sol3_TRIS                 TRISDbits.TRISD7
#define Sol3_LAT                  LATDbits.LATD7
#define Sol3_PORT                 PORTDbits.RD7
#define Sol3_ANS                  ANSELDbits.ANSD7
#define Sol3_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define Sol3_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define Sol3_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define Sol3_GetValue()           PORTDbits.RD7
#define Sol3_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define Sol3_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define Sol3_SetAnalogMode()      do { ANSELDbits.ANSD7 = 1; } while(0)
#define Sol3_SetDigitalMode()     do { ANSELDbits.ANSD7 = 0; } while(0)

// get/set DS11 aliases
#define DS11_TRIS                 TRISEbits.TRISE0
#define DS11_LAT                  LATEbits.LATE0
#define DS11_PORT                 PORTEbits.RE0
#define DS11_ANS                  ANSELEbits.ANSE0
#define DS11_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define DS11_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define DS11_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define DS11_GetValue()           PORTEbits.RE0
#define DS11_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define DS11_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define DS11_SetAnalogMode()      do { ANSELEbits.ANSE0 = 1; } while(0)
#define DS11_SetDigitalMode()     do { ANSELEbits.ANSE0 = 0; } while(0)

// get/set DS9 aliases
#define DS9_TRIS                 TRISEbits.TRISE1
#define DS9_LAT                  LATEbits.LATE1
#define DS9_PORT                 PORTEbits.RE1
#define DS9_ANS                  ANSELEbits.ANSE1
#define DS9_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define DS9_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define DS9_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define DS9_GetValue()           PORTEbits.RE1
#define DS9_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define DS9_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define DS9_SetAnalogMode()      do { ANSELEbits.ANSE1 = 1; } while(0)
#define DS9_SetDigitalMode()     do { ANSELEbits.ANSE1 = 0; } while(0)

// get/set DS10 aliases
#define DS10_TRIS                 TRISEbits.TRISE2
#define DS10_LAT                  LATEbits.LATE2
#define DS10_PORT                 PORTEbits.RE2
#define DS10_ANS                  ANSELEbits.ANSE2
#define DS10_SetHigh()            do { LATEbits.LATE2 = 1; } while(0)
#define DS10_SetLow()             do { LATEbits.LATE2 = 0; } while(0)
#define DS10_Toggle()             do { LATEbits.LATE2 = ~LATEbits.LATE2; } while(0)
#define DS10_GetValue()           PORTEbits.RE2
#define DS10_SetDigitalInput()    do { TRISEbits.TRISE2 = 1; } while(0)
#define DS10_SetDigitalOutput()   do { TRISEbits.TRISE2 = 0; } while(0)
#define DS10_SetAnalogMode()      do { ANSELEbits.ANSE2 = 1; } while(0)
#define DS10_SetDigitalMode()     do { ANSELEbits.ANSE2 = 0; } while(0)

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