cmake_minimum_required(VERSION 3.15) # Проверка версии CMake.
									 # Если версия установленой программы
									 # старее указаной, произайдёт аварийный выход.

set(PROJECT_NAME lecture01_basics) 			 # задать значение PROJECT_NAME		 
project("${PROJECT_NAME}")           # установить имя проекта


set(CMAKE_CXX_STANDARD 20)			 # устанавливаем 20 стандарт языка

# Сказать программе, что должен быть исполняемый файл
add_executable("${PROJECT_NAME}" main.cpp funk.cpp funk.hpp labaratornaya2.cpp labaratornaya2.hpp labaratornaya3.cpp labaratornaya3.hpp labaratornaya4.cpp labaratornaya4.hpp)