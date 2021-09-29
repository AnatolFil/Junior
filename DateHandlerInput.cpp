#include<DateHandlerInput.h>

int DateHandlerInput::RequestDay()
{
	cout << "Enter day, please." << endl;
	int Day = 1;
	cin >> Day;
	return Day;
}

int DateHandlerInput::RequestMonth()
{
	cout << "Enter month, please." << endl;
	int Month = 1;
	cin >> Month;
	return Month;
}

int DateHandlerInput::RequestYear()
{
	cout << "Enter year, please." << endl;
	int Year = 1900;
	cin >> Year;
	return Year;
}

Date DateHandlerInput::RequestDate()
{
	Date ResDate = Date();
	ResDate.SetDay(RequestDay());
	ResDate.SetMonth(RequestMonth());
	ResDate.SetYear(RequestYear());
	return ResDate;
}
