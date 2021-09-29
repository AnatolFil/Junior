#include "Address.h"

void Address::SetCounty(_TCHAR _Country[255])
{
	_tcscpy_s(Country, _Country);
}

void Address::SetCounty(const _TCHAR _Country[])
{
	_tcscpy_s(Country, _Country);
}

void Address::SetCity(_TCHAR _City[255])
{
	_tcscpy_s(City, _City);
}

void Address::SetCity(const _TCHAR _City[])
{
	_tcscpy_s(City, _City);
}

void Address::SetStreet(_TCHAR _Street[255])
{
	_tcscpy_s(Street, _Street);
}

void Address::SetStreet(const _TCHAR _Street[])
{
	_tcscpy_s(Street, _Street);
}

void Address::SetHouseNumber(_TCHAR _HouseNumber[255])
{
	_tcscpy_s(HouseNumber, _HouseNumber);
}

void Address::SetHouseNumber(const _TCHAR _HouseNumber[])
{
	_tcscpy_s(HouseNumber, _HouseNumber);
}

Address::Address() : Country{}, City{}, Street{}, HouseNumber{}
{
}

Address::Address(const _TCHAR _Country[], const _TCHAR _City[], const _TCHAR _Street[], const _TCHAR _HouseNumber[])
{
	SetCounty(_Country);
	SetCity(_City);
	SetStreet(_Street);
	SetHouseNumber(_HouseNumber);
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
