// Junior.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Junior.h>
#include <JuniorValidator.h>

using namespace std;

int main()
{
    Junior j = Junior();
    
    try
    {
        
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
