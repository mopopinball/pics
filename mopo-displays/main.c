/**
  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

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
#include "mcc_generated_files/drivers/i2c_slave.h"
#include "payloads.h"
#include "string.h"
#include "sys80-80a.h"

const int PAYLOAD_SIZE = 28;
volatile uint8_t payloadIndex = 0;
uint8_t payload[28];
// a double buffer (complete payload)
//uint8_t payloadComplete[28];
volatile uint32_t tick = 0;

void displaysIsr(void);
void updateDisplays(void);
void onAddr(void);
void onRead(void);

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

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

//    TMR1_StartTimer();
//    TMR1_SetInterruptHandler(displaysIsr);
    
    mssp1_enableIRQ();

    i2c_slave_open();
    i2c_slave_setReadIntHandler(onRead);
    i2c_slave_setAddrIntHandler(onAddr);
    
    const int MODE = 0;

    while (1)
    {
        if (tick == 0) {
            updateDisplays();
        }
        
        tick = (tick + 1) % 8;
        
        // wait
//        __delay_us(250);
        
        //todo: wait for cpu to tell us what mode to render in/check the dips.
        // maybe store this in EEPROM?
        // begin rendering in correct mode. each mode has different acceptable
        // payloads.
        
        // 80A=24+4 bytes
        // 80B=40bytes
    }
}

void displaysIsr() {
    D13_Toggle();
    updateDisplays();
}

void updateDisplays() {
    // Get the payload (updated by the interrupt)
    SystemEightyOrigPayload* parsedPayload = (SystemEightyOrigPayload*)payload;
    update80or80aDisplay(parsedPayload);
}

void onRead() {
    payload[payloadIndex] = i2c_slave_read();
    payloadIndex++;
    
    // If we have a complete payload, copy it to our double buffer
    if (payloadIndex >= PAYLOAD_SIZE) {
//        memcpy(payloadComplete, payload, PAYLOAD_SIZE);
        payloadIndex = 0;
    }
}
    
void onAddr() {
    payloadIndex = 0;
    // TODO: Read the opcode at this point?
    // toggle LED/Diode D13 to flash the LED.
    D13_Toggle();
}
