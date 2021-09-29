#include <Date.h>

Date Date::GetCurrentDate()
{
	Date CurrentDate = Date();
	struct tm Newtime;
	__time64_t Long_time;
	// current date/time based on current system
	time_t Now = time(0);
	_time64(&Long_time);
	errno_t Err;

	Err = localtime_s(&Newtime, &Long_time);
	if (Err)
	{
		throw DateException("Invalid argument to _localtime64_s. We cann`t define time on your system.");
	}
	CurrentDate.SetYear(1900 + Newtime.tm_year);
	CurrentDate.SetMonth(1 + Newtime.tm_mon);
	CurrentDate.SetDay(Newtime.tm_mday);

	return CurrentDate;
}

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

Date::Date(int _Day, int _Month, int _Year)
{
	Day = _Day;
	Month = _Month;
	Year = _Year;
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
