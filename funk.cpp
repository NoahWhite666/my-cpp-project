#include "funk.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

void printTitle(const string& text) {
    cout << "============================================" << endl;
    cout << text << endl;
    cout << "============================================" << endl << endl;
}

void printBlank() {
    cout << endl;
}

void printBigTitle(const string& text) {
    cout << "=============-----------------==============" << endl;
    cout << text << endl;
    cout << "=============-----------------==============" << endl << endl;
}

void printStr (const string& text){
cout<<"----"<<text<<"----------------------" << endl;
} 