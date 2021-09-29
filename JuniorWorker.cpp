// Junior.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Junior.h>
#include <JuniorValidator.h>

using namespace std;

int main()
{
    Junior j;
    _TCHAR name[] = _T("sdfsdaf");
    
    j.SetName(name);
    Junior j1 = Junior(name, name, name);
    Junior j2 = Junior(name, name, name, Date());
    string s = j2.ToString();
    char arr[1000];
    strcpy_s(arr, j2.ToCharArray());
    Date date = Date();
    date.SetDay(31);
    date.SetMonth(13);
    DateValidator val;
    try
    {
        val.Validate(date);
    }
    catch (const std::exception &ex)
    {
        cout << ex.what();
    }
    std::cout << "Hello World!\n";
}

char* func() {
    char mas[255] = "sdfdsf";

    return mas;
}
