#pragma once
#include<TCHAR.H>
#include<Date.h>
#include<Address.h>
#include<Language.h>
#include<mbstring.h>

//Presents entity Junior
class Junior
{
	private:
		//Junior`s personal infomation
		_TCHAR Name[255];
		_TCHAR SecondName[255];
		_TCHAR SurName[255];
		Date Burthday;
		Address Adr;
		_TCHAR Phone[255];
		//Language which junion uses
		Language Specialization;
		//How many years junior`s been working
		int YearOfWork;
	public:
		void SetName(_TCHAR _Name[255]);
		void SetSecondName(_TCHAR _SecondName[255]);
		void SetSurName(_TCHAR _SurName[255]);
		void SetBurthday(Date _Burthday);
		void SetAdr(Address _Adr);
		void SetPhone(_TCHAR _Phone[255]);
		void SetSpecialization(Language _Specialization);
		void SetYearOfWork(int _YearOfWork);

		Junior();
		Junior(_TCHAR _Name[255], _TCHAR _SecondName[255], _TCHAR _SurName[255]);
		Junior(_TCHAR _Name[255], _TCHAR _SecondName[255], _TCHAR _SurName[255], Date _Burthday);		

		_TCHAR* GetName();
		_TCHAR* GetSecondName();
		_TCHAR* GetSurName();
		Date GetBurthday();
		Address GetAdr();
		_TCHAR* GetPhone();
		Language GetSpecialization();
		int GetYearOfWork();
};
