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

#include "mcc_generated_files/mcc.h"
#include "main.h"

const unsigned int NIBBLE_0 = 0;
const unsigned int NIBBLE_1 = 1;
const unsigned int NIBBLE_2 = 2;
const unsigned int NIBBLE_3 = 3;
const unsigned int NIBBLE_DONE = 4;
const unsigned int NIBBLE_NONE = 100;

unsigned int const VERSION_MAJOR = 1;
unsigned int const VERSION_MINOR = 0;

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
    //INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    
    Data0_SetDigitalOutput();
    Data1_SetDigitalOutput();
    Data2_SetDigitalOutput();
    Data3_SetDigitalOutput();
    OUT_RDY_SetDigitalOutput();
    PI_ACK_SetDigitalInput();
    PI_RESEND_SetDigitalInput();
    S1_1_SetDigitalInput();
    S1_3_SetDigitalInput();
    S1_4_SetDigitalInput();
    S1_5_SetDigitalInput();
    K1_1_SetDigitalInput();
    K1_2_SetDigitalInput();
    K1_3_SetDigitalInput();
    K1_4_SetDigitalInput();
    K1_5_SetDigitalInput();
    Slam_SetDigitalInput();
    
    OUT_RDY_SetLow();

    unsigned int payload[3];

    // send our version.
    volatile bool prevAckState = PI_ACK_GetValue();
    
    volatile int versionCount = NIBBLE_0;
    volatile int dipCount = NIBBLE_NONE;
    struct MatrixPayload {
        volatile int nibbleCount;
        unsigned int strobe;
        unsigned int retrn;
        bool state;
    };
    volatile struct MatrixPayload matrixPayload = {0};
    matrixPayload.nibbleCount = NIBBLE_NONE;
    
    unsigned int k1_1_prev = 10;
    unsigned int k1_2_prev = 10;
    unsigned int k1_3_prev = 10;
    unsigned int k1_4_prev = 10;
    unsigned int k1_5_prev = 10;
    unsigned int s1_1_prev = 10;
    unsigned int s1_3_prev = 10;
    unsigned int s1_4_prev = 10;
    unsigned int s1_5_prev = 10;
    unsigned int slam_prev = 10;
    
    unsigned int currentStrobe = 0;
    bool matrix[8][8];
    for(unsigned int i = 0; i < 8; i++) {
        for(unsigned int j = 0; j < 8; j++) {
            matrix[i][j] = true;
        }
    }
    
    D5_SetLow();
//             __delay_ms(50);        
    while (1)
    {
        //////////
        // SENDING
        //////////
        while(versionCount <= 3)
        {
            beforeSend();
            sendVersion(versionCount, payload);
            while(PI_ACK_GetValue() == prevAckState) { // wait until ack
                if (PI_RESEND_GetValue()) {
                    versionCount = -1;
                    break;
                }
                continue;
            }
            prevAckState = PI_ACK_GetValue();
            versionCount++;
        };
        D5_SetLow();
        
        while(dipCount <= 3)
        {
            beforeSend();
            sendDips(dipCount, payload);
            while(PI_ACK_GetValue() == prevAckState) { // wait until ack
                if (PI_RESEND_GetValue()) {
                    dipCount = -1;
                    break;
                }
                continue;
            }
            prevAckState = PI_ACK_GetValue();
            dipCount++;
        };
        D5_SetLow();
        
        while(matrixPayload.nibbleCount <= 3)
        {
            beforeSend();
            sendMatrix(
                matrixPayload.nibbleCount, matrixPayload.strobe,
                matrixPayload.retrn, matrixPayload.state,
                payload
            );
            while(PI_ACK_GetValue() == prevAckState) { // wait until ack
                if (PI_RESEND_GetValue()) {
                    matrixPayload.nibbleCount = -1;
                    break;
                }
                continue;
            }
            prevAckState = PI_ACK_GetValue();
            matrixPayload.nibbleCount++;
        };
        D5_SetLow();
        
        ///////////
        // UPDATING
        ///////////
        
        bool jumperChanged =
            k1_1_prev != K1_1_GetValue() || 
            k1_2_prev != K1_2_GetValue() ||
            k1_3_prev != K1_3_GetValue() ||
            k1_4_prev != K1_4_GetValue() ||
            k1_5_prev != K1_5_GetValue() ||
            s1_1_prev != S1_1_GetValue() ||
            s1_3_prev != S1_3_GetValue() ||
            s1_4_prev != S1_4_GetValue() ||
            s1_5_prev != S1_5_GetValue() ||
            slam_prev != Slam_GetValue();
        // if a jumper has change and we're not sending a jumper, (re)send it.
        if (jumperChanged) {
            dipCount = NIBBLE_0;
            k1_1_prev = K1_1_GetValue(); 
            k1_2_prev = K1_2_GetValue();
            k1_3_prev = K1_3_GetValue();
            k1_4_prev = K1_4_GetValue();
            k1_5_prev = K1_5_GetValue();
            s1_1_prev = S1_1_GetValue();
            s1_3_prev = S1_3_GetValue();
            s1_4_prev = S1_4_GetValue();
            s1_5_prev = S1_5_GetValue();
            slam_prev = Slam_GetValue();
        }
        
        currentStrobe = (currentStrobe + 1) % 8;
        // the returns have a weak pull up, thus are active low. strobe low.
        setStrobe(currentStrobe, false);
//        __delay_ms(50);
        for(unsigned int currentReturn = 0; currentReturn < 8; currentReturn++) {
            bool returnValue = getReturn(currentReturn);
            // if a change has occurred, record it so we'll send above.
            if (matrix[currentStrobe][currentReturn] != returnValue) {
                matrix[currentStrobe][currentReturn] = returnValue;
                matrixPayload.nibbleCount = 0;
                matrixPayload.strobe = currentStrobe;
                matrixPayload.retrn = currentReturn;
                matrixPayload.state = returnValue;
                break;
            }
        }
        // finish our strobe
        setStrobe(currentStrobe, true);
    }
}

void setStrobe(unsigned int strobe, bool state) {
    switch (strobe) {
        case 0:
            if (state) Strobe0_SetHigh(); else Strobe0_SetLow();
            break;
        case 1:
            if (state) Strobe1_SetHigh(); else Strobe1_SetLow();
            break;
        case 2:
            if (state) Strobe2_SetHigh(); else Strobe2_SetLow();
            break;
        case 3:
            if (state) Strobe3_SetHigh(); else Strobe3_SetLow();
            break;
        case 4:
            if (state) Strobe4_SetHigh(); else Strobe4_SetLow();
            break;
        case 5:
            if (state) Strobe5_SetHigh(); else Strobe5_SetLow();
            break;
        case 6:
            if (state) Strobe6_SetHigh(); else Strobe6_SetLow();
            break;
        case 7:
            if (state) Strobe7_SetHigh(); else Strobe7_SetLow();
            break;
    }
}

bool getReturn(unsigned int retrn) {
    switch (retrn) {
        case 0:
            return Return0_GetValue();
        case 1:
            return Return1_GetValue();
        case 2:
            return Return2_GetValue();
        case 3:
            return Return3_GetValue();
        case 4:
            return Return4_GetValue();
        case 5:
            return Return5_GetValue();
        case 6:
            return Return6_GetValue();
        case 7:
            return Return7_GetValue();
        default:
            return true;
    }
}

void sendVersion(unsigned int versionCount, unsigned int payload[]) {
    bool d0, d1, d2, d3;
    if (versionCount == NIBBLE_0){
        d0 = false;
        d1 = false;
        d2 = (VERSION_MAJOR & 0x20) > 0;
        d3 = (VERSION_MAJOR & 0x10) > 0;
    }
    else if (versionCount == NIBBLE_1) {
        d0 = (bool)(VERSION_MAJOR & 0x08);
        d1 = (bool)(VERSION_MAJOR & 0x04);
        d2 = (bool)(VERSION_MAJOR & 0x02);
        d3 = (bool)(VERSION_MAJOR & 0x01);
    }
    else if (versionCount == NIBBLE_2) {
        d0 = (bool)(VERSION_MINOR & 0x08);
        d1 = (bool)(VERSION_MINOR & 0x04);
        d2 = (bool)(VERSION_MINOR & 0x02);
        d3 = (bool)(VERSION_MINOR & 0x01);
    }
    else if (versionCount == NIBBLE_3) {
        // checksum
        d0 = getParity(payload[NIBBLE_0]);
        d1 = getParity(payload[NIBBLE_1]);
        d2 = getParity(payload[NIBBLE_2]);
        d3 = true;
    }
    payload[versionCount] = setNibble(d0, d1, d2, d3);
    afterSend();
}

void sendDips(unsigned int dipCount, unsigned int payload[]) {
    bool d0, d1, d2, d3;
    if (dipCount == NIBBLE_0){
        d0 = false;
        d1 = true;
        d2 = K1_1_GetValue();
        d3 = K1_2_GetValue();
    }
    else if (dipCount == NIBBLE_1) {
        d0 = K1_3_GetValue();
        d1 = K1_4_GetValue();
        d2 = K1_5_GetValue();
        d3 = S1_1_GetValue();
    }
    else if (dipCount == NIBBLE_2) {
        d0 = S1_3_GetValue();
        d1 = S1_4_GetValue();
        d2 = S1_5_GetValue();
        d3 = Slam_GetValue();
    }
    else if (dipCount == NIBBLE_3) {
        // checksum
        d0 = getParity(payload[NIBBLE_0]);
        d1 = getParity(payload[NIBBLE_1]);
        d2 = getParity(payload[NIBBLE_2]);
        d3 = true;
    }
    payload[dipCount] = setNibble(d0, d1, d2, d3);
    afterSend();
}

void sendMatrix(unsigned int nibbleCount, unsigned int strobe, unsigned int retrn, bool state, unsigned int payload[]) {
//    Op Code 2 - Switch matrix state
//    [10SSSRRR][T000CCCC] S=strobe, R=return, T=activated
    bool d0, d1, d2, d3;
    if(nibbleCount == NIBBLE_0) {
        d0 = true;
        d1 = false;
        d2 = (bool)(strobe & 0x04);
        d3 = (bool)(strobe & 0x02);
    }
    else if (nibbleCount == NIBBLE_1){
        d0 = (bool)(strobe & 0x01);
        d1 = (bool)(retrn & 0x04);
        d2 = (bool)(retrn & 0x02);
        d3 = (bool)(retrn & 0x01);
    }
    else if (nibbleCount == NIBBLE_2) {
        d0 = state;
        d1 = false;
        d2 = false;
        d3 = false;
    }
    else if (nibbleCount == NIBBLE_3) {
        d0 = getParity(payload[NIBBLE_0]);
        d1 = getParity(payload[NIBBLE_1]);
        d2 = getParity(payload[NIBBLE_2]);
        d3 = true;
    }
    payload[nibbleCount] = setNibble(d0, d1, d2, d3);
    afterSend();
}

void beforeSend() {
    OUT_RDY_SetLow();
    D5_SetHigh();
}

void afterSend() {
    OUT_RDY_SetHigh();
}

unsigned int setNibble(bool d0, bool d1, bool d2, bool d3) {
    if (d0) {
        Data0_SetHigh();
    }
    else {
        Data0_SetLow();
    }
    
    if (d1) {
        Data1_SetHigh();
    }
    else {
        Data1_SetLow();
    }
    
    if (d2) {
        Data2_SetHigh();
    }
    else {
        Data2_SetLow();
    }
    
    if (d3) {
        Data3_SetHigh();
    }
    else {
        Data3_SetLow();
    }
    
    unsigned int nib = 0;
    nib <<= 1;
    nib |= d0;
    nib <<= 1;
    nib |= d1;
    nib <<= 1;
    nib |= d2;
    nib <<= 1;
    nib |= d3;
    return nib;
}

bool getParity(unsigned int n) { 
    bool parity = 0; 
    while (n) 
    { 
        parity = !parity; 
        n      = n & (n - 1); 
    }         
    return parity; 
}

/**
 End of File
*/