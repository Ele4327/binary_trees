cmake_minimum_required(VERSION 3.19)
project(binary_trees C)

set(CMAKE_C_STANDARD 99)

include_directories(binary_trees)

add_executable(binary_trees
        0-binary_tree_node.c
        1-binary_tree_insert_left.c
        1-main.c
        binary_tree_print.c
        )
