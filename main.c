#include "MCAL/UART/UART_interface.h"
#include "HAL/TRAFFIC LIGHTS/trafficLights.h"
#include <string.h>
/*
int main(void){

	uint8_t u8_str[10];
	TRAFFIC_enable();
	UART_init();
	while (1) {
		
		UART_receiveString('\r',u8_str, 10);
		
		if (strcmp((const char*)u8_str,"START") == 0){
				
			GREEN_on();
			UART_sendString((uint8_t*)"Green LED is on\r");
		}
		else if (strcmp((const char*)u8_str,"STOP") == 0){
				
			RED_on();
			UART_sendString((uint8_t*)"Red LED is on\r");
		}
		else if (strcmp((const char*)u8_str,"WAIT") == 0){
				
			YELLOW_on();
			UART_sendString((uint8_t*)"Yellow LED is on\r");
		}
		else if (strcmp((const char*)u8_str,"AT") == 0){
				
			UART_sendString((uint8_t*)"OK\r");
		}
	}
	
}
*/