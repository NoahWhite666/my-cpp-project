#include "labaratornaya4.hpp"
#include "funk.hpp"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void task6() {

    printBigTitle("....ЛАБАРАТОРНАЯ №4....");
    printTitle("УСТАНОВИТЬ i-ЫЙ БИТ ЧИСЛА В 1");
    printBlank();
    
    cout <<"Введите x и номер бита i: ";
    int x;
    int i;                     // объявляем число x и номер бита i
    cin >> x;
    cin >> i;                // считываем оба числа с клавиатуры
    x = x | (1 << i);             // 1 << i ставит единицу в i-й бит, а | переносит её в число x
    cout << " Ответ: " << x << endl; // выводим получившееся число
}
