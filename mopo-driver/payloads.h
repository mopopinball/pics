/* 
 * File:   payloads.h
 * Author: sirva
 *
 * Created on February 9, 2020, 2:20 PM
 */

#ifndef PAYLOADS_H
#define	PAYLOADS_H

#ifdef	__cplusplus
extern "C" {
#endif

typedef struct {
    // byte order is reversed
    
    bool L7:1;
    bool L6:1;
    bool L5:1;
    bool L4:1;
    bool L3:1;
    bool L2:1;
    bool L1:1;
    bool L0:1;
    
    bool L15:1;
    bool L14:1;
    bool L13:1;
    bool L12:1;
    bool L11:1;
    bool L10:1;
    bool L9:1;
    bool L8:1;
    
    bool L23:1;
    bool L22:1;
    bool L21:1;
    bool L20:1;
    bool L19:1;
    bool L18:1;
    bool L17:1;
    bool L16:1;
    
    bool L31:1;
    bool L30:1;
    bool L29:1;
    bool L28:1;
    bool L27:1;
    bool L26:1;
    bool L25:1;
    bool L24:1;
    
    bool L39:1;    
    bool L38:1;
    bool L37:1;
    bool L36:1;
    bool L35:1;
    bool L34:1;
    bool L33:1;
    bool L32:1;
    
    bool L47:1;
    bool L46:1;
    bool L45:1;
    bool L44:1;
    bool L43:1;
    bool L42:1;
    bool L41:1;
    bool L40:1;
    
    bool C3:1;
    bool C2:1;
    bool C1:1;
    bool L52:1;
    bool L51:1;
    bool L50:1;
    bool L49:1;
    bool L48:1;
    
    bool S2:1;
    bool S1:1;
    bool C9:1;
    bool C8:1;
    bool C7:1;
    bool C6:1;
    bool C5:1;
    bool C4:1;
    
    bool NULL0:1;
    bool NULL1:1;
    bool NULL2:1;
    bool NULL3:1;
    bool NULL4:1;
    bool NULL5:1;
    bool S8:1;
    bool S4:1;
} DriverPayload;


#ifdef	__cplusplus
}
#endif

#endif	/* PAYLOADS_H */

