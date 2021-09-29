#pragma once
#include<TCHAR.H>
#include<Date.h>
#include<Address.h>
#include<Language.h>
#include<mbstring.h>
#include <string>

using namespace std;
//Presents entity Junior
class Junior
{
	private:
		//Junior`s personal infomation
		_TCHAR Name[255];
		_TCHAR SecondName[255];
		_TCHAR SurName[255];
		Date Birthday;
		Address Adr;
		_TCHAR Phone[255];
		//Language which junion uses
		_TCHAR Specialization[255];
		//How many years junior`s been working
		int YearOfWork;
	public:
		void SetName(_TCHAR _Name[255]);
		void SetName(const _TCHAR _Name[]);
		void SetSecondName(_TCHAR _SecondName[255]);
		void SetSecondName(const _TCHAR _SecondName[]);
		void SetSurName(_TCHAR _SurName[255]);
		void SetSurName(const _TCHAR _SurName[]);
		void SetBirthday(Date _Burthday);
		void SetAdr(Address _Adr);
		void SetPhone(_TCHAR _Phone[255]);
		void SetPhone(const _TCHAR _Phone[]);
		void SetSpecialization(const _TCHAR _Specialization[]);
		void SetYearOfWork(int _YearOfWork);

		Junior();
		Junior(const _TCHAR _Name[], const _TCHAR _SecondName[], const _TCHAR _SurName[], Date _Birthday, Address _Adr, int YearOfWork, const _TCHAR _Phone[], const _TCHAR _Specializaton[]);
		Junior(_TCHAR _Name[], _TCHAR _SecondName[], _TCHAR _SurName[], Date _Burthday, Address _Adr);
		//Junior(const _TCHAR _Name[], const _TCHAR _SecondName[], const _TCHAR _SurName[], Date _Birthday, Address _Adr, const _TCHAR _Phone[], int YearOfWork, Language _Specializaton);

		_TCHAR* GetName();
		_TCHAR* GetSecondName();
		_TCHAR* GetSurName();
		Date GetBirthday();
		Address GetAdr();
		_TCHAR* GetPhone();
		_TCHAR* GetSpecialization();
		int GetYearOfWork();

		string ToString();
		char* ToCharArray();
};
