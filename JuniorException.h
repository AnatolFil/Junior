#pragma once

#include<MyException.h>

class JuniorException : public MyException
{
	public:
		JuniorException() {};
		JuniorException(string Msg): MyException(Msg) {};
};
