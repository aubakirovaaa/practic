# CMakeList.txt: проект CMake для Laba5; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

add_library(Laba5lib STATIC "")
target_include_directories(Laba5lib PUBLIC "../include")
target_sources(Laba5lib PRIVATE "task1.c" "task2.c" "task3.c" "task4.c" "task5.c" "task6.c")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
