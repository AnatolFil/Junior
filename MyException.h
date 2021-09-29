#pragma once
#include <exception>
#include <string>

using namespace std;
class MyException : public std::exception
{
	private:
		std::string Msg;
	public:
		const char* what() const noexcept { return Msg.c_str(); }
		MyException() {};
		MyException(string _Msg) : Msg(_Msg) {};
};