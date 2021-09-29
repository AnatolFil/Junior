#include <DateHandlerOutput.h>

void DateHandlerOutput::ShowDay(Date D)
{
	cout << "Day " << D.GetDay() << endl;
}

void DateHandlerOutput::ShowMonth(Date D)
{
	cout << "Month " << D.GetMonth() << endl;
}

void DateHandlerOutput::ShowYear(Date D)
{
	cout << "Year " << D.GetYear() << endl;
}

void DateHandlerOutput::Show(Date D)
{
	ShowDay(D);
	ShowMonth(D);
	ShowYear(D);
}
