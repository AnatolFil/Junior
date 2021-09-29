#pragma once
#include<Junior.h>
#include<DateValidator.h>
#include<AddressValidator.h>
#include<JuniorException.h>

//Validate junior information, can cause exceptions (JuniorException, AddressException, DateException)
class JuniorValidator
{
	public:
		JuniorValidator() {};
		void Validate(Junior Jun);
	private:
		//Check lenght of phone number
		void ValidatePhone(_TCHAR* Phone);
		//Check person`s work period and compare it with current date
		void ValidateYearOfWork(Junior Jun);
		//Check person`s age and compare it with cuurrent date
		void ValidateAge(Date Birthday);
};