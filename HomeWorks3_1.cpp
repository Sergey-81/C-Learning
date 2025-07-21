#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a, b, c, min, max;
    
        std::cout << "\nВведите первое число - " << std::endl;
        std::cin >> a;
        std::cout << "Введите второе число - " << std::endl;
        std::cin >> b;
        std::cout << "Введите третье число - " << std::endl;
        std::cin >> c;
   
    max = (a >= b && a >= c) ? a : ((b >= c) ? b : c);
    min = (a <= b && a <= c) ? a : ((b <= c) ? b : c);
    
    int sum = a + b + c;

    
    std::cout << max << " " << sum - max - min << " " << min << std::endl;


}
