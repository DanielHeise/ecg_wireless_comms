/*************************************************************/
/*************************************************************/
/***** 			Daniel Heise  1-18-10  EET496            *****/
/*****    		   "Wireless Sensor System"              *****/
/*****													 *****/
/*****     adc.c only for: routers and end devices 	 	 *****/
/*****     (requires adc.h file) 						 *****/
/*************************************************************/
/*************************************************************/

#include <htc.h>
#include "main.h"
#include "adc.h"

/****************************************/
/********** Initialize for ADC **********/
/****************************************/

void init_adc(void)
{	
	ADC = DISABLED;						// Turn the A/D OFF

} // End init_adc

