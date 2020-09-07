/*********************************************************************/
/*  Author : Sarah Abuzaid                                           */                     
/*  Date   :   7 sep 2020                                            */           
/*  Version:   V01                                                   */
/*********************************************************************/
#ifndef OS_PRIVATE_H
#define OS_PRIVATE_H

#define 
#define 
#define 




typedef struct {
	u16 Periodicity  ;
	void (*Fptr)(void);
	u8 firstDelay ;
	u8 state      ;
}Task;



static void Scheduler (void );








#endif
