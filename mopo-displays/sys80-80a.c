#include "mcc_generated_files/pin_manager.h"
#include <stdint.h>
#include <stdbool.h>
#include "payloads.h"
#include "sys80-80a.h"

volatile int digit = 1;

/**
* For each internal loop (eg. A/B, C), set the segments for the current
* digits and then enable the digits output.
* 
* V 5.1
*  80/A displays are driven by two 74HCT238 chips
*  
*  Disable both outputs via clearDigit()
*  Set the segments to the correct values
*  Set the digits address
*  Enabled the digits output
*/
void update80or80aDisplay(SystemEightyOrigPayload* parsedPayload) {
    clearDigit();

    // Set the segments output
    setSegmentOutput(digit, parsedPayload);

    // set the digit address
    setDigit(digit);

    // reset the loop counter
    digit++;
    if (digit >= 17) {
        digit = 1;
    }
}

void clearDigit() {
    // E2 must be LOW to enable both IC5 and IC6.
    E2_SetHigh();
}

void setDigit(int digit) {
    if (digit == 1 || digit == 9) {
        A0_SetLow();
        A1_SetLow();
        A2_SetLow();
    }
    else if (digit == 2 || digit == 10) {
        A0_SetHigh();
        A1_SetLow();
        A2_SetLow();
    }
    else if (digit == 3 || digit == 11) {
        A0_SetLow();
        A1_SetHigh();
        A2_SetLow();
    }
    else if (digit == 4 || digit == 12) {
        A0_SetHigh();
        A1_SetHigh();
        A2_SetLow();
    }
    else if (digit == 5 || digit == 13) {
        A0_SetLow();
        A1_SetLow();
        A2_SetHigh();
    }
    else if (digit == 6 || digit == 14) {
        A0_SetHigh();
        A1_SetLow();
        A2_SetHigh();
    }
    else if (digit == 7 || digit == 15) {
        A0_SetLow();
        A1_SetHigh();
        A2_SetHigh();
    }
    else if (digit == 8 || digit == 16) {
        A0_SetHigh();
        A1_SetHigh();
        A2_SetHigh();
    }

    // To enable IC5 (digits 1-8) E1_E3_LAT = LOW; E2 = LOW
    // To enable IC6 (digits 9-16) E1_E3_LAT = HIGH; E2 = LOW
    E1_E3_LAT = digit > 8;
    // this is the global digit enable (active LOW)
    E2_SetLow();
}

void setSegmentOutput(int digit, SystemEightyOrigPayload* parsedPayload) {
    if (digit == 1) {
            setAOutput(
                parsedPayload->PLAYER1_D1_A,
                parsedPayload->PLAYER1_D1_B,
                parsedPayload->PLAYER1_D1_C,
                parsedPayload->PLAYER1_D1_D,
                parsedPayload->PLAYER1_D1_E,
                parsedPayload->PLAYER1_D1_F,
                parsedPayload->PLAYER1_D1_G,
                parsedPayload->PLAYER1_D1_H
            );
            setBOutput(
                parsedPayload->PLAYER3_D1_A,
                parsedPayload->PLAYER3_D1_B,
                parsedPayload->PLAYER3_D1_C,
                parsedPayload->PLAYER3_D1_D,
                parsedPayload->PLAYER3_D1_E,
                parsedPayload->PLAYER3_D1_F,
                parsedPayload->PLAYER3_D1_G,
                parsedPayload->PLAYER3_D1_H
            );
        }
        else if (digit == 2) {
            setAOutput(
                parsedPayload->PLAYER1_D2_A,
                parsedPayload->PLAYER1_D2_B,
                parsedPayload->PLAYER1_D2_C,
                parsedPayload->PLAYER1_D2_D,
                parsedPayload->PLAYER1_D2_E,
                parsedPayload->PLAYER1_D2_F,
                parsedPayload->PLAYER1_D2_G,
                parsedPayload->PLAYER1_D2_H
            );
            setBOutput(
                parsedPayload->PLAYER3_D2_A,
                parsedPayload->PLAYER3_D2_B,
                parsedPayload->PLAYER3_D2_C,
                parsedPayload->PLAYER3_D2_D,
                parsedPayload->PLAYER3_D2_E,
                parsedPayload->PLAYER3_D2_F,
                parsedPayload->PLAYER3_D2_G,
                parsedPayload->PLAYER3_D2_H
            );
        }
        else if (digit == 3) {
            setAOutput(
                parsedPayload->PLAYER1_D3_A,
                parsedPayload->PLAYER1_D3_B,
                parsedPayload->PLAYER1_D3_C,
                parsedPayload->PLAYER1_D3_D,
                parsedPayload->PLAYER1_D3_E,
                parsedPayload->PLAYER1_D3_F,
                parsedPayload->PLAYER1_D3_G,
                parsedPayload->PLAYER1_D3_H
            );
            setBOutput(
                parsedPayload->PLAYER3_D3_A,
                parsedPayload->PLAYER3_D3_B,
                parsedPayload->PLAYER3_D3_C,
                parsedPayload->PLAYER3_D3_D,
                parsedPayload->PLAYER3_D3_E,
                parsedPayload->PLAYER3_D3_F,
                parsedPayload->PLAYER3_D3_G,
                parsedPayload->PLAYER3_D3_H
            );
        }
        else if (digit == 4) {
            setAOutput(
                parsedPayload->PLAYER1_D4_A,
                parsedPayload->PLAYER1_D4_B,
                parsedPayload->PLAYER1_D4_C,
                parsedPayload->PLAYER1_D4_D,
                parsedPayload->PLAYER1_D4_E,
                parsedPayload->PLAYER1_D4_F,
                parsedPayload->PLAYER1_D4_G,
                parsedPayload->PLAYER1_D4_H
            );
            setBOutput(
                parsedPayload->PLAYER3_D4_A,
                parsedPayload->PLAYER3_D4_B,
                parsedPayload->PLAYER3_D4_C,
                parsedPayload->PLAYER3_D4_D,
                parsedPayload->PLAYER3_D4_E,
                parsedPayload->PLAYER3_D4_F,
                parsedPayload->PLAYER3_D4_G,
                parsedPayload->PLAYER3_D1_H
            );
        }
        else if (digit == 5) {
            setAOutput(
                parsedPayload->PLAYER1_D5_A,
                parsedPayload->PLAYER1_D5_B,
                parsedPayload->PLAYER1_D5_C,
                parsedPayload->PLAYER1_D5_D,
                parsedPayload->PLAYER1_D5_E,
                parsedPayload->PLAYER1_D5_F,
                parsedPayload->PLAYER1_D5_G,
                parsedPayload->PLAYER1_D5_H
            );
            setBOutput(
                parsedPayload->PLAYER3_D5_A,
                parsedPayload->PLAYER3_D5_B,
                parsedPayload->PLAYER3_D5_C,
                parsedPayload->PLAYER3_D5_D,
                parsedPayload->PLAYER3_D5_E,
                parsedPayload->PLAYER3_D5_F,
                parsedPayload->PLAYER3_D5_G,
                parsedPayload->PLAYER3_D5_H
            );
        }
        else if (digit == 6) {
            setAOutput(
                parsedPayload->PLAYER1_D6_A,
                parsedPayload->PLAYER1_D6_B,
                parsedPayload->PLAYER1_D6_C,
                parsedPayload->PLAYER1_D6_D,
                parsedPayload->PLAYER1_D6_E,
                parsedPayload->PLAYER1_D6_F,
                parsedPayload->PLAYER1_D6_G,
                parsedPayload->PLAYER1_D6_H
            );
            setBOutput(
                parsedPayload->PLAYER3_D6_A,
                parsedPayload->PLAYER3_D6_B,
                parsedPayload->PLAYER3_D6_C,
                parsedPayload->PLAYER3_D6_D,
                parsedPayload->PLAYER3_D6_E,
                parsedPayload->PLAYER3_D6_F,
                parsedPayload->PLAYER3_D6_G,
                parsedPayload->PLAYER3_D6_H
            );
        }
        else if (digit == 7) {
            setAOutput(
                parsedPayload->PLAYER2_D1_A,
                parsedPayload->PLAYER2_D1_B,
                parsedPayload->PLAYER2_D1_C,
                parsedPayload->PLAYER2_D1_D,
                parsedPayload->PLAYER2_D1_E,
                parsedPayload->PLAYER2_D1_F,
                parsedPayload->PLAYER2_D1_G,
                parsedPayload->PLAYER2_D1_H
            );
            setBOutput(
                parsedPayload->PLAYER4_D1_A,
                parsedPayload->PLAYER4_D1_B,
                parsedPayload->PLAYER4_D1_C,
                parsedPayload->PLAYER4_D1_D,
                parsedPayload->PLAYER4_D1_E,
                parsedPayload->PLAYER4_D1_F,
                parsedPayload->PLAYER4_D1_G,
                parsedPayload->PLAYER4_D1_H
            );
        }
        else if (digit == 8) {
            setAOutput(
                parsedPayload->PLAYER2_D2_A,
                parsedPayload->PLAYER2_D2_B,
                parsedPayload->PLAYER2_D2_C,
                parsedPayload->PLAYER2_D2_D,
                parsedPayload->PLAYER2_D2_E,
                parsedPayload->PLAYER2_D2_F,
                parsedPayload->PLAYER2_D2_G,
                parsedPayload->PLAYER2_D2_H
            );
            setBOutput(
                parsedPayload->PLAYER4_D2_A,
                parsedPayload->PLAYER4_D2_B,
                parsedPayload->PLAYER4_D2_C,
                parsedPayload->PLAYER4_D2_D,
                parsedPayload->PLAYER4_D2_E,
                parsedPayload->PLAYER4_D2_F,
                parsedPayload->PLAYER4_D2_G,
                parsedPayload->PLAYER4_D2_H
            );
        }
        else if (digit == 9) {
            setAOutput(
                parsedPayload->PLAYER2_D3_A,
                parsedPayload->PLAYER2_D3_B,
                parsedPayload->PLAYER2_D3_C,
                parsedPayload->PLAYER2_D3_D,
                parsedPayload->PLAYER2_D3_E,
                parsedPayload->PLAYER2_D3_F,
                parsedPayload->PLAYER2_D3_G,
                parsedPayload->PLAYER2_D3_H
            );
            setBOutput(
                parsedPayload->PLAYER4_D3_A,
                parsedPayload->PLAYER4_D3_B,
                parsedPayload->PLAYER4_D3_C,
                parsedPayload->PLAYER4_D3_D,
                parsedPayload->PLAYER4_D3_E,
                parsedPayload->PLAYER4_D3_F,
                parsedPayload->PLAYER4_D3_G,
                parsedPayload->PLAYER4_D3_H
            );
        }
        else if (digit == 10) {
            setAOutput(
                parsedPayload->PLAYER2_D4_A,
                parsedPayload->PLAYER2_D4_B,
                parsedPayload->PLAYER2_D4_C,
                parsedPayload->PLAYER2_D4_D,
                parsedPayload->PLAYER2_D4_E,
                parsedPayload->PLAYER2_D4_F,
                parsedPayload->PLAYER2_D4_G,
                parsedPayload->PLAYER2_D4_H
            );
            setBOutput(
                parsedPayload->PLAYER4_D4_A,
                parsedPayload->PLAYER4_D4_B,
                parsedPayload->PLAYER4_D4_C,
                parsedPayload->PLAYER4_D4_D,
                parsedPayload->PLAYER4_D4_E,
                parsedPayload->PLAYER4_D4_F,
                parsedPayload->PLAYER4_D4_G,
                parsedPayload->PLAYER4_D4_H
            );
        }
        else if (digit == 11) {
            setAOutput(
                parsedPayload->PLAYER2_D5_A,
                parsedPayload->PLAYER2_D5_B,
                parsedPayload->PLAYER2_D5_C,
                parsedPayload->PLAYER2_D5_D,
                parsedPayload->PLAYER2_D5_E,
                parsedPayload->PLAYER2_D5_F,
                parsedPayload->PLAYER2_D5_G,
                parsedPayload->PLAYER2_D5_H
            );
            setBOutput(
                parsedPayload->PLAYER4_D5_A,
                parsedPayload->PLAYER4_D5_B,
                parsedPayload->PLAYER4_D5_C,
                parsedPayload->PLAYER4_D5_D,
                parsedPayload->PLAYER4_D5_E,
                parsedPayload->PLAYER4_D5_F,
                parsedPayload->PLAYER4_D5_G,
                parsedPayload->PLAYER4_D5_H
            );
        }
        else if (digit == 12) {
            setAOutput(
                parsedPayload->PLAYER2_D6_A,
                parsedPayload->PLAYER2_D6_B,
                parsedPayload->PLAYER2_D6_C,
                parsedPayload->PLAYER2_D6_D,
                parsedPayload->PLAYER2_D6_E,
                parsedPayload->PLAYER2_D6_F,
                parsedPayload->PLAYER2_D6_G,
                parsedPayload->PLAYER2_D6_H
            );
            setBOutput(
                parsedPayload->PLAYER4_D6_A,
                parsedPayload->PLAYER4_D6_B,
                parsedPayload->PLAYER4_D6_C,
                parsedPayload->PLAYER4_D6_D,
                parsedPayload->PLAYER4_D6_E,
                parsedPayload->PLAYER4_D6_F,
                parsedPayload->PLAYER4_D6_G,
                parsedPayload->PLAYER4_D6_H
            );
        }
        else if (digit == 13) {
            setCOutput(
                parsedPayload->STATUS_D13_A,
                parsedPayload->STATUS_D13_B,
                parsedPayload->STATUS_D13_C,
                parsedPayload->STATUS_D13_D,
                parsedPayload->STATUS_D13_E,
                parsedPayload->STATUS_D13_F,
                parsedPayload->STATUS_D13_G,
                0
            );
        }
        else if (digit == 14) {
            setCOutput(
                parsedPayload->STATUS_D14_A,
                parsedPayload->STATUS_D14_B,
                parsedPayload->STATUS_D14_C,
                parsedPayload->STATUS_D14_D,
                parsedPayload->STATUS_D14_E,
                parsedPayload->STATUS_D14_F,
                parsedPayload->STATUS_D14_G,
                0
            );
        }
        else if (digit == 15) {
            setCOutput(
                parsedPayload->STATUS_D15_A,
                parsedPayload->STATUS_D15_B,
                parsedPayload->STATUS_D15_C,
                parsedPayload->STATUS_D15_D,
                parsedPayload->STATUS_D15_E,
                parsedPayload->STATUS_D15_F,
                parsedPayload->STATUS_D15_G,
                0
            );
        }
        else if (digit == 16) {
            setCOutput(
                parsedPayload->STATUS_D16_A,
                parsedPayload->STATUS_D16_B,
                parsedPayload->STATUS_D16_C,
                parsedPayload->STATUS_D16_D,
                parsedPayload->STATUS_D16_E,
                parsedPayload->STATUS_D16_F,
                parsedPayload->STATUS_D16_G,
                0
            );
        }
}

void setAOutput(
    bool a, bool b, bool c, bool d, bool e,
    bool f, bool g, bool h
) {
    aA_D3_LAT = a;
    bA_D0_LAT = b;
    cA_LAT = c;
    dA_LAT = d;
    eA_LAT = e;
    fA_D1_LAT = f;
    gA_D2_LAT = g;
    hA_LD1_LAT = h;
}

void setBOutput(
    bool a, bool b, bool c, bool d, bool e,
    bool f, bool g, bool h
) {
    aB_D7_LAT = a;
    bB_D4_LAT = b;
    cB_LAT = c;
    dB_LAT = d;
    eB_LAT = e;
    fB_D5_LAT = f;
    gB_D6_LAT = g;
    hB_LD2_LAT = h;
}

void setCOutput(
    bool a, bool b, bool c, bool d, bool e,
    bool f, bool g, bool h
) {
    aC_LAT = a;
    bC_LAT = b;
    cC_LAT = c;
    dC_LAT = d;
    eC_LAT = e;
    fC_LAT = f;
    gC_LAT = g;
    hC_LAT = h;
}