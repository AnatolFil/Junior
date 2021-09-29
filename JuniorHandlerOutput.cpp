#include <JuniorHandlerOutput.h>

void JuniorHandlerOutput::ShowName(Junior Jun)
{
	cout << "Name " << Jun.GetName() << endl;
}

void JuniorHandlerOutput::ShowSecondName(Junior Jun)
{
	cout << "Secondname " << Jun.GetSecondName() << endl;
}

void JuniorHandlerOutput::ShowSurName(Junior Jun)
{
	cout << "Surname " << Jun.GetSurName() << endl;
}

void JuniorHandlerOutput::ShowSpecialization(Junior Jun)
{
	cout << "Specialization " << Jun.GetSpecialization() << endl;
}

void JuniorHandlerOutput::ShowYearOfWork(Junior Jun)
{
	cout << "Period of woork " << Jun.GetYearOfWork() << endl;
}

void JuniorHandlerOutput::ShowPhone(Junior Jun)
{
	cout << "Phone " << Jun.GetPhone() << endl;
}

void JuniorHandlerOutput::Show(Junior Jun)
{
	ShowName(Jun);
	ShowSecondName(Jun);
	ShowSurName(Jun);
	ShowSpecialization(Jun);
	ShowPhone(Jun);
	ShowYearOfWork(Jun);
	DateHandlerOutput::Show(Jun.GetBirthday());
	AddressHandlerOutput::Show(Jun.GetAdr());
}

void JuniorHandlerOutput::FindBySpecialization(Junior* Juns, int count, _TCHAR Specialization[], Junior *OUTJuns, int *OUTCount)
{
	int ind = 0;
	for (int i = 0;i < count;i++)
	{
		if (strcmp(Juns[i].GetSpecialization(), Specialization) == 0)
		{
			OUTJuns[ind] = Juns[i];
			ind++;
		}
	}
	*OUTCount = ind;
}

void JuniorHandlerOutput::FindByYearOfWork(Junior* Juns, int count, int YearOfWork, Junior* OUTJuns, int* OUTCount)
{
	int ind = 0;
	for (int i = 0;i < count;i++)
	{
		int year = Juns[i].GetYearOfWork();
		if (year == YearOfWork)
		{
			OUTJuns[ind] = Juns[i];
			ind++;
		}
	}
	*OUTCount = ind;
}

void JuniorHandlerOutput::FindByBirthday(Junior* Juns, int count, int Bithday, Junior* OUTJuns)
{
	int ind = 0;
	for (int i = 0;i < count;i++)
	{
		if (Juns[i].GetBirthday().GetYear() == Bithday)
		{
			OUTJuns[ind] = Juns[i];
			ind++;
		}
	}
}
