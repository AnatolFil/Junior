#pragma once

#include <iostream>
#include <Address.h>

using namespace std;

class AddressHandlerOutput
{
	public:
		static void ShowCountry(Address Adr);
		static void ShowCity(Address Adr);
		static void ShowStreet(Address Adr);
		static void ShowHouseNumber(Address Adr);
		static void Show(Address Adr);
};