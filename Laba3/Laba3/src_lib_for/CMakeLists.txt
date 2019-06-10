# CMakeList.txt: проект CMake для Laba3; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_library(Task1Laba3lib STATIC "func.c")
target_include_directories(Task1Laba3lib PUBLIC "../Include")

