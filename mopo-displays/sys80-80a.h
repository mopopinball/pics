/* 
 * File:   sys80-80a.h
 * Author: sirva
 *
 * Created on August 16, 2021, 5:58 PM
 */

#ifndef SYS80_80A_H
#define	SYS80_80A_H

#ifdef	__cplusplus
extern "C" {
#endif

void update80or80aDisplay(SystemEightyOrigPayload* parsedPayload);
    
void clearDigit(void);
void setDigit(int digit);
void setSegmentOutput(int digit, SystemEightyOrigPayload* parsedPayload);

void setAOutput(
    bool a, bool b, bool c, bool d, bool e,
    bool f, bool g, bool h
);
void setBOutput(
    bool a, bool b, bool c, bool d, bool e,
    bool f, bool g, bool h
);
void setCOutput(
    bool a, bool b, bool c, bool d, bool e,
    bool f, bool g, bool h
);


#ifdef	__cplusplus
}
#endif

#endif	/* SYS80_80A_H */

