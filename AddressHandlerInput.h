#pragma once

#include <iostream>
#include <Address.h>

using namespace std;

class AddressHandlerInput
{
	private:
		static _TCHAR* RequestCountry();
		static _TCHAR* RequestCity();
		static _TCHAR* RequestStreet();
		static _TCHAR* RequestHouseNumber();
	public:
		AddressHandlerInput() {};
		static Address RequestAddress();
};