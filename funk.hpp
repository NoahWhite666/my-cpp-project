#pragma once
#include <string>

void print(std::string s = __FILE__, size_t l = __LINE__);

// Печатает заголовок, обрамлённый линиями.
void printTitle(const std::string& text);

// Печатает пустую строку.
void printBlank();
