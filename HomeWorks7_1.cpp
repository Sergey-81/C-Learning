#include <iostream>
#include <Windows.h>


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    
    int a;
    short s;
    long l;
    long long ll;
    float f;
    double d;
    long double ld;
    bool b;

    
    std::cout << "short: " << &s << " " << sizeof(s) << std::endl;
    std::cout << "int: " << &a << " " << sizeof(a) << std::endl;
    std::cout << "long: " << &l << " " << sizeof(l) << std::endl;
    std::cout << "long long: " << &ll << " " << sizeof(ll) << std::endl;
    std::cout << "float: " << &f << " " << sizeof(f) << std::endl;
    std::cout << "double: " << &d << " " << sizeof(d) << std::endl;
    std::cout << "long double: " << &ld << " " << sizeof(ld) << std::endl;
    std::cout << "bool: " << static_cast<void*>(&b) << " " << sizeof(b) << std::endl;

    return 0;

}

