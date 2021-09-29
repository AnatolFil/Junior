#pragma once

#include <Address.h>
#include <AddressException.h>

//Validate address information and causes exception AddressException
class AddressValidator
{
	public:
		AddressValidator() {};
		//Validate all members od Address object
		void Validate(Address Adr);
	private:
		//This methods can cause exception
		void ValidateCountry(_TCHAR* Country);
		void ValidateCity(_TCHAR* City);
		void ValidateStreet(_TCHAR* Street);
		void ValidateHouseNumber(_TCHAR* HouseNumber);
};