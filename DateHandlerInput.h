#pragma once

#include <iostream>
#include <Date.h>

using namespace std;

//Request inforation from user about date.
class DateHandlerInput
{
	private:
		static int RequestDay();
		static int RequestMonth();
		static int RequestYear();
	public:
		DateHandlerInput() {};
		static Date RequestDate();
		

};