cmake_minimum_required(VERSION 3.26)
project(0x13_more_singly_linked_lists C)

set(CMAKE_C_STANDARD 99)

add_executable(0x13_more_singly_linked_lists main.c
        lists.h
        0-print_listint.c
        1-listint_len.c
        2-add_nodeint.c
        3-add_nodeint_end.c
        4-free_listint.c
        5-free_listint2.c
        6-pop_listint.c
        7-get_nodeint.c
        8-sum_listint.c
        9-insert_nodeint.c
        10-delete_nodeint.c
        100-reverse_listint.c
        101-print_listint_safe.c
)
