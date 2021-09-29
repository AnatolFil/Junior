#pragma once

#include<TCHAR.H>
#include<mbstring.h>

//Address entity
class Address
{
	private:
		_TCHAR Country[255];
		_TCHAR City[255];
		_TCHAR Street[255];
		_TCHAR HouseNumber[255];
	public:
		void SetCounty(_TCHAR _Country[255]);
		void SetCounty(const _TCHAR _Country[]);
		void SetCity(_TCHAR _City[255]);
		void SetCity(const _TCHAR _City[]);
		void SetStreet(_TCHAR _Street[255]);
		void SetStreet(const _TCHAR _Street[]);
		void SetHouseNumber(_TCHAR _HouseNumber[255]);
		void SetHouseNumber(const _TCHAR _HouseNumber[]);

		Address();
		Address(const _TCHAR _Country[], const _TCHAR _City[], const _TCHAR _Street[], const _TCHAR _HouseNumber[]);

		_TCHAR* GetCounty();
		_TCHAR* GetCity();
		_TCHAR* GetStreet();
		_TCHAR* GetHouseNumber();
};