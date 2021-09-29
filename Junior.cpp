#include <Junior.h>

Junior::Junior() : Name{}, SecondName{}, SurName{}, Burthday(), Adr(), Phone{}, Specialization(C) ,YearOfWork(0)
{
}

Junior::Junior(_TCHAR _Name[255], _TCHAR _SecondName[255], _TCHAR _SurName[255]): Junior()
{
	SetName(_Name);
	SetSecondName(_SecondName);
	SetSurName(_SurName);
}

Junior::Junior(_TCHAR _Name[255], _TCHAR _SecondName[255], _TCHAR _SurName[255], Date _Burthday): Junior(_Name, _SecondName, _SurName)
{
	SetBurthday(_Burthday);
}

_TCHAR* Junior::GetName()
{
	return Name;
}

_TCHAR* Junior::GetSecondName()
{
	return SecondName;
}

_TCHAR* Junior::GetSurName()
{
	return SurName;
}

Date Junior::GetBurthday()
{
	return Burthday;
}

Address Junior::GetAdr()
{
	return Adr;
}

_TCHAR* Junior::GetPhone()
{
	return Phone;
}

Language Junior::GetSpecialization()
{
	return Specialization;
}

int Junior::GetYearOfWork()
{
	return YearOfWork;
}

void Junior::SetName(_TCHAR _Name[255])
{
	_tcscpy_s(Name, _Name);
}

void Junior::SetSecondName(_TCHAR _SecondName[255])
{
	_tcscpy_s(SecondName, _SecondName);
}

void Junior::SetSurName(_TCHAR _SurName[255])
{
	_tcscpy_s(SurName, _SurName);
}

void Junior::SetBurthday(Date _Burthday)
{
	Burthday = _Burthday;
}

void Junior::SetAdr(Address _Adr)
{
	Adr = _Adr;
}

void Junior::SetPhone(_TCHAR _Phone[255])
{
	_tcscpy_s(Phone, _Phone);
}

void Junior::SetSpecialization(Language _Specialization)
{
	Specialization = _Specialization;
}

void Junior::SetYearOfWork(int _YearOfWork)
{
	YearOfWork = _YearOfWork;
}

