#include <iostream>
#include <Windows.h>

int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int num;
    std::cout << "Введите число: ";
    std::cin >> num;

    std::cout << "Числа Фибоначчи: ";
    for (int i = 0; i < num; ++i) {
        std::cout << fibonacci(i) << " ";
    }

    return 0;
}