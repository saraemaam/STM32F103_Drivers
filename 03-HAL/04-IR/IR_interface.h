/*****************************************/
/* Author  :  Sarah Emam                */
/* Version :  V01                        */
/* Date    : 9 sep 2020              */
/*****************************************/
#ifndef IR_INTERFACE_H
#define IR_INTERFACE_H

#define STOP		69
#define MODE		70
#define MUTE		71
#define ON			68
#define NEXT		64
#define BACK		67
#define EQ			128
#define VOL_DOWN	21
#define VOL_UP		9
#define ZERO		72
#define RPT			25
#define U_SD		13
#define ONE			12
#define TWO			24
#define THREE		94
#define FOUR		132
#define FIVE		28
#define SIX			90
#define SEVEN		66
#define EIGHT		82
#define NINE		74



void HIR_voidGetFrame(void);
void HIR_voidTakeAction(void);
void HIR_voidSetCallBackFunction (void (*ptr)(u8 KeyPressed));



#endif