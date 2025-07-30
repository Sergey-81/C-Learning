#include <iostream>
#include <Windows.h>


void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main(int argc, char** argv) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a = 5, b = 8;

    std::cout << "a = " << a << ", b = " << b << std::endl;

    swap(a, b); 

    std::cout << "a = " << a << ", b = " << b << std::endl;

    return 0;
}

