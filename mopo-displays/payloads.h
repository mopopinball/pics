/* 
 * File:   payloads.h
 * Author: sirva
 *
 * Created on February 8, 2020, 12:46 PM
 */

#ifndef PAYLOADS_H
#define	PAYLOADS_H

#ifdef	__cplusplus
extern "C" {
#endif
    
typedef struct {
    uint8_t COMMAND:8;
    
    uint8_t SYSTEM_NUMBER:8;
} SetSystemPayload;

typedef struct {
    uint8_t COMMAND:8;
    
    bool PLAYER1_D6_A:1;
    bool PLAYER1_D6_B:1;
    bool PLAYER1_D6_C:1;
    bool PLAYER1_D6_D:1;
    bool PLAYER1_D6_E:1;
    bool PLAYER1_D6_F:1;
    bool PLAYER1_D6_G:1;
    bool PLAYER1_D6_H:1;
    
    bool PLAYER1_D5_A:1;
    bool PLAYER1_D5_B:1;
    bool PLAYER1_D5_C:1;
    bool PLAYER1_D5_D:1;
    bool PLAYER1_D5_E:1;
    bool PLAYER1_D5_F:1;
    bool PLAYER1_D5_G:1;
    bool PLAYER1_D5_H:1;
    
    bool PLAYER1_D4_A:1;
    bool PLAYER1_D4_B:1;
    bool PLAYER1_D4_C:1;
    bool PLAYER1_D4_D:1;
    bool PLAYER1_D4_E:1;
    bool PLAYER1_D4_F:1;
    bool PLAYER1_D4_G:1;
    bool PLAYER1_D4_H:1;
    
    bool PLAYER1_D3_A:1;
    bool PLAYER1_D3_B:1;
    bool PLAYER1_D3_C:1;
    bool PLAYER1_D3_D:1;
    bool PLAYER1_D3_E:1;
    bool PLAYER1_D3_F:1;
    bool PLAYER1_D3_G:1;
    bool PLAYER1_D3_H:1;
    
    bool PLAYER1_D2_A:1;
    bool PLAYER1_D2_B:1;
    bool PLAYER1_D2_C:1;
    bool PLAYER1_D2_D:1;
    bool PLAYER1_D2_E:1;
    bool PLAYER1_D2_F:1;
    bool PLAYER1_D2_G:1;
    bool PLAYER1_D2_H:1;
    
    bool PLAYER1_D1_A:1;
    bool PLAYER1_D1_B:1;
    bool PLAYER1_D1_C:1;
    bool PLAYER1_D1_D:1;
    bool PLAYER1_D1_E:1;
    bool PLAYER1_D1_F:1;
    bool PLAYER1_D1_G:1;
    bool PLAYER1_D1_H:1;
    
    bool PLAYER2_D6_A:1;
    bool PLAYER2_D6_B:1;
    bool PLAYER2_D6_C:1;
    bool PLAYER2_D6_D:1;
    bool PLAYER2_D6_E:1;
    bool PLAYER2_D6_F:1;
    bool PLAYER2_D6_G:1;
    bool PLAYER2_D6_H:1;
    
    bool PLAYER2_D5_A:1;
    bool PLAYER2_D5_B:1;
    bool PLAYER2_D5_C:1;
    bool PLAYER2_D5_D:1;
    bool PLAYER2_D5_E:1;
    bool PLAYER2_D5_F:1;
    bool PLAYER2_D5_G:1;
    bool PLAYER2_D5_H:1;
    
    bool PLAYER2_D4_A:1;
    bool PLAYER2_D4_B:1;
    bool PLAYER2_D4_C:1;
    bool PLAYER2_D4_D:1;
    bool PLAYER2_D4_E:1;
    bool PLAYER2_D4_F:1;
    bool PLAYER2_D4_G:1;
    bool PLAYER2_D4_H:1;
    
    bool PLAYER2_D3_A:1;
    bool PLAYER2_D3_B:1;
    bool PLAYER2_D3_C:1;
    bool PLAYER2_D3_D:1;
    bool PLAYER2_D3_E:1;
    bool PLAYER2_D3_F:1;
    bool PLAYER2_D3_G:1;
    bool PLAYER2_D3_H:1;
    
    bool PLAYER2_D2_A:1;
    bool PLAYER2_D2_B:1;
    bool PLAYER2_D2_C:1;
    bool PLAYER2_D2_D:1;
    bool PLAYER2_D2_E:1;
    bool PLAYER2_D2_F:1;
    bool PLAYER2_D2_G:1;
    bool PLAYER2_D2_H:1;
    
    bool PLAYER2_D1_A:1;
    bool PLAYER2_D1_B:1;
    bool PLAYER2_D1_C:1;
    bool PLAYER2_D1_D:1;
    bool PLAYER2_D1_E:1;
    bool PLAYER2_D1_F:1;
    bool PLAYER2_D1_G:1;
    bool PLAYER2_D1_H:1;
    
    bool PLAYER3_D6_A:1;
    bool PLAYER3_D6_B:1;
    bool PLAYER3_D6_C:1;
    bool PLAYER3_D6_D:1;
    bool PLAYER3_D6_E:1;
    bool PLAYER3_D6_F:1;
    bool PLAYER3_D6_G:1;
    bool PLAYER3_D6_H:1;
    
    bool PLAYER3_D5_A:1;
    bool PLAYER3_D5_B:1;
    bool PLAYER3_D5_C:1;
    bool PLAYER3_D5_D:1;
    bool PLAYER3_D5_E:1;
    bool PLAYER3_D5_F:1;
    bool PLAYER3_D5_G:1;
    bool PLAYER3_D5_H:1;
    
    bool PLAYER3_D4_A:1;
    bool PLAYER3_D4_B:1;
    bool PLAYER3_D4_C:1;
    bool PLAYER3_D4_D:1;
    bool PLAYER3_D4_E:1;
    bool PLAYER3_D4_F:1;
    bool PLAYER3_D4_G:1;
    bool PLAYER3_D4_H:1;
    
    bool PLAYER3_D3_A:1;
    bool PLAYER3_D3_B:1;
    bool PLAYER3_D3_C:1;
    bool PLAYER3_D3_D:1;
    bool PLAYER3_D3_E:1;
    bool PLAYER3_D3_F:1;
    bool PLAYER3_D3_G:1;
    bool PLAYER3_D3_H:1;
    
    bool PLAYER3_D2_A:1;
    bool PLAYER3_D2_B:1;
    bool PLAYER3_D2_C:1;
    bool PLAYER3_D2_D:1;
    bool PLAYER3_D2_E:1;
    bool PLAYER3_D2_F:1;
    bool PLAYER3_D2_G:1;
    bool PLAYER3_D2_H:1;
    
    bool PLAYER3_D1_A:1;
    bool PLAYER3_D1_B:1;
    bool PLAYER3_D1_C:1;
    bool PLAYER3_D1_D:1;
    bool PLAYER3_D1_E:1;
    bool PLAYER3_D1_F:1;
    bool PLAYER3_D1_G:1;
    bool PLAYER3_D1_H:1;
    
    bool PLAYER4_D6_A:1;
    bool PLAYER4_D6_B:1;
    bool PLAYER4_D6_C:1;
    bool PLAYER4_D6_D:1;
    bool PLAYER4_D6_E:1;
    bool PLAYER4_D6_F:1;
    bool PLAYER4_D6_G:1;
    bool PLAYER4_D6_H:1;
    
    bool PLAYER4_D5_A:1;
    bool PLAYER4_D5_B:1;
    bool PLAYER4_D5_C:1;
    bool PLAYER4_D5_D:1;
    bool PLAYER4_D5_E:1;
    bool PLAYER4_D5_F:1;
    bool PLAYER4_D5_G:1;
    bool PLAYER4_D5_H:1;
    
    bool PLAYER4_D4_A:1;
    bool PLAYER4_D4_B:1;
    bool PLAYER4_D4_C:1;
    bool PLAYER4_D4_D:1;
    bool PLAYER4_D4_E:1;
    bool PLAYER4_D4_F:1;
    bool PLAYER4_D4_G:1;
    bool PLAYER4_D4_H:1;
    
    bool PLAYER4_D3_A:1;
    bool PLAYER4_D3_B:1;
    bool PLAYER4_D3_C:1;
    bool PLAYER4_D3_D:1;
    bool PLAYER4_D3_E:1;
    bool PLAYER4_D3_F:1;
    bool PLAYER4_D3_G:1;
    bool PLAYER4_D3_H:1;
    
    bool PLAYER4_D2_A:1;
    bool PLAYER4_D2_B:1;
    bool PLAYER4_D2_C:1;
    bool PLAYER4_D2_D:1;
    bool PLAYER4_D2_E:1;
    bool PLAYER4_D2_F:1;
    bool PLAYER4_D2_G:1;
    bool PLAYER4_D2_H:1;
    
    bool PLAYER4_D1_A:1;
    bool PLAYER4_D1_B:1;
    bool PLAYER4_D1_C:1;
    bool PLAYER4_D1_D:1;
    bool PLAYER4_D1_E:1;
    bool PLAYER4_D1_F:1;
    bool PLAYER4_D1_G:1;
    bool PLAYER4_D1_H:1;
    
    bool STATUS_D16_A:1;
    bool STATUS_D16_B:1;
    bool STATUS_D16_C:1;
    bool STATUS_D16_D:1;
    bool STATUS_D16_E:1;
    bool STATUS_D16_F:1;
    bool STATUS_D16_G:1;
    bool STATUS_D16_NA:1;
    
    bool STATUS_D15_A:1;
    bool STATUS_D15_B:1;
    bool STATUS_D15_C:1;
    bool STATUS_D15_D:1;
    bool STATUS_D15_E:1;
    bool STATUS_D15_F:1;
    bool STATUS_D15_G:1;
    bool STATUS_D15_NA:1;
    
    bool STATUS_D14_A:1;
    bool STATUS_D14_B:1;
    bool STATUS_D14_C:1;
    bool STATUS_D14_D:1;
    bool STATUS_D14_E:1;
    bool STATUS_D14_F:1;
    bool STATUS_D14_G:1;
    bool STATUS_D14_NA:1;
    
    bool STATUS_D13_A:1;
    bool STATUS_D13_B:1;
    bool STATUS_D13_C:1;
    bool STATUS_D13_D:1;
    bool STATUS_D13_E:1;
    bool STATUS_D13_F:1;
    bool STATUS_D13_G:1;
    bool STATUS_D13_NA:1;
} SystemEightyOrigPayload;



#ifdef	__cplusplus
}
#endif

#endif	/* PAYLOADS_H */

