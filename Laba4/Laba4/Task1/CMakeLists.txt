# CMakeList.txt: проект CMake для Laba4; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_subdirectory("src_lib")
add_subdirectory("src_exe")
# TODO: Добавьте тесты и целевые объекты, если это необходимо.
