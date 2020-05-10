/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.78
        Device            :  PIC18F45K22
        Driver Version    :  2.00
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

#include "main.h"
#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/drivers/i2c_slave.h"
#include "payloads.h"

// init our payload variables and indicate its ready, so everything is low on start.
volatile uint8_t payloadIndex = 0;
volatile uint8_t payload[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
volatile bool payloadReady = true;

// * L=Lamp (1-52)
// * C=Coil (1-9)
// * S=Sound (1-4)
// * [LLLLLLLL][LLLLLLLL][LLLLLLLL][LLLLLLLL][LLLLLLLL][LLLLLLLL][LLLLCCCC][CCCCCSSS][S0000000]
       
typedef struct LampDataStruct {
    bool LD1:1;
    bool LD2:1;
    bool LD3:1;
    bool LD4:1;
} LampData;

void updateLamps(DriverPayload* parsedPayload);
void updateCoils(DriverPayload* parsedPayload);
void updateSound(DriverPayload* parsedPayload);
void setLampData(LampData);
void disableAllDeviceSelects(void);

/*
                         Main application
 */
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();   
    
    mssp1_enableIRQ();
    
    D6_SetHigh();

    i2c_slave_open();
    i2c_slave_setReadIntHandler(onRead);
    i2c_slave_setAddrIntHandler(onAddr);
    
    while (1)
    {
        if (!payloadReady) {
            continue;
        }
        
        D6_SetHigh();
        
        DriverPayload* parsedPayload = (DriverPayload*)payload;
        
        // * Payload (9 bytes):
        // * L=Lamp (1-52)
        // * C=Coil (1-9)
        // * S=Sound (1-4)
        // * [LLLLLLLL][LLLLLLLL][LLLLLLLL][LLLLLLLL][LLLLLLLL][LLLLLLLL][LLLLCCCC][CCCCCSSS][S0000000]
        
        // set the outputs on each 74175 lamp device
        updateLamps(parsedPayload);
        // set the 9 coil outputs
        updateCoils(parsedPayload);
        
        updateSound(parsedPayload);
        
        // reset the payload flag.
        payloadReady = false;
        D6_SetLow();
    }
}

// [LLLLLLLL][LSLLLLLL][LLLLLLLL][LLLLLLLL][LLLLLLLL][LLLLLLLL][LLLLLCCC][CCCCCCSS][SS000000]
void updateLamps(DriverPayload* data) {
    // loop thru and process each device select (DS) line/chip.
    for(int i = 1; i < 13; i ++) {
        disableAllDeviceSelects();
        if(i == 1) {
            // Game Over Relay, Tilt Relay, Coil Lockout Coil, L2/L3 Shoot Again
            LampData ld = {data->L0, data->L1, data->L2, data->L3};
            setLampData(ld);
            DS1_SetHigh();
        }
        else if(i == 2) {
            // L4, L5, L6, L7
            LampData ld = {data->L4, data->L5, data->L6, data->L7};
            setLampData(ld);
            DS2_SetHigh();
        }
        else if(i == 3) {
            // L8, S16, L11, L10
            LampData ld = {data->L8, data->L9, data->L11, data->L10};
            setLampData(ld);
            DS3_SetHigh();
        }
        else if (i == 4) {
            // L12,13,14,15
            LampData ld = {data->L12, data->L13, data->L14, data->L15};
            setLampData(ld);
            DS4_SetHigh();
        }
        else if (i == 5) {
            // L16,17,18,19
            LampData ld = {data->L16, data->L17, data->L18, data->L19};
            setLampData(ld);
            DS5_SetHigh();
        }
        else if(i == 6) {
            // L20, L21, L22, L23
            LampData ld = {data->L20, data->L21, data->L22, data->L23};
            setLampData(ld);
            DS6_SetHigh();
        }
        else if(i == 7) {
            // L24, L25, L26, L27
            LampData ld = {data->L24, data->L25, data->L26, data->L27};
            setLampData(ld);
            DS7_SetHigh();
        }
        else if(i == 8) {
            // L28, L29, L30, L31
            LampData ld = {data->L28, data->L29, data->L30, data->L31};
            setLampData(ld);
            DS8_SetHigh();
        }
        else if(i == 9) {
            // L32, L33, L34, L35
            LampData ld = {data->L32, data->L33, data->L34, data->L35};
            setLampData(ld);
            DS9_SetHigh();
        }
        else if(i == 10) {
            // L36, L37, L38, L39
            LampData ld = {data->L36, data->L37, data->L38, data->L39};
            setLampData(ld);
            DS10_SetHigh();
        }
        else if(i == 11) {
            // L40, L41, L42, L43
            LampData ld = {data->L40, data->L41, data->L42, data->L43};
            setLampData(ld);
            DS11_SetHigh();
        }
        else if(i == 12) {
            // L44, L45, L46, L47 AND !L48, !L49, !L50, !L51
            // 48-51 are the not/inverse state.
            LampData ld = {data->L44, data->L45, data->L46, data->L47};
            setLampData(ld);
            DS12_SetHigh();
        }
    }
}

void updateCoils(DriverPayload* parsedPayload) {
    LATAbits.LATA3 = parsedPayload->C1; // Sol1
    LATAbits.LATA0 = parsedPayload->C2; // Sol2
    LATDbits.LATD7 = parsedPayload->C3; // Sol3
    LATDbits.LATD6 = parsedPayload->C4; // Sol4
    LATBbits.LATB1 = parsedPayload->C5; // Sol5
    LATAbits.LATA1 = parsedPayload->C6; // Sol6
    LATDbits.LATD5 = parsedPayload->C7; // Sol7
    LATDbits.LATD4 = parsedPayload->C8; // Sol8
    LATAbits.LATA2 = parsedPayload->C9; // Sol9
}

void updateSound(DriverPayload* parsedPayload) {
    LATBbits_t sound = {0,0,0,0,0,0,0,0};
    sound.LATB7 = parsedPayload->S1; // S1
    sound.LATB6 = parsedPayload->S2; // S2
    sound.LATB5 = parsedPayload->S4; // S4
    sound.LATB4 = parsedPayload->S8; // S8
    sound.LATB3 = 0;
    sound.LATB2 = 0;
    sound.LATB1 = parsedPayload->C5; // Sol5
    sound.LATB0 = 0;
    LATBbits = sound;
}

void onAddr() {
    uint8_t sAddr = i2c1_driver_getAddr();    
    payloadIndex = 0;
    payloadReady = false;
}

void onRead() {
    payload[payloadIndex] = i2c1_driver_getRXData();
    payloadIndex++;
    payloadReady = payloadIndex >= 9;
}

void onWrite() {   
}

void setLampData(LampData data) {
    LATCbits.LATC7 = data.LD1; // LD1
    LATCbits.LATC6 = data.LD2; // LD2
    LATDbits.LATD3 = data.LD3; // LD3
    LATCbits.LATC5 = data.LD4; // LD4
}

void disableAllDeviceSelects() {
    DS1_SetLow();
    DS2_SetLow();
    DS3_SetLow();
    DS4_SetLow();
    DS5_SetLow();
    DS6_SetLow();
    DS7_SetLow();
    DS8_SetLow();
    DS9_SetLow();
    DS10_SetLow();
    DS11_SetLow();
    DS12_SetLow();
}

/**
 End of File
*/