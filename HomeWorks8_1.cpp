#include <iostream>
#include <Windows.h>

void counting_function() {
    
    static int call_count = 0;
    call_count++; 
    std::cout << "Количество вызовов функции counting_function(): " << call_count << std::endl;

}
    
    int main(int argc, char** argv)
    {
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);

        for (int i = 0; i < 15; i++) {
            counting_function();
        }
        return 0;
    }