/********************************************************************/
/* Author	: MOHAMED ABDELNABY								 	 	*/
/* Date		: 31 Aug 2020                                           */
/* Version	: V01                                                	*/
/********************************************************************/

rows[8] = {LEDMRX_ROW0, LEDMRX_ROW1, LEDMRX_ROW2, LEDMRX_ROW3, LEDMRX_ROW4,
			LEDMRX_ROW5, LEDMRX_ROW6, LEDMRX_ROW7};
cols[8] = {LEDMRX_COL0, LEDMRX_COL1, LEDMRX_COL2, LEDMRX_COL3, LEDMRX_COL4,
			LEDMRX_COL5, LEDMRX_COL6, LEDMRX_COL7};

void HLEDMRX_voidInit(void)
{
	for(u8 i =0; i <= 7; i++)
	{
		MGPIO_voidSetPinDirection(rows[i], OUTPUT_SPEED_2MHZ_PP);
		MGPIO_voidSetPinDirection(cols[i], OUTPUT_SPEED_2MHZ_PP);
	}
}

void HLEDMRX_voidDisplay(u8 *Copy_u8Data)
{
	u8 Local_u8BIT;
	for(u8 fbs = 0; fbs < 50; fbs++){
		for(u8 i =0; i <= 7; i++){
			for(u8 j =0; j <= 7; j++)
			{
				MGPIO_voidSetPinValue(cols[j], HIGH);
			}
			for(u8 k =0; k <= 7; k++){
				Local_u8BIT = GET_BIT(Copy_u8Data[i], k);
				MGPIO_voidSetPinValue(rows[k], Local_u8BIT);
			}
			MGPIO_voidSetPinValue(cols[i], LOW);
			MSTK_voidSetBusyWait(2500);
		}
	}
	
}