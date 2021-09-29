#include <JuniorHandlerInput.h>

_TCHAR* JuniorHandlerInput::RequestName()
{
	cout << "Enter name, please." << endl;
	string Name = "";
	cin >> Name;
	_TCHAR* TmpStr = new _TCHAR[Name.length() + 1];
	strcpy_s(TmpStr, Name.length() + 1, Name.c_str());
	return TmpStr;
}

_TCHAR* JuniorHandlerInput::RequestSecondName()
{
	cout << "Enter secondname, please." << endl;
	string Secondname = "";
	cin >> Secondname;
	_TCHAR* TmpStr = new _TCHAR[Secondname.length() + 1];
	strcpy_s(TmpStr, Secondname.length() + 1, Secondname.c_str());
	return TmpStr;
}

_TCHAR* JuniorHandlerInput::RequestSurName()
{
	cout << "Enter surname, please." << endl;
	string SurName = "";
	cin >> SurName;
	_TCHAR* TmpStr = new _TCHAR[SurName.length() + 1];
	strcpy_s(TmpStr, SurName.length() + 1, SurName.c_str());
	return TmpStr;
}

_TCHAR* JuniorHandlerInput::RequestPhone()
{
	cout << "Enter phone, please." << endl;
	string Phone = "";
	cin >> Phone;
	_TCHAR* TmpStr = new _TCHAR[Phone.length() + 1];
	strcpy_s(TmpStr, Phone.length() + 1, Phone.c_str());
	return TmpStr;
}

_TCHAR* JuniorHandlerInput::RequestSpecialization()
{
	cout << "Enter specialization, please." << endl;
	string Specialization = "";
	cin >> Specialization;
	_TCHAR* TmpStr = new _TCHAR[Specialization.length() + 1];
	strcpy_s(TmpStr, Specialization.length() + 1, Specialization.c_str());
	return TmpStr;
}

int JuniorHandlerInput::RequestYearOfWork()
{
	cout << "Enter amount of work years, please." << endl;
	int YearOfWork = 0;
	cin >> YearOfWork;
	return YearOfWork;
}

Date JuniorHandlerInput::RequestBirthday()
{
	Date Birthday = DateHandlerInput::RequestDate();
	return Birthday;
}

Address JuniorHandlerInput::RequstAddress()
{
	Address Adr = AddressHandlerInput::RequestAddress();
	return Adr;
}



Junior JuniorHandlerInput::RequestJunionInfo()
{
	Junior Jun = Junior();
	Jun.SetName(RequestName());
	Jun.SetSecondName(RequestSecondName());
	Jun.SetSurName(RequestSurName());
	Jun.SetBirthday(RequestBirthday());
	Jun.SetAdr(RequstAddress());
	Jun.SetPhone(RequestPhone());
	Jun.SetYearOfWork(RequestYearOfWork());
	Jun.SetSpecialization(RequestSpecialization());
	return Jun;
}
