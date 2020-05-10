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

// get/set PI_RESEND aliases
#define PI_RESEND_TRIS                 TRISAbits.TRISA0
#define PI_RESEND_LAT                  LATAbits.LATA0
#define PI_RESEND_PORT                 PORTAbits.RA0
#define PI_RESEND_ANS                  ANSELAbits.ANSA0
#define PI_RESEND_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define PI_RESEND_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define PI_RESEND_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define PI_RESEND_GetValue()           PORTAbits.RA0
#define PI_RESEND_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define PI_RESEND_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define PI_RESEND_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define PI_RESEND_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set PI_ACK aliases
#define PI_ACK_TRIS                 TRISAbits.TRISA1
#define PI_ACK_LAT                  LATAbits.LATA1
#define PI_ACK_PORT                 PORTAbits.RA1
#define PI_ACK_ANS                  ANSELAbits.ANSA1
#define PI_ACK_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define PI_ACK_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define PI_ACK_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define PI_ACK_GetValue()           PORTAbits.RA1
#define PI_ACK_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define PI_ACK_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define PI_ACK_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define PI_ACK_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set S1_1 aliases
#define S1_1_TRIS                 TRISAbits.TRISA2
#define S1_1_LAT                  LATAbits.LATA2
#define S1_1_PORT                 PORTAbits.RA2
#define S1_1_ANS                  ANSELAbits.ANSA2
#define S1_1_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define S1_1_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define S1_1_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define S1_1_GetValue()           PORTAbits.RA2
#define S1_1_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define S1_1_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define S1_1_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define S1_1_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set K1_1 aliases
#define K1_1_TRIS                 TRISAbits.TRISA3
#define K1_1_LAT                  LATAbits.LATA3
#define K1_1_PORT                 PORTAbits.RA3
#define K1_1_ANS                  ANSELAbits.ANSA3
#define K1_1_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define K1_1_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define K1_1_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define K1_1_GetValue()           PORTAbits.RA3
#define K1_1_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define K1_1_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define K1_1_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define K1_1_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set K1_2 aliases
#define K1_2_TRIS                 TRISAbits.TRISA5
#define K1_2_LAT                  LATAbits.LATA5
#define K1_2_PORT                 PORTAbits.RA5
#define K1_2_ANS                  ANSELAbits.ANSA5
#define K1_2_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define K1_2_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define K1_2_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define K1_2_GetValue()           PORTAbits.RA5
#define K1_2_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define K1_2_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define K1_2_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define K1_2_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set D5 aliases
#define D5_TRIS                 TRISAbits.TRISA6
#define D5_LAT                  LATAbits.LATA6
#define D5_PORT                 PORTAbits.RA6
#define D5_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define D5_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define D5_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define D5_GetValue()           PORTAbits.RA6
#define D5_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define D5_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)

// get/set Slam aliases
#define Slam_TRIS                 TRISAbits.TRISA7
#define Slam_LAT                  LATAbits.LATA7
#define Slam_PORT                 PORTAbits.RA7
#define Slam_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define Slam_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define Slam_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define Slam_GetValue()           PORTAbits.RA7
#define Slam_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define Slam_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)

// get/set Return0 aliases
#define Return0_TRIS                 TRISBbits.TRISB0
#define Return0_LAT                  LATBbits.LATB0
#define Return0_PORT                 PORTBbits.RB0
#define Return0_WPU                  WPUBbits.WPUB0
#define Return0_ANS                  ANSELBbits.ANSB0
#define Return0_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define Return0_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define Return0_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define Return0_GetValue()           PORTBbits.RB0
#define Return0_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define Return0_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define Return0_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define Return0_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define Return0_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define Return0_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set Return1 aliases
#define Return1_TRIS                 TRISBbits.TRISB1
#define Return1_LAT                  LATBbits.LATB1
#define Return1_PORT                 PORTBbits.RB1
#define Return1_WPU                  WPUBbits.WPUB1
#define Return1_ANS                  ANSELBbits.ANSB1
#define Return1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define Return1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define Return1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define Return1_GetValue()           PORTBbits.RB1
#define Return1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define Return1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define Return1_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define Return1_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define Return1_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define Return1_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set Return2 aliases
#define Return2_TRIS                 TRISBbits.TRISB2
#define Return2_LAT                  LATBbits.LATB2
#define Return2_PORT                 PORTBbits.RB2
#define Return2_WPU                  WPUBbits.WPUB2
#define Return2_ANS                  ANSELBbits.ANSB2
#define Return2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define Return2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define Return2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define Return2_GetValue()           PORTBbits.RB2
#define Return2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define Return2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define Return2_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define Return2_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define Return2_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define Return2_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set Return3 aliases
#define Return3_TRIS                 TRISBbits.TRISB3
#define Return3_LAT                  LATBbits.LATB3
#define Return3_PORT                 PORTBbits.RB3
#define Return3_WPU                  WPUBbits.WPUB3
#define Return3_ANS                  ANSELBbits.ANSB3
#define Return3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define Return3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define Return3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define Return3_GetValue()           PORTBbits.RB3
#define Return3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define Return3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define Return3_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define Return3_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define Return3_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define Return3_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set Return4 aliases
#define Return4_TRIS                 TRISBbits.TRISB4
#define Return4_LAT                  LATBbits.LATB4
#define Return4_PORT                 PORTBbits.RB4
#define Return4_WPU                  WPUBbits.WPUB4
#define Return4_ANS                  ANSELBbits.ANSB4
#define Return4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define Return4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define Return4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define Return4_GetValue()           PORTBbits.RB4
#define Return4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define Return4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define Return4_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define Return4_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define Return4_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define Return4_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set Return5 aliases
#define Return5_TRIS                 TRISBbits.TRISB5
#define Return5_LAT                  LATBbits.LATB5
#define Return5_PORT                 PORTBbits.RB5
#define Return5_WPU                  WPUBbits.WPUB5
#define Return5_ANS                  ANSELBbits.ANSB5
#define Return5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define Return5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define Return5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define Return5_GetValue()           PORTBbits.RB5
#define Return5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define Return5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define Return5_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define Return5_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define Return5_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define Return5_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set Return6 aliases
#define Return6_TRIS                 TRISBbits.TRISB6
#define Return6_LAT                  LATBbits.LATB6
#define Return6_PORT                 PORTBbits.RB6
#define Return6_WPU                  WPUBbits.WPUB6
#define Return6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define Return6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define Return6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define Return6_GetValue()           PORTBbits.RB6
#define Return6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define Return6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define Return6_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define Return6_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)

// get/set Return7 aliases
#define Return7_TRIS                 TRISBbits.TRISB7
#define Return7_LAT                  LATBbits.LATB7
#define Return7_PORT                 PORTBbits.RB7
#define Return7_WPU                  WPUBbits.WPUB7
#define Return7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define Return7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define Return7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define Return7_GetValue()           PORTBbits.RB7
#define Return7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define Return7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define Return7_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define Return7_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)

// get/set Data0 aliases
#define Data0_TRIS                 TRISCbits.TRISC0
#define Data0_LAT                  LATCbits.LATC0
#define Data0_PORT                 PORTCbits.RC0
#define Data0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define Data0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define Data0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define Data0_GetValue()           PORTCbits.RC0
#define Data0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define Data0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)

// get/set Data1 aliases
#define Data1_TRIS                 TRISCbits.TRISC1
#define Data1_LAT                  LATCbits.LATC1
#define Data1_PORT                 PORTCbits.RC1
#define Data1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define Data1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define Data1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define Data1_GetValue()           PORTCbits.RC1
#define Data1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define Data1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)

// get/set Data2 aliases
#define Data2_TRIS                 TRISCbits.TRISC2
#define Data2_LAT                  LATCbits.LATC2
#define Data2_PORT                 PORTCbits.RC2
#define Data2_ANS                  ANSELCbits.ANSC2
#define Data2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define Data2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define Data2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define Data2_GetValue()           PORTCbits.RC2
#define Data2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define Data2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define Data2_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define Data2_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set Data3 aliases
#define Data3_TRIS                 TRISCbits.TRISC3
#define Data3_LAT                  LATCbits.LATC3
#define Data3_PORT                 PORTCbits.RC3
#define Data3_ANS                  ANSELCbits.ANSC3
#define Data3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define Data3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define Data3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define Data3_GetValue()           PORTCbits.RC3
#define Data3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define Data3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define Data3_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define Data3_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set S1_3 aliases
#define S1_3_TRIS                 TRISCbits.TRISC4
#define S1_3_LAT                  LATCbits.LATC4
#define S1_3_PORT                 PORTCbits.RC4
#define S1_3_ANS                  ANSELCbits.ANSC4
#define S1_3_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define S1_3_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define S1_3_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define S1_3_GetValue()           PORTCbits.RC4
#define S1_3_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define S1_3_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define S1_3_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define S1_3_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set S1_4 aliases
#define S1_4_TRIS                 TRISCbits.TRISC5
#define S1_4_LAT                  LATCbits.LATC5
#define S1_4_PORT                 PORTCbits.RC5
#define S1_4_ANS                  ANSELCbits.ANSC5
#define S1_4_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define S1_4_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define S1_4_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define S1_4_GetValue()           PORTCbits.RC5
#define S1_4_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define S1_4_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define S1_4_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define S1_4_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set S1_5 aliases
#define S1_5_TRIS                 TRISCbits.TRISC6
#define S1_5_LAT                  LATCbits.LATC6
#define S1_5_PORT                 PORTCbits.RC6
#define S1_5_ANS                  ANSELCbits.ANSC6
#define S1_5_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define S1_5_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define S1_5_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define S1_5_GetValue()           PORTCbits.RC6
#define S1_5_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define S1_5_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define S1_5_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define S1_5_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set OUT_RDY aliases
#define OUT_RDY_TRIS                 TRISCbits.TRISC7
#define OUT_RDY_LAT                  LATCbits.LATC7
#define OUT_RDY_PORT                 PORTCbits.RC7
#define OUT_RDY_ANS                  ANSELCbits.ANSC7
#define OUT_RDY_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define OUT_RDY_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define OUT_RDY_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define OUT_RDY_GetValue()           PORTCbits.RC7
#define OUT_RDY_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define OUT_RDY_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define OUT_RDY_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define OUT_RDY_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

// get/set Strobe0 aliases
#define Strobe0_TRIS                 TRISDbits.TRISD0
#define Strobe0_LAT                  LATDbits.LATD0
#define Strobe0_PORT                 PORTDbits.RD0
#define Strobe0_ANS                  ANSELDbits.ANSD0
#define Strobe0_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define Strobe0_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define Strobe0_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define Strobe0_GetValue()           PORTDbits.RD0
#define Strobe0_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define Strobe0_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define Strobe0_SetAnalogMode()      do { ANSELDbits.ANSD0 = 1; } while(0)
#define Strobe0_SetDigitalMode()     do { ANSELDbits.ANSD0 = 0; } while(0)

// get/set Strobe1 aliases
#define Strobe1_TRIS                 TRISDbits.TRISD1
#define Strobe1_LAT                  LATDbits.LATD1
#define Strobe1_PORT                 PORTDbits.RD1
#define Strobe1_ANS                  ANSELDbits.ANSD1
#define Strobe1_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define Strobe1_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define Strobe1_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define Strobe1_GetValue()           PORTDbits.RD1
#define Strobe1_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define Strobe1_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define Strobe1_SetAnalogMode()      do { ANSELDbits.ANSD1 = 1; } while(0)
#define Strobe1_SetDigitalMode()     do { ANSELDbits.ANSD1 = 0; } while(0)

// get/set Strobe2 aliases
#define Strobe2_TRIS                 TRISDbits.TRISD2
#define Strobe2_LAT                  LATDbits.LATD2
#define Strobe2_PORT                 PORTDbits.RD2
#define Strobe2_ANS                  ANSELDbits.ANSD2
#define Strobe2_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define Strobe2_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define Strobe2_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define Strobe2_GetValue()           PORTDbits.RD2
#define Strobe2_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define Strobe2_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define Strobe2_SetAnalogMode()      do { ANSELDbits.ANSD2 = 1; } while(0)
#define Strobe2_SetDigitalMode()     do { ANSELDbits.ANSD2 = 0; } while(0)

// get/set Strobe3 aliases
#define Strobe3_TRIS                 TRISDbits.TRISD3
#define Strobe3_LAT                  LATDbits.LATD3
#define Strobe3_PORT                 PORTDbits.RD3
#define Strobe3_ANS                  ANSELDbits.ANSD3
#define Strobe3_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define Strobe3_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define Strobe3_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define Strobe3_GetValue()           PORTDbits.RD3
#define Strobe3_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define Strobe3_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define Strobe3_SetAnalogMode()      do { ANSELDbits.ANSD3 = 1; } while(0)
#define Strobe3_SetDigitalMode()     do { ANSELDbits.ANSD3 = 0; } while(0)

// get/set Strobe4 aliases
#define Strobe4_TRIS                 TRISDbits.TRISD4
#define Strobe4_LAT                  LATDbits.LATD4
#define Strobe4_PORT                 PORTDbits.RD4
#define Strobe4_ANS                  ANSELDbits.ANSD4
#define Strobe4_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define Strobe4_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define Strobe4_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define Strobe4_GetValue()           PORTDbits.RD4
#define Strobe4_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define Strobe4_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define Strobe4_SetAnalogMode()      do { ANSELDbits.ANSD4 = 1; } while(0)
#define Strobe4_SetDigitalMode()     do { ANSELDbits.ANSD4 = 0; } while(0)

// get/set Strobe5 aliases
#define Strobe5_TRIS                 TRISDbits.TRISD5
#define Strobe5_LAT                  LATDbits.LATD5
#define Strobe5_PORT                 PORTDbits.RD5
#define Strobe5_ANS                  ANSELDbits.ANSD5
#define Strobe5_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define Strobe5_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define Strobe5_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define Strobe5_GetValue()           PORTDbits.RD5
#define Strobe5_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define Strobe5_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define Strobe5_SetAnalogMode()      do { ANSELDbits.ANSD5 = 1; } while(0)
#define Strobe5_SetDigitalMode()     do { ANSELDbits.ANSD5 = 0; } while(0)

// get/set Strobe6 aliases
#define Strobe6_TRIS                 TRISDbits.TRISD6
#define Strobe6_LAT                  LATDbits.LATD6
#define Strobe6_PORT                 PORTDbits.RD6
#define Strobe6_ANS                  ANSELDbits.ANSD6
#define Strobe6_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define Strobe6_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define Strobe6_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define Strobe6_GetValue()           PORTDbits.RD6
#define Strobe6_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define Strobe6_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define Strobe6_SetAnalogMode()      do { ANSELDbits.ANSD6 = 1; } while(0)
#define Strobe6_SetDigitalMode()     do { ANSELDbits.ANSD6 = 0; } while(0)

// get/set Strobe7 aliases
#define Strobe7_TRIS                 TRISDbits.TRISD7
#define Strobe7_LAT                  LATDbits.LATD7
#define Strobe7_PORT                 PORTDbits.RD7
#define Strobe7_ANS                  ANSELDbits.ANSD7
#define Strobe7_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define Strobe7_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define Strobe7_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define Strobe7_GetValue()           PORTDbits.RD7
#define Strobe7_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define Strobe7_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define Strobe7_SetAnalogMode()      do { ANSELDbits.ANSD7 = 1; } while(0)
#define Strobe7_SetDigitalMode()     do { ANSELDbits.ANSD7 = 0; } while(0)

// get/set K1_3 aliases
#define K1_3_TRIS                 TRISEbits.TRISE0
#define K1_3_LAT                  LATEbits.LATE0
#define K1_3_PORT                 PORTEbits.RE0
#define K1_3_ANS                  ANSELEbits.ANSE0
#define K1_3_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define K1_3_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define K1_3_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define K1_3_GetValue()           PORTEbits.RE0
#define K1_3_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define K1_3_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define K1_3_SetAnalogMode()      do { ANSELEbits.ANSE0 = 1; } while(0)
#define K1_3_SetDigitalMode()     do { ANSELEbits.ANSE0 = 0; } while(0)

// get/set K1_4 aliases
#define K1_4_TRIS                 TRISEbits.TRISE1
#define K1_4_LAT                  LATEbits.LATE1
#define K1_4_PORT                 PORTEbits.RE1
#define K1_4_ANS                  ANSELEbits.ANSE1
#define K1_4_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define K1_4_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define K1_4_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define K1_4_GetValue()           PORTEbits.RE1
#define K1_4_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define K1_4_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define K1_4_SetAnalogMode()      do { ANSELEbits.ANSE1 = 1; } while(0)
#define K1_4_SetDigitalMode()     do { ANSELEbits.ANSE1 = 0; } while(0)

// get/set K1_5 aliases
#define K1_5_TRIS                 TRISEbits.TRISE2
#define K1_5_LAT                  LATEbits.LATE2
#define K1_5_PORT                 PORTEbits.RE2
#define K1_5_ANS                  ANSELEbits.ANSE2
#define K1_5_SetHigh()            do { LATEbits.LATE2 = 1; } while(0)
#define K1_5_SetLow()             do { LATEbits.LATE2 = 0; } while(0)
#define K1_5_Toggle()             do { LATEbits.LATE2 = ~LATEbits.LATE2; } while(0)
#define K1_5_GetValue()           PORTEbits.RE2
#define K1_5_SetDigitalInput()    do { TRISEbits.TRISE2 = 1; } while(0)
#define K1_5_SetDigitalOutput()   do { TRISEbits.TRISE2 = 0; } while(0)
#define K1_5_SetAnalogMode()      do { ANSELEbits.ANSE2 = 1; } while(0)
#define K1_5_SetDigitalMode()     do { ANSELEbits.ANSE2 = 0; } while(0)

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