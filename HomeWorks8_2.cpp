#include <iostream>
#include <Windows.h>


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

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x = 6, y = 9;
    std::cout << "x = " << x << ", y = " << y << std::endl;

    std::cout << "Сложение: " << calc(x, y) << std::endl;
    std::cout << "Вычитание: " << calc(x, y, '+') << std::endl;  
    std::cout << "Умножение: " << calc(x, y, true) << std::endl;
    std::cout << "Деление: " << calc(x, y, 1.0) << std::endl;

    return 0;
}