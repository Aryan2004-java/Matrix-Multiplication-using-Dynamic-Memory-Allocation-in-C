# Matrix-Multiplication-using-Dynamic-Memory-Allocation-in-C
This project implements Matrix Multiplication in C using dynamic memory allocation
The program allows the user to input two matrices, performs multiplication if possible, and displays the result. It also ensures proper memory management by freeing allocated memory after execution.

Features
This program provides the following functionalities:

Dynamic Memory Allocation – Matrices are allocated memory at runtime.
Matrix Multiplication – Supports multiplication of compatible matrices.
Matrix Display – Prints the resulting matrix.
Memory Deallocation – Frees allocated memory after execution.
Menu-Driven Approach
The program prompts the user to input matrix dimensions and elements, performs multiplication, and displays the result.

Functions and Their Purpose
Function	Description
multmat(firstmat, rows1, cols1, secmat, rows2, cols2, resmat)	Multiplies two matrices if dimensions are compatible.
printmat(mat, rows, cols)	Prints a matrix.
freemat(mat, rows)	Frees dynamically allocated memory.
Edge Cases Handled
Incompatible Matrices: Displays an error if multiplication is not possible.
Memory Allocation Failure: Ensures graceful handling of memory allocation issues.
Possible Enhancements
Implement multi-threaded matrix multiplication for faster computation.
Add support for floating-point matrices.
Improve error handling for invalid user input.
