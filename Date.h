#pragma once

#include<TCHAR.H>

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

		int GetDay();
		int GetMonth();
		int GetYear();
};