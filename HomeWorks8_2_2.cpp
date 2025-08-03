#include <iostream>
#include <Windows.h>

namespace Calculator {
    int calc(int x, int y) {
        return x + y;
    }

    int calc(int x, int y, char a) {
        return x - y;
    }

    int calc(int x, int y, bool b) {
        return x * y;
    }

    int calc(int x, int y, double c) {
        return x / y;
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x = 6, y = 9;
    std::cout << "x = " << x << ", y = " << y << std::endl;

    std::cout << "Сложение: " << Calculator::calc(x, y) << std::endl;
    std::cout << "Вычитание: " << Calculator::calc(x, y, '+') << std::endl;
    std::cout << "Умножение: " << Calculator::calc(x, y, true) << std::endl;
    std::cout << "Деление: " << Calculator::calc(x, y, 1.0) << std::endl;

    return 0;
}