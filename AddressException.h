#pragma once

#include<MyException.h>

class AddressException : public MyException
{
	public:
		AddressException() {};
		AddressException(string Msg) : MyException(Msg) {};
};