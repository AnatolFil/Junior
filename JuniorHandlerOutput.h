#pragma once

#include <iostream>
#include <Junior.h>
#include <DateHandlerOutput.h>
#include <AddressHandlerOutput.h>

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
};