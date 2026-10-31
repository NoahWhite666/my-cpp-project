#include "labaratornaya4.hpp"
#include "funk.hpp"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void task6() {

    printBigTitle("....ЛАБАРАТОРНАЯ №4....");
    printTitle("УСТАНОВИТЬ i-ЫЙ БИТ ЧИСЛА В 1");

    int x = 0;
    cout << "Введите число х (0 < х < 10^9): ";
    cin >> x;

        printBlank();

    int i = 0;
    cout << "Введите номер бита i: ";
    cin >> i;

        printBlank();

    cout << "Число до: ";
    for (int b = 30; b >= 0; b = b - 1) {
        cout << ((x >> b) & 1);
    }

    int maska = 1 << i;
    x = x | maska;

    printBlank();

    cout << "Число после: ";
    for (int b = 30; b >= 0; b = b - 1) {
        cout << ((x >> b) & 1);
    }

    printBlank();

    cout << "Результат: " << x << endl;

    printBlank();
}