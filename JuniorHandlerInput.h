#pragma once

#include <Junior.h>
#include <iostream>
#include <AddressHandlerInput.h>
#include <DateHandlerInput.h>

class JuniorHandlerInput
{
	private:
		static _TCHAR* RequestName();
		static _TCHAR* RequestSecondName();
		static _TCHAR* RequestSurName();
		static _TCHAR* RequestPhone();
		static _TCHAR* RequestSpecialization();
		static int RequestYearOfWork();
		static Date RequestBirthday();
		static Address RequstAddress();
	public:
		JuniorHandlerInput() {};
		static Junior RequestJunionInfo();
};