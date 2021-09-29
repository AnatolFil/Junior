// Junior.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Junior.h>

int main()
{
    Junior j;
    _TCHAR name[] = _T("sdfsdaf");
    
    j.SetName(name);
    Junior j1 = Junior(name, name, name);
    Junior j2 = Junior(name, name, name, Date());
    std::cout << "Hello World!\n";
}

char* func() {
    char mas[255] = "sdfdsf";

    return mas;
}
