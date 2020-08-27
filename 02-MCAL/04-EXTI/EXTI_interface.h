/*********************************************************************/
/*  Author : Sarah Abuzaid                                           */                     
/*  Date   :   23 Aug 2020                                           */           
/*  Version:   V01                                                   */
/*********************************************************************/

#ifndef EXTI_INTERFACE_H
#define EXTI_INTERFACE_H

/*Line and mode */
void MEXTI_voidInit ();
void MEXTI_voidEnableEXTI( u8 Copy_u8Line );
void MEXTI_voidDisableEXTI( u8 Copy_u8Line );
void MEXTI_voidSwTrigger  (u8 Copy_u8Line);
void MEXTI_voidSetSignalLatch(u8 Copy_u8Line , u8 Copy_u8Mode );












#endif
