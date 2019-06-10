# CMakeList.txt: проект CMake для Laba3; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable(Laba3_FOR "main.c")
target_link_libraries(Laba3_FOR Task1Laba3lib)



add_executable(Laba3_WHILE "main.c")
target_link_libraries(Laba3_WHILE Task2Laba3lib)



add_executable(Laba3_DO_WHILE "main.c")
target_link_libraries(Laba3_DO_WHILE Task3Laba3lib)
