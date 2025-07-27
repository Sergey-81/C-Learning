#include <iostream>
#include <Windows.h>

int function(int value, int power) {
    int result = 1;
    for (int i = 0; i < power; i++) {
        result *= value;
    }
    return result;
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int value = 5, power = 2;
    int result = function(value, power);
    std::cout << value << " в степени " << power << " = " << result << std::endl;

    value = 3;
    power = 3;
    result = function(value, power);
    std::cout << value << " в степени " << power << " = " << result << std::endl;

    value = 4;
    power = 4;
    result = function(value, power);
    std::cout << value << " в степени " << power << " = " << result << std::endl;

    return 0;
}

