/************************************************************************/
/* Author : Sarah Abuzaid                                               */
/* Version: V01                                                         */
/* Date   : 8 Aug 2020                                                  */
/************************************************************************/
#ifndef _RCC_INTERFACE_H
#define _RCC_INTERFACE_H

/*Peripheral buses */
#define RCC_AHB     0
#define RCC_APB1    1
#define RCC_APB2    2



void RCC_voidEnableClock (u8 Copy_u8BusId , u8 Copy_u8PerId ) ;
void RCC_voidDisableClock(u8 Copy_u8BusId , u8 Copy_u8PerId );
void RCC_voidInitSysClock(void) ;


#endif