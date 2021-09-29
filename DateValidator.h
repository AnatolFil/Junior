#pragma once

#include<Date.h>
#include<DateException.h>

class DateValidator
{
	public:
		DateValidator() {};
		void Validate(Date D);
	private:
		void ValidateDay(int Day);
		void ValidateMonth(int Month);
		void ValidateYear(int Year);
};