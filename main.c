#include <stdio.h>
#include "stm32f10x.h"
#include "delays.h"
#include "LCDFunctions.h"
#include "DHT11Function.h"



int main()
{
	LCDBegin();
	LCDSendString("DHT11 init...");
	DelayMs(2000);

	LCDClear();
	while(1)
		{
			DHT11run();

		}
	
}
