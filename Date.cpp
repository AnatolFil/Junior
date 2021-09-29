#include <Date.h>

void Date::SetDay(int _Day)
{
	Day = _Day;
}

void Date::SetMonth(int _Month)
{
	Month = _Month;
}

void Date::SetYear(int _Year)
{
	Year = _Year;
}

Date::Date(): Day(1), Month(1), Year(1990)
{
}

int Date::GetDay()
{
	return Day;
}

int Date::GetMonth()
{
	return Month;
}

int Date::GetYear()
{
	return Year;
}
