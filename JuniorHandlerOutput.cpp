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
	DateHandlerOutput::Show(Jun.GetBirthday());
	AddressHandlerOutput::Show(Jun.GetAdr());
}
