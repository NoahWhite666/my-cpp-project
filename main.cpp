#include "funk.hpp"
#include "labaratornaya2.hpp"

#include <iostream>
#include <string>
#include <limits> 

using std::cout;
using std::string;
using std::endl;

void printTitle (const string& text){
cout << "============================================" << endl;
cout << text << endl;
cout << "============================================" << endl << endl;
}

void printStr (const string& text){
cout<<"----"<<text<<"----------------------" << endl;
} 

void printBlank() {
     cout << endl;
}


int main(){

    printTitle("1. ТИПЫ ДАННЫХ В C++, МИН. И МАКС. ЗНАЧЕНИЯ");

    printStr("1.1 Логический тип");
    cout << "bool:" << endl;
    cout << "  Размер: " << sizeof(bool) << " байт " << endl;
    cout << "  Мин: " << false << " | Макс: " << true << endl;

    printBlank();

    printStr("1.2 Символьный тип");
    cout << "char:" << endl;
    cout << "  Размер: " << sizeof(char) << " байт " <<endl;
    cout << "  Мин: " << (int)numeric_limits<char>::min()
         << "  Макс: " << (int)numeric_limits<char>::max() << endl;

    printBlank();

    printStr("1.3 Целочисленные типы");

    printBlank();

    cout << "short:" << endl;
    cout << "  Размер: " << sizeof(short) << " байта " << endl;
    cout << "  Мин: " << numeric_limits<short>::min()
         << "  Макс: " << numeric_limits<short>::max() << endl;

    printBlank();

    cout << "int:" << endl;
    cout << "  Размер: " << sizeof(int) << " байта " << endl;
    cout << "  Мин: " << numeric_limits<int>::min()
         << "  Макс: " << numeric_limits<int>::max() << endl;

    printBlank();

    cout << "long long:" << endl;
    cout << "  Размер: " << sizeof(long long) << " байт " << endl ;
    cout << "  Мин: " << numeric_limits<long long>::min() 
         << "  Макс: " << numeric_limits<long long>::max() << endl;

    printBlank();

    printStr("1.4 Вещественные типы");

    printBlank();

    cout << "float:" << endl;
    cout << "  Размер: " << sizeof(float) << " байта " << endl;
    cout << "  Мин: " << numeric_limits<float>::lowest() 
         << "  Макс: " << numeric_limits<float>::max() << endl;

    printBlank();

    cout << "double:" << endl;
    cout << "  Размер: " << sizeof(double) << " байт " << endl;
    cout << "  Мин: " << numeric_limits<double>::lowest() 
    << " Макс: " << numeric_limits<double>::max() << endl;

    printBlank();

    printTitle("2. ОПЕРАЦИИ НАД ТИПАМИ ДАННЫХ");

    int a = 17;
    int b = 5;

    printBlank();

    printStr("2.1 Арифметические операции (+, -, *, /, %)");

    printBlank();

    cout << "Арифметические (a = " << a << ", b = " << b << "): " << endl;

    printBlank();

    cout << "  Сложение (a + b): " << (a + b) << endl;
    cout << "  Вычитание (a - b): " << (a - b) << endl;
    cout << "  Умножение (a * b): " << (a * b) << endl;
    cout << "  Деление целочисленное (a / b): " << (a / b) << endl;
    cout << "  Остаток от деления (a % b): " << (a % b) << endl;

    printBlank();

    printStr("2.2 Операции сравнения (==, !=, <, >, <=, >=)");

    printBlank();

    // boolalpha выводит "true"/"false" вместо "1"/"0"
    cout << boolalpha;
    cout << "Сравнения:" << endl;

    printBlank();

    cout << "  Равенство (a == b): " << (a == b) << endl;
    cout << "  Неравенство (a != b): " << (a != b) << endl;
    cout << "  Больше (a > b): " << (a > b) << endl;
    cout << "  Меньше (a < b): " << (a < b) << endl;
    cout << "  Меньше либо равно (a <= b): " << (a <= b) <<endl;

    printBlank();

    printStr("2.3 Логические операции (&&, ||, !)");

    printBlank();

    bool c1 = true
    bool c2 = false;
    cout << "  И (c1 && c2): " << (c1 && c2) << endl;
    cout << "  ИЛИ (c1||c2): " << (c1||c2) << endl;
    cout << "  НЕ (!c1): " << (!c1) << endl;

    task1();
    return 0;
}
