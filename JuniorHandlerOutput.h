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
		//Juns - input data
		//OUTJuns - result of working
		//OUTCount - amount of elements in OUTJuns
		static void FindBySpecialization(Junior *Juns, int count, _TCHAR Specialization[], Junior* OUTJuns, int *OUTCount);
		//Juns - input data
		//OUTJuns - result of working
		//OUTCount - amount of elements in OUTJuns
		static void FindByYearOfWork(Junior* Juns, int count, int YearOfWork, Junior* OUTJuns, int* OUTCount);
		//Juns - input data
		//OUTJuns - result of working
		//OUTCount - amount of elements in OUTJuns
		static void FindAfterBirthYear(Junior* Juns, int count, int BithYear, Junior* OUTJuns, int* OUTCount);
		static void SortByBirthYear(Junior* Juns, int count);
		//Sort using sort from algorithm
		//Last param is pointer on comparator for sort function
		//Param Juns is input data and after processing will contain Result of lexigraph sorting 
		static void SortByBirthSpecialization(Junior* Juns, int count, bool (*f)(Junior, Junior));
};