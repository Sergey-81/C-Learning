#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    std::string rusWord{ };

    int variable1{ 957 };

    int variable{};

    std::cout << "Введите число: \n" << variable1 << std::endl;
    std::cin >> variable;
    std::cout << "Вы ввели: \n" << variable << std::endl;

    std::cout << "Ведите любое число \n" << std::endl;
    std::cin >> variable;
    std::cout << "Вы ввели: \n" << variable << std::endl;

    std::cout << "Введите слово: \n" << "Привет!" << std::endl;
    std::cin >> rusWord;
    std::cout << "Вы ввели: \n" << rusWord << std::endl;

    std::cout << "Введите любое слово: \n" << std::endl;
    std::cin >> rusWord;
    std::cout << "Вы ввели: \n" << rusWord << std::endl;
}
