#include "Address.h"

void Address::SetCounty(_TCHAR _Country[255])
{
	_tcscpy_s(Country, _Country);
}

void Address::SetCity(_TCHAR _City[255])
{
	_tcscpy_s(City, _City);
}

void Address::SetStreet(_TCHAR _Street[255])
{
	_tcscpy_s(Street, _Street);
}

void Address::SetHouseNumber(_TCHAR _HouseNumber[255])
{
	_tcscpy_s(HouseNumber, _HouseNumber);
}

Address::Address() : Country{}, City{}, Street{}, HouseNumber{}
{
}

_TCHAR* Address::GetCounty()
{
	return Country;
}

_TCHAR* Address::GetCity()
{
	return City;
}

_TCHAR* Address::GetStreet()
{
	return Street;
}

_TCHAR* Address::GetHouseNumber()
{
	return HouseNumber;
}
