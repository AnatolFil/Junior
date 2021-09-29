#include <Junior.h>

Junior::Junior() : Name{}, SecondName{}, SurName{}, Birthday(), Adr(), Phone{}, Specialization{}, YearOfWork(0)
{
}

Junior::Junior(const _TCHAR _Name[], const _TCHAR _SecondName[], const _TCHAR _SurName[], Date _Birthday, Address _Adr, int YearOfWork, const _TCHAR _Phone[], const _TCHAR _Specializaton[])
{
	SetName(_Name);
	SetSecondName(_SecondName);
	SetSurName(_SurName);
	SetBirthday(_Birthday);
	SetAdr(_Adr);
	SetPhone(_Phone);
	SetSpecialization(_Specializaton);
	SetYearOfWork(YearOfWork);
}


Junior::Junior(_TCHAR _Name[], _TCHAR _SecondName[], _TCHAR _SurName[], Date _Birthday, Address _Adr)
{
	SetBirthday(_Birthday);
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

Date Junior::GetBirthday()
{
	return Birthday;
}

Address Junior::GetAdr()
{
	return Adr;
}

_TCHAR* Junior::GetPhone()
{
	return Phone;
}

_TCHAR* Junior::GetSpecialization()
{
	return Specialization;
}

int Junior::GetYearOfWork()
{
	return YearOfWork;
}

string Junior::ToString()
{
	std::string str = Name;
	str.append(" ");
	str.append(SecondName);
	str.append(" ");
	str.append(SurName);
	return str;
}

char* Junior::ToCharArray()
{
	char arr[765] = {};
	_tcscpy_s(arr, _tclen(Name), Name);
	_tcscat_s(arr, " ");
	strcat_s(arr, SecondName);
	strcat_s(arr, " ");
	strcat_s(arr, SurName);
	return arr;
}

void Junior::SetName(_TCHAR _Name[255])
{
	_tcscpy_s(Name, _Name);
}

void Junior::SetName(const _TCHAR _Name[])
{
	_tcscpy_s(Name, _Name);
}

void Junior::SetSecondName(_TCHAR _SecondName[255])
{
	_tcscpy_s(SecondName, _SecondName);
}

void Junior::SetSecondName(const _TCHAR _SecondName[])
{
	_tcscpy_s(SecondName, _SecondName);
}

void Junior::SetSurName(_TCHAR _SurName[255])
{
	_tcscpy_s(SurName, _SurName);
}

void Junior::SetSurName(const _TCHAR _SurName[])
{
	_tcscpy_s(SurName, _SurName);
}

void Junior::SetBirthday(Date _Birthday)
{
	Birthday = _Birthday;
}

void Junior::SetAdr(Address _Adr)
{
	Adr = _Adr;
}

void Junior::SetPhone(_TCHAR _Phone[255])
{
	_tcscpy_s(Phone, _Phone);
}

void Junior::SetPhone(const _TCHAR _Phone[])
{
	_tcscpy_s(Phone, _Phone);
}

void Junior::SetSpecialization(const _TCHAR _Specialization[])
{
	_tcscpy_s(Specialization, _Specialization);
}

void Junior::SetYearOfWork(int _YearOfWork)
{
	YearOfWork = _YearOfWork;
}

