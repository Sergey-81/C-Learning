#include <iostream>
#include <fstream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::ifstream file("in.txt");

    if (!file.is_open()) {
        std::cout << "Не удалось открыть файл in.txt" << std::endl;
        return 1;
    }

    char word[100]; 

    while (file >> word) {
        
        std::cout << word << std::endl;
    }

    file.close();

    return 0;
}