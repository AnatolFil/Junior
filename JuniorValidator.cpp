#include <JuniorValidator.h>

void JuniorValidator::Validate(Junior Jun)
{
	DateValidator DateVal = DateValidator();
	AddressValidator AdrVal = AddressValidator();

	DateVal.Validate(Jun.GetBirthday());
	AdrVal.Validate(Jun.GetAdr());
	ValidateYearOfWork(Jun);
	ValidateAge(Jun.GetBirthday());

}

void JuniorValidator::ValidatePhone(_TCHAR* Phone)
{
	int Len = strlen(Phone);
	if (Len > 11 || Len <= 5)
		throw JuniorException("Invalid phone number. It must be lonher 5 and less 12.");
}

void JuniorValidator::ValidateYearOfWork(Junior Jun)
{
	Date CurrentDate = Date::GetCurrentDate();
	int JuniorAge = CurrentDate.GetYear() - Jun.GetBirthday().GetYear();
	if (Jun.GetYearOfWork() >= JuniorAge)
		throw JuniorException("Invalid work periond. It cann`t be greater than or equal person`s age.");
}

void JuniorValidator::ValidateAge(Date Birthday)
{
	Date CurrentDate = Date::GetCurrentDate();
	int JuniorAge = CurrentDate.GetYear() - Birthday.GetYear();
	if (JuniorAge <= 14)
		throw JuniorException("Invalid Birthday date. Age of person must be greater 14.");
}
