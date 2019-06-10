add_library(Task8Lib STATIC "")

target_sources(Task8Lib PRIVATE "../Task7/Task7_func.c")

add_executable(Task8 "")

Target_sources(Task8 PRIVATE "../Task7/Task7_main.c")

Target_link_libraries(Task8 Task8Lib)

Target_include_directories(Task8 PRIVATE "../Task7")