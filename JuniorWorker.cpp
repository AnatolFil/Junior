// Junior.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Junior.h>
#include <JuniorValidator.h>
#include <JuniorHandlerInput.h>
#include <windows.h>

using namespace std;
Junior* MockForJun();

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    try
    {
        Junior* Juniors;
        Juniors = MockForJun();
        int i = 0;
    }
    catch (const std::exception &ex)
    {
        cout << ex.what();
    }
    std::cout << "";
}

Junior* MockForJun()
{
    int count = 10;
    Junior *Juniors = new Junior[count];
    for (int i = 0;i < count;i++)
    {
        Juniors[i] = Junior();
    }

    Junior jun1 = Junior("Вася", "Васильевич", "Васисьев", Date(30, 8, 1980), Address("Russia", "New York", "1st street", "10"), 3, "8(907)9871234", "C++");
    Junior jun2 = Junior("Дима", "Васильевич", "Васисьев", Date(30, 8, 1995), Address("Russia", "St. Petersburg", "Pushkina", "10"), 2, "8(907)9871234", "C");
    Junior jun3 = Junior("Анатолий", "Васильевич", "Васисьев", Date(30, 8, 1995), Address("Russia", "Moscow", "Lenina", "11"), 4, "8(907)9871234", "C#");
    Junior jun4 = Junior("Константин", "Васильевич", "Васисьев", Date(30, 8, 1993), Address("Russia", "Kazan", "Pushkin", "12"), 5, "8(907)9871234", "PHP");
    Junior jun5 = Junior("Дмитрий", "Васильевич", "Васисьев", Date(30, 8, 1997), Address("Russia", "St. Petersburg", "Lenina", "10"), 3, "8(907)9871234", "C++");
    Junior jun6 = Junior("Вася", "Васильевич", "Васисьев", Date(30, 8, 1999), Address("Russia", "Moscow", "Жукова", "10"), 6, "8(907)9871234", "C");
    Junior jun7 = Junior("Илья", "Васильевич", "Васисьев", Date(30, 8, 1999), Address("Russia", "Moscow", "Lenina", "9"), 7, "8(907)9871234", "C#");
    Junior jun8 = Junior("Вадим", "Васильевич", "Васисьев", Date(30, 8, 1992), Address("Russia", "St. Petersburg", "Lenina", "10"), 1, "8(907)9871234", "Java");
    Junior jun9 = Junior("Петр", "Васильевич", "Васисьев", Date(30, 8, 1991), Address("Russia", "Moscow", "Жукова", "16"), 2, "8(907)9871234", "PHP");
    Junior jun10 = Junior("Вася", "Васильевич", "Васисьев", Date(30, 8, 1990), Address("Russia", "Kazan", "Тупиковая", "10"), 2, "8(907)9871234", "C");

    Juniors[0] = jun1;
    Juniors[1] = jun2;
    Juniors[2] = jun3;
    Juniors[3] = jun4;
    Juniors[4] = jun5;
    Juniors[5] = jun6;
    Juniors[6] = jun7;
    Juniors[7] = jun8;
    Juniors[8] = jun9;
    Juniors[9] = jun10;
    
    return Juniors;
}
