#include "funk.hpp"

#include <iostream>

void print(std::string s, size_t l) {
    std::cerr << "MSG " << s << " " << l << std::endl;
}

void printTitle(const std::string& text) {
    std::cout << "============================================" << std::endl;
    std::cout << text << std::endl;
    std::cout << "============================================" << std::endl << std::endl;
}

void printBlank() {
    std::cout << std::endl;
}
