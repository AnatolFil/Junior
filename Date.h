#pragma once

#include<TCHAR.H>
#include <time.h>
#include <DateException.h>

//Date entity
class Date
{
	private:
		int Day;
		int Month;
		int Year;
		

	public:
		void SetDay(int _Day);
		void SetMonth(int _Month);
		void SetYear(int _Year);

		Date();
		Date(int _Day, int _Month, int _Year);

		int GetDay();
		int GetMonth();
		int GetYear();
		static Date GetCurrentDate();
};