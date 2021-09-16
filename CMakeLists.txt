cmake_minimum_required(VERSION 3.20)
project(SearchTreeAI)

set(CMAKE_CXX_STANDARD 20)

add_executable(SearchTreeAI main.cpp BinarySearchTree.cpp BinarySearchTree.h BinaryTreeAI.cpp BinaryTreeAI.h WorkerPrototype.cpp WorkerPrototype.h AIActions.cpp AIActions.h Brain.cpp Brain.h)
