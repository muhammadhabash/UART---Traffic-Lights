#include "../../MCAL/GPIO/GPIO.h"
#include "trafficLightsConfig.h"
#include "trafficLights.h"

void TRAFFIC_enable(void){
	
	GPIO_dir(TRAFFIC_PORT,GREEN_PIN,OUTPUT);
	GPIO_dir(TRAFFIC_PORT,YELLOW_PIN,OUTPUT);
	GPIO_dir(TRAFFIC_PORT,RED_PIN,OUTPUT);
}

void GREEN_on(void){
	
	GPIO_setHigh(TRAFFIC_PORT,GREEN_PIN);
	GPIO_setLow(TRAFFIC_PORT,YELLOW_PIN);
	GPIO_setLow(TRAFFIC_PORT,RED_PIN);
}

void YELLOW_on(void){
	
	GPIO_setHigh(TRAFFIC_PORT,YELLOW_PIN);
	GPIO_setLow(TRAFFIC_PORT,GREEN_PIN);
	GPIO_setLow(TRAFFIC_PORT,RED_PIN);
}

void RED_on(void){
	
	GPIO_setHigh(TRAFFIC_PORT,RED_PIN);
	GPIO_setLow(TRAFFIC_PORT,YELLOW_PIN);
	GPIO_setLow(TRAFFIC_PORT,GREEN_PIN);
}