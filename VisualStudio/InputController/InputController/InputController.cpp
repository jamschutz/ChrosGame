// InputController.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Controller.h"

#include <iostream>

int displayNumber() {
	return 1;
}

int getRandom() {
	return rand();
}

int displaySum() {
	int firstNumber = 7;
	int secondNumber = 7;
	int total = firstNumber + secondNumber;
	
	return total;
}