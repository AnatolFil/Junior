#pragma once

#include <iostream>
#include <Junior.h>
#include <DateHandlerOutput.h>
#include <AddressHandlerOutput.h>
#include <algorithm>

class JuniorHandlerOutput
{
	public:
		static void ShowName(Junior Jun);
		static void ShowSecondName(Junior Jun);
		static void ShowSurName(Junior Jun);
		static void ShowSpecialization(Junior Jun);
		static void ShowYearOfWork(Junior Jun);
		static void ShowPhone(Junior Jun);
		static void Show(Junior Jun);
		static void FindBySpecialization(Junior *Juns, int count, _TCHAR Specialization[], Junior* OUTJuns, int *OUTCount);
		static void FindByYearOfWork(Junior* Juns, int count, int YearOfWork, Junior* OUTJuns, int* OUTCount);
		static void FindAfterBirthYear(Junior* Juns, int count, int BithYear, Junior* OUTJuns, int* OUTCount);
		static void SortByBirthYear(Junior* Juns, int count);
		static void SortByBirthSpecialization(Junior* Juns, int count, bool (*f)(Junior, Junior));
};