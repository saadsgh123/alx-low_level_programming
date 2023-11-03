cmake_minimum_required(VERSION 3.26)
project(0x15_file_io C)

set(CMAKE_C_STANDARD 99)

add_executable(0x15_file_io main.c
        0-read_textfile.c
        main.h
        _putchar.c
        1-create_file.c
        2-append_text_to_file.c
        3-cp.c)
