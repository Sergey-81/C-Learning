#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string secretWord = "малина"; 
    string userGuess;

    cout << "Угадайте слово: ";

    while (getline(cin, userGuess)) {
        if (userGuess == secretWord) {
            cout << "Правильно! Вы победили! Загаданное слово — " << secretWord << endl;
            break; 
        }
        else {
            cout << "Неправильно" << endl;
            cout << "Угадайте слово: ";
        }
    }

    return 0;
}