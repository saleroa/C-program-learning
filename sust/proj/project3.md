# Project 3: Matrix Structure and Multiplication in C

**You can only use C, nor C++, in the project.** The project is an improvement of Project 2, but only `float` matrix structure is needed to implement.

## Requirements

1. The programming language can only be C, not C++. Please save your source code into `*.c` files, and compile them using a C compiler such as gcc (not g++). Try to use Makefile or CMake to manage your source code.

1. Design a `struct` for matrices, and the `struct` should contain the data of a matrix, the number of columns, the number of rows, etc. 

1. Implement some functions to 
    * create a matrix
    * delete a matrix
    * copy a matrix (copy the data from a matrix to another)
    * multiply two matrices


1. When you run the program as follows, it will output the result into an output file such as `out32.txt`. The data files are the same with those in Project 2.

    ```bash
    $./matmul mat-A-32.txt mat-B-32.txt out32.txt
    ```
    ```bash
    $./matmul mat-A-256.txt mat-B-256.txt out256.txt
    ```
    ```bash
    $./matmul mat-A-2048.txt mat-B-2048.txt out2048.txt
    ```

    

