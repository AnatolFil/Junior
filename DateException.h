#pragma once

#include<MyException.h>

class DateException : public MyException
{
	public:
		DateException() {};
		DateException(string Msg) : MyException(Msg) {};
};