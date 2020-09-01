


// Set Pin direction for all pins
void HLEDMTRX_voidInit(void){
	
	DIO_voidSetPinDirection(LED_MTRX_ROW0_PIN,DIO_OUTPUT_SPEED_2MHZ_PP);
	DIO_voidSetPinDirection(LED_MTRX_ROW1_PIN,DIO_OUTPUT_SPEED_2MHZ_PP);
	DIO_voidSetPinDirection(LED_MTRX_ROW2_PIN,DIO_OUTPUT_SPEED_2MHZ_PP);
	DIO_voidSetPinDirection(LED_MTRX_ROW3_PIN,DIO_OUTPUT_SPEED_2MHZ_PP);
	DIO_voidSetPinDirection(LED_MTRX_ROW4_PIN,DIO_OUTPUT_SPEED_2MHZ_PP);
	DIO_voidSetPinDirection(LED_MTRX_ROW5_PIN,DIO_OUTPUT_SPEED_2MHZ_PP);
	DIO_voidSetPinDirection(LED_MTRX_ROW6_PIN,DIO_OUTPUT_SPEED_2MHZ_PP);
	DIO_voidSetPinDirection(LED_MTRX_ROW7_PIN,DIO_OUTPUT_SPEED_2MHZ_PP);
	
	DIO_voidSetPinDirection(LED_MTRX_COL0_PIN,DIO_OUTPUT_SPEED_2MHZ_PP);
	DIO_voidSetPinDirection(LED_MTRX_COL1_PIN,DIO_OUTPUT_SPEED_2MHZ_PP);
	DIO_voidSetPinDirection(LED_MTRX_COL2_PIN,DIO_OUTPUT_SPEED_2MHZ_PP);
	DIO_voidSetPinDirection(LED_MTRX_COL3_PIN,DIO_OUTPUT_SPEED_2MHZ_PP);
	DIO_voidSetPinDirection(LED_MTRX_COL4_PIN,DIO_OUTPUT_SPEED_2MHZ_PP);
	DIO_voidSetPinDirection(LED_MTRX_COL5_PIN,DIO_OUTPUT_SPEED_2MHZ_PP);
	DIO_voidSetPinDirection(LED_MTRX_COL6_PIN,DIO_OUTPUT_SPEED_2MHZ_PP);
	DIO_voidSetPinDirection(LED_MTRX_COL7_PIN,DIO_OUTPUT_SPEED_2MHZ_PP);
}


void HLEDMTRX_voidDisplay(u8 Copy_u8Data){
	//Disable all columms
	DisableAllColumns();
	
	//Enable Column 0
	SetRowValues(Copy_u8Data[0]);
	DIO_voidClearPin(LED_MTRX_COL0_PIN);
	MSTK_voidBusyWait(2500);
	DIO_voidSetPin(LED_MTRX_COL0_PIN);
	
	SetRowValues(Copy_u8Data[1]);
	DIO_voidClearPin(LED_MTRX_COL1_PIN);
	MSTK_voidBusyWait(2500);
	DIO_voidSetPin(LED_MTRX_COL1_PIN);
	
	SetRowValues(Copy_u8Data[2]);
	DIO_voidClearPin(LED_MTRX_COL2_PIN);
	MSTK_voidBusyWait(2500);
	DIO_voidSetPin(LED_MTRX_COL2_PIN);
	
	SetRowValues(Copy_u8Data[3]);
	DIO_voidClearPin(LED_MTRX_COL3_PIN);
	MSTK_voidBusyWait(2500);
	DIO_voidSetPin(LED_MTRX_COL3_PIN);
	
	SetRowValues(Copy_u8Data[4]);
	DIO_voidClearPin(LED_MTRX_COL4_PIN);
	MSTK_voidBusyWait(2500);
	DIO_voidSetPin(LED_MTRX_COL4_PIN);
	
	SetRowValues(Copy_u8Data[5]);
	DIO_voidClearPin(LED_MTRX_COL5_PIN);
	MSTK_voidBusyWait(2500);
	DIO_voidSetPin(LED_MTRX_COL5_PIN);
	
	SetRowValues(Copy_u8Data[6]);
	DIO_voidClearPin(LED_MTRX_COL6_PIN);
	MSTK_voidBusyWait(2500);
	DIO_voidSetPin(LED_MTRX_COL6_PIN);
	
	SetRowValues(Copy_u8Data[7]);
	DIO_voidClearPin(LED_MTRX_COL7_PIN);
	MSTK_voidBusyWait(2500);
	DIO_voidSetPin(LED_MTRX_COL7_PIN);
}

void DisableAllColumns(void){
	DIO_voidSetPin(LED_MTRX_COL0_PIN);
	DIO_voidSetPin(LED_MTRX_COL1_PIN);
	DIO_voidSetPin(LED_MTRX_COL2_PIN);
	DIO_voidSetPin(LED_MTRX_COL3_PIN);
	DIO_voidSetPin(LED_MTRX_COL4_PIN);
	DIO_voidSetPin(LED_MTRX_COL5_PIN);
	DIO_voidSetPin(LED_MTRX_COL6_PIN);
	DIO_voidSetPin(LED_MTRX_COL7_PIN);
}


void SetRowValues (u8 Copy_u8Value){
	if (GET_BIT(Copy_u8Value,0))
		DIO_voidSetPin(LED_MTRX_ROW0_PIN);
	else 
		DIO_voidClearPin(LED_MTRX_ROW0_PIN);
	
	if (GET_BIT(Copy_u8Value,1))
		DIO_voidSetPin(LED_MTRX_ROW1_PIN);
	else 
		DIO_voidClearPin(LED_MTRX_ROW1_PIN);
	
	if (GET_BIT(Copy_u8Value,2))
		DIO_voidSetPin(LED_MTRX_ROW2_PIN);
	else 
		DIO_voidClearPin(LED_MTRX_ROW2_PIN);
	
	if (GET_BIT(Copy_u8Value,3))
		DIO_voidSetPin(LED_MTRX_ROW3_PIN);
	else 
		DIO_voidClearPin(LED_MTRX_ROW0_PIN);
	
	if (GET_BIT(Copy_u8Value,4))
		DIO_voidSetPin(LED_MTRX_ROW4_PIN);
	else 
		DIO_voidClearPin(LED_MTRX_ROW4_PIN);
	
	if (GET_BIT(Copy_u8Value,5))
		DIO_voidSetPin(LED_MTRX_ROW5_PIN);
	else 
		DIO_voidClearPin(LED_MTRX_ROW5_PIN);
	
	if (GET_BIT(Copy_u8Value,6))
		DIO_voidSetPin(LED_MTRX_ROW6_PIN);
	else 
		DIO_voidClearPin(LED_MTRX_ROW6_PIN);
	
	if (GET_BIT(Copy_u8Value,7))
		DIO_voidSetPin(LED_MTRX_ROW7_PIN);
	else 
		DIO_voidClearPin(LED_MTRX_ROW7_PIN);
}