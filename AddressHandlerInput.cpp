#include <AddressHandlerInput.h>

_TCHAR* AddressHandlerInput::RequestCountry()
{
	cout << "Enter country, please." << endl;
	string Country = "";
	cin >> Country;
	_TCHAR* TmpStr = new _TCHAR[Country.length() + 1];
	strcpy_s(TmpStr, Country.length() + 1, Country.c_str());
	return TmpStr;
}

_TCHAR* AddressHandlerInput::RequestCity()
{
	cout << "Enter city, please." << endl;
	string City = "";
	cin >> City;
	_TCHAR* TmpStr = new _TCHAR [City.length() + 1];
	strcpy_s(TmpStr, City.length() + 1, City.c_str());
	return TmpStr;
}

_TCHAR* AddressHandlerInput::RequestStreet()
{
	cout << "Enter street, please." << endl;
	string Street = "";
	cin >> Street;
	_TCHAR* TmpStr = new char[Street.length() + 1];
	strcpy_s(TmpStr, Street.length() + 1, Street.c_str());
	return TmpStr;
}

_TCHAR* AddressHandlerInput::RequestHouseNumber()
{
	cout << "Enter number of house, please." << endl;
	string HouseNumber = "";
	cin >> HouseNumber;
	_TCHAR* TmpStr = new char[HouseNumber.length() + 1];
	strcpy_s(TmpStr, HouseNumber.length() + 1, HouseNumber.c_str());
	return TmpStr;
}

Address AddressHandlerInput::RequestAddress()
{
	Address Adr = Address();
	Adr.SetCounty(RequestCountry());
	Adr.SetCity(RequestCity());
	Adr.SetStreet(RequestStreet());
	Adr.SetHouseNumber(RequestHouseNumber());

	return Adr;
}
