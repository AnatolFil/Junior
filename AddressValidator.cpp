#include<AddressValidator.h>

void AddressValidator::Validate(Address Adr)
{
	ValidateCountry(Adr.GetCounty());
	ValidateCity(Adr.GetCity());
	ValidateStreet(Adr.GetStreet());
	ValidateHouseNumber(Adr.GetHouseNumber());
}

void AddressValidator::ValidateCountry(_TCHAR* Country)
{
	if (strlen(Country) <= 1)
		throw AddressException("Too short name of country.");
}

void AddressValidator::ValidateCity(_TCHAR* City)
{
	if (strlen(City) <= 1)
		throw AddressException("Too short name of city.");
}

void AddressValidator::ValidateStreet(_TCHAR* Street)
{
	if (strlen(Street) <= 1)
		throw AddressException("Too short name of street.");
}

void AddressValidator::ValidateHouseNumber(_TCHAR* HouseNumber)
{
	if (strlen(HouseNumber) <= 0)
		throw AddressException("Too short house number.");
}
