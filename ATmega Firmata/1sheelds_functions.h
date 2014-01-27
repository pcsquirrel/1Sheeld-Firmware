﻿/*
 * _1sheelds_functions.h
 *
 * Created: 24/12/2013 08:51:42 م
 *  Author: HP
 */ 


#ifndef SHEELDS_FUNCTIONS_H_
#define SHEELDS_FUNCTIONS_H_

#include "sys.h"

uint8  digitalRead(uint8);
void   digitalWrite(uint8, uint8);
void   pinMode(uint8 , uint8);
void   analogWrite(uint8_t, uint16);
void   writePort(byte, byte, byte);
uint8  readPort(byte, byte);
uint8 serial0_Avilable();
uint8 serial1_Avilable();




#endif /* 1SHEELDS_FUNCTIONS_H_ */