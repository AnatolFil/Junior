#include<DateValidator.h>

void DateValidator::Validate(Date D)
{
	ValidateDay(D.GetDay());
	ValidateMonth(D.GetMonth());
	ValidateYear(D.GetYear());
}

void DateValidator::ValidateDay(int Day)
{
	if (Day <= 0 || Day > 31)
		throw DateException("Wrong day of month. It must be greater 0 and less 32/");
}

void DateValidator::ValidateMonth(int Month)
{
	if (Month <= 0 || Month > 12)
		throw DateException("Wrong month. It must be greater 0 and less 13.");
}

void DateValidator::ValidateYear(int Year)
{
	if (Year < 1900)
		throw DateException("Wrong Year. It must be greater 1900.");
}
