#include "labaratornaya3.hpp"
#include "funk.hpp"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

bool vseCifryRavny(int x) {
    int poslednyayaCifra = x % 10;
    int y = x / 10;
    bool odinakovye = true;
    while (y > 0) {
        if (y % 10 != poslednyayaCifra) {
            odinakovye = false;
        }
        y = y / 10;
    }
    return odinakovye;
}

int summaCifr(int x) {
    int s = 0;
    while (x > 0) {
        s = s + x % 10;
        x = x / 10;
    }
    return s;
}

int maxCifra(int x) {
    int m = 0;
    while (x > 0) {
        int d = x % 10;
        if (d > m) {
            m = d;
        }
        x = x / 10;
    }
    return m;
}

bool nadoPostavitPosle(int a, int b) {
    int sa = summaCifr(a);
    int sb = summaCifr(b);
    if (sa != sb) {
        return sa > sb;
    }
    int ma = maxCifra(a);
    int mb = maxCifra(b);
    if (ma != mb) {
        return ma > mb;
    }
    return a > b;
}

bool etoPalindrom(int x) {
    int y = x;
    int obratno = 0;
    while (y > 0) {
        obratno = obratno * 10 + y % 10;
        y = y / 10;
    }
    return obratno == x;
}


void task2() {
    printBigTitle("....ЛАБАРАТОРНАЯ №3....");
    printTitle("ЗАДАНИЕ 1. СОРТИРОВКА ПО НЕВОЗРАСТАНИЮ");

    const int MAXN = 10000;
    int a[MAXN];

    int n = 0;
    cout << "Количество чисел: ";
    cin >> n;

    cout << "Числа: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool estOdinakovye = false;
    for (int i = 0; i < n; i++) {
        if (vseCifryRavny(a[i])) {
            estOdinakovye = true;
        }
    }

    if (estOdinakovye == false) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1 - i; j++) {
                if (a[j] < a[j + 1]) {
                    int t = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = t;
                }
            }
        }
    }

    cout << "Результат: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    printBlank();
}


void task3() {

    printTitle("ЗАДАНИЕ 2. СОРТИРОВКА ПО СУММЕ ЦИФР, ПО МАКСИМАЛЬНОЙ ЦИФРЕ И ПО ЧИСЛУ");

    const int MAXN = 1000;
    int a[MAXN];

    int n = 0;
    cout << "Количество чисел: ";
    cin >> n;

    cout << "Числа: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (nadoPostavitPosle(a[j], a[j + 1])) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    cout << "Результат: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    printBlank();
}


void task4() {

    printTitle("ЗАДАНИЕ 3. СТРОКА С НАИБОЛЬШЕЙ СУММОЙ ЭЛЕМЕНТОВ");

    const int MAXN = 100;
    int a[MAXN][MAXN];

    int n = 0;
    int m = 0;
    cout << "Строк и столбцов: ";
    cin >> n >> m;

    cout << "Матрица: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int maxSum = 0;
    int maxI = 0;
    for (int i = 0; i < n; i++) {
        int s = 0;
        for (int j = 0; j < m; j++) {
            s = s + a[i][j];
        }
        if (i == 0 || s > maxSum) {
            maxSum = s;
            maxI = i;
        }
    }

    for (int j = 0; j < m; j++) {
        a[maxI][j] = a[maxI][j] + 1;
    }

    cout << "Матрица после изменения: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    printBlank();
}


void task5() {

    printTitle("ЗАДАНИЕ 4. УДАЛЕНИЕ И ДУБЛИРОВАНИЕ ЭЛЕМЕНТОВ (ОДИН МАССИВ)");

    const int MAXN = 20000;
    int a[MAXN];

    int n = 0;
    cout << "Количество чисел: ";
    cin >> n;

    cout << "Числа: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int kol = 0;
    for (int i = 0; i < n; i++) {
        if (summaCifr(a[i]) != 10) {
            a[kol] = a[i];
            kol = kol + 1;
        }
    }

    int i = 0;
    while (i < kol) {
        if (etoPalindrom(a[i])) {
            for (int j = kol; j > i + 1; j--) {
                a[j] = a[j - 1];
            }
            a[i + 1] = a[i];
            kol = kol + 1;
            i = i + 2;
        } else {
            i = i + 1;
        }
    }

    for (int i = 0; i < kol; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    printBlank();
}