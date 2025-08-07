#include <iostream>
#include <Windows.h>

namespace Addition {
    int calc(int x, int y) {
        return x + y;
    }
}

namespace Subtraction {
    int calc(int x, int y) {
        return x - y;
    }
}

namespace Multiplication {
    int calc(int x, int y) {
        return x * y;
    }
}

namespace Division {
    int calc(int x, int y) {
        return x / y;
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x = 6, y = 9;
    std::cout << "x = " << x << ", y = " << y << std::endl;

    std::cout << "Сложение: " << Addition::calc(x, y) << std::endl;
    std::cout << "Вычитание: " << Subtraction::calc(x, y) << std::endl;
    std::cout << "Умножение: " << Multiplication::calc(x, y) << std::endl;
    std::cout << "Деление: " << Division::calc(x, y) << std::endl;

    return 0;
}