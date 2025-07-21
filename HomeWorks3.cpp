#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    ////////// Задача 1 ////////////

    std::cout << std::boolalpha;
    std::cout << "Оператор: ||" << std::endl;
    std::cout << true << " " << true << " " << (true || true) << std::endl;
    std::cout << false << " " << true << " " << (false || true) << std::endl;
    std::cout << true << " " << false << " " << (true || false) << std::endl;
    std::cout << false << " " << false << " " << (false || false) << std::endl;

    std::cout << "\nОператор: &&" << std::endl;
    std::cout << true << " " << true << " " << (true && true) << std::endl;
    std::cout << false << " " << true << " " << (false && true) << std::endl;
    std::cout << true << " " << false << " " << (true && false) << std::endl;
    std::cout << false << " " << false << " " << (false && false) << std::endl;

    ////////// Задача 2 ////////////

    int a, b, c, min, mid, max;

    std::cout << "\nВведите первое число - " << std::endl;
    std::cin >> a;
    std::cout << "Введите второе число - " << std::endl;
    std::cin >> b;
    std::cout << "Введите третье число - " << std::endl;
    std::cin >> c;

    max = (a >= b && a >= c) ? a : ((b >= a && b >= c) ? b : c);
    min = (a <= b && a <= c) ? a : ((b <= c && b <= a) ? b : c);
    mid = (a > min && a < max) ? a : ((b > min && b < max) ? b : c);

    std::cout << max << " " << mid << " " << min << std::endl;

        /////// Задача 3 ////////////

    std::string sex{ };
    std::string zodiac{ };
    int age{ };

    std::cout << "\nВведите пол:" << sex << std::endl;
    std::cin >> sex; 
    std::cout << "Введите знак зодиака:" << zodiac << std::endl;
    std::cin >> zodiac; 
    std::cout << "Введите возраст:" << age << std::endl;
    std::cin >> age;

    if ((sex == "м") && (zodiac == "рак" || zodiac == "скорпион" || zodiac == "рыбы") && (age < 40)) 
    {
        std::cout << "Ваше предсказание:" << std::endl; 
        std::cout << "Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным." << std::endl; 
    }
    else if ((sex == "ж") && (zodiac == "телец" || zodiac == "дева" || zodiac == "козерог") && (age >= 15 && age <= 30)) 
    {
        std::cout << "Ваше предсказание:" << std::endl; 
        std::cout << "Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок.\nБудет не только весело, но и интересно : найдётся дело, которое увлечёт всех." << std::endl;
    }
    else 
    {
        std::cout << "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)" << std::endl;
    };

}
