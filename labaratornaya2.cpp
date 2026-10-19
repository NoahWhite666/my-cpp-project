#include "labaratornaya2.hpp"
#include "funk.hpp"

#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::cin;
using std::endl;



void task1() {

    printBigTitle("....ЛАБАРАТОРНАЯ №2....");
    printTitle("1. ПОИСК МИН. И МАКС. ЧИСЛА");

    int n=0;
    cout << "Количество чисел: ";
    cin >> n;

    cout << "Число: ";
    int x=0;
    cin >> x;
    int minVal = x;
    int maxVal = x;
    for (int i = 1; i < n; i++) {
        cout << "Число: ";
        cin >> x;
        if (x < minVal) {
            minVal = x;
        }
        if (x > maxVal) maxVal = x;
        
    }

    cout << "Минимум: " << minVal << endl;
    cout << "Максимум: " << maxVal << endl;

    printBlank();

   printTitle("2. ОПРЕДЕЛЕНИЕ ПРОСТОТЫ ЧИСЛА");

    int num=0;
    cout << "Число: ";
    cin >> num;

    int k = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            k++;
        }
    }

    if (k == 2) {
        cout << "Простое"<< endl;
    } else {
        cout << "Не простое"<< endl;
    }

    printBlank();

   printTitle("3. РАСПАКОВКА НАТУРАЛЬНОГО ЧИСЛА");

    int val=0;
    cout << "Число: ";
    cin >> val;

    cout << "Цифры: ";
    while (val > 0) {
        cout << val % 10 << ""; 
        val /= 10;
    }

    printBlank();
    printBlank();
}