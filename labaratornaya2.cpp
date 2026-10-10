#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::cin;
using std::endl;

void printTitle1(const string& text) {
    cout << endl <<"========================================"<< endl;
    cout << text << endl;
    cout << "========================================"<< endl << endl;
}

void printBlank1() {
    cout << endl;
}



void task2() {
   
    printTitle1("1. ПОИСК МИН. И МАКС. ЧИСЛА");

    int n=0;
    int x=0;
    cout << "Количество чисел: ";
    cin >> n;

    cout << "Число: ";
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

    printBlank1();

   printTitle1("2. ОПРЕДЕЛЕНИЕ ПРОСТОТЫ ЧИСЛА");

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

    printBlank1();

   printTitle1("3. РАСПАКОВКА НАТУРАЛЬНОГО ЧИСЛА");

    int val=0;
    cout << "Число: ";
    cin >> val;

    cout << "Цифры: ";
    while (val > 0) {
        cout << val % 10 << ""; 
        val /= 10;
    }

    printBlank1();
    printBlank1();
}

int main() {
    task2();
    return 0;
}