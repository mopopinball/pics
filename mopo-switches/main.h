/* 
 * File:   main.h
 * Author: sirva
 *
 * Created on January 1, 2020, 7:04 PM
 */

#ifndef MAIN_H
#define	MAIN_H

#ifdef	__cplusplus
extern "C" {
#endif

void beforeSend(void);
void afterSend(void);
void sendVersion(unsigned int versionCount, unsigned int payload[]);
void sendDips(unsigned int dipCount, unsigned int payload[]);
void sendMatrix(unsigned int nibbleCount, unsigned int strobe, unsigned int retrn, bool state, unsigned int payload[]);
void setStrobe(unsigned int strobe, bool state);
bool getReturn(unsigned int retrn);
unsigned int setNibble(bool d0, bool d1, bool d2, bool d3);
bool getParity(unsigned int n);

#ifdef	__cplusplus
}
#endif

#endif	/* MAIN_H */

