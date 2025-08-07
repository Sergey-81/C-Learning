#include <iostream>
#include <Windows.h>

void swap(int* a, int* b) {
    int temp = *a;  
    *a = *b;        
    *b = temp;      
}


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a = 5, b = 8;

    std::cout << "a = " << a << ", b = " << b << std::endl;

    swap(&a, &b);

    std::cout << "a = " << a << ", b = " << b << std::endl;

    return 0;
}