#include <AddressHandlerOutput.h>

void AddressHandlerOutput::ShowCountry(Address Adr)
{
	cout << "Country " << Adr.GetCounty() << endl;
}

void AddressHandlerOutput::ShowCity(Address Adr)
{
	cout << "City " << Adr.GetCity() << endl;
}

void AddressHandlerOutput::ShowStreet(Address Adr)
{
	cout << "Street " << Adr.GetStreet() << endl;
}

void AddressHandlerOutput::ShowHouseNumber(Address Adr)
{
	cout << "Number of house " << Adr.GetHouseNumber() << endl;
}

void AddressHandlerOutput::Show(Address Adr)
{
	ShowCountry(Adr);
	ShowCity(Adr);
	ShowStreet(Adr);
	ShowHouseNumber(Adr);
}
