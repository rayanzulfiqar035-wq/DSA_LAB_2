DSA Lab 02 — Static & Dynamic Arrays, Pointers, and Dynamic Memory Allocation

Overview

This repository contains solutions for Data Structures and Algorithms Lab 02.
The lab focuses on working with 1D and 2D arrays, pointers, dynamic memory allocation, pointer arithmetic, and safe memory management in C++.

Learning Objectives

By completing this lab, the following concepts are practiced:

Fixed-size and dynamic arrays

Pointer notation and pointer arithmetic

Dynamic memory allocation using new[]

Memory deallocation using delete[]

2D arrays and row pointers

Dynamic 2D arrays using int**

Expanding dynamic arrays by allocating and copying

Identifying memory errors such as:

Out-of-bounds access

Dangling pointers

Memory leaks

Lab Tasks

Task 1 — Static 1D Array and Pointer Access

A shop records sales for five days using:

int sales[5];
int* p = sales;

The program:

Reads five non-negative sales values using pointer notation

Displays the values

Calculates the total sales

Updates the third day's sales through the pointer

Demonstrates pointer expressions such as p, &p, *p, and *(p + 2)

Task 2 — Dynamic 1D Array

A teacher stores marks for a runtime-defined number of students.

The program:

Reads and validates n

Allocates memory using:

int* marks = new int[n];

Reads marks using pointer notation

Calculates total and average

Counts students with marks greater than or equal to 50

Releases memory using:

delete[] marks;
marks = nullptr;

Task 3 — Static 2D Array and Row Pointer

Sales for two branches across three days are stored using:

int sales[2][3];
int (*rowPtr)[3] = sales;

The program:

Reads and displays the 2D array using pointer notation

Calculates totals for each branch

Calculates totals for each day

Demonstrates the difference between:

int*

int (*)[3]

int**

Task 4 — Dynamic 2D Array

Marks for students and subjects are stored in a dynamically allocated matrix.

Memory is allocated using:

int** marks = new int*[rows];

for (int r = 0; r < rows; r++)
{
    marks[r] = new int[cols];
}

The program:

Reads and displays student marks

Calculates each student's total

Finds the student with the highest total

Keeps the first student in case of a tie

Correctly releases every allocated row and then the row-pointer array

Task 5 — Expanding a Dynamic Array

This task demonstrates how to manually resize a dynamic array.

The program:

Allocates an array of size n

Allocates a second array of size n + 1

Copies the original values

Stores one additional value

Deletes the old array

Redirects the original pointer to the new block

Releases the final block correctly

This demonstrates that changing the value of n alone does not increase the capacity of an already allocated array.

Task 6 — Debugging Dynamic Memory

This task fixes common dynamic-memory errors.

The original code contains three major problems:

Out-of-bounds access caused by i <= n

Using delete instead of delete[]

Accessing memory after it has been deleted

The corrected program:

Uses valid array bounds

Displays all three entered integers

Uses delete[]

Sets the pointer to nullptr

Example input:

4 5 6

Expected output:

4 5 6

Repository Structure

DSA-Lab-02/
│
├── task1.cpp
├── task2.cpp
├── task3.cpp
├── task4.cpp
├── task5.cpp
├── task6.cpp
└── README.md

Compilation

Each task is written as an independent C++ program.

Compile a task using:

g++ task1.cpp -o task1

Run it with:

./task1

On Windows:

task1.exe

Replace task1.cpp with the required task file.

Requirements

C++11 or later

Any standard C++ compiler such as:

GCC / G++

Clang

Visual Studio C++

The lab uses raw arrays, pointers, new[], and delete[].
vector, variable-length arrays, and library sorting functions are not used.

Key Concepts

// Pointer to first element of a 1D array
int* p = array;

// Dynamic 1D array
int* arr = new int[n];

// Pointer to a row of three integers
int (*rowPtr)[3] = matrix;

// Dynamic 2D array
int** matrix = new int*[rows];

// Release a dynamic 1D array
delete[] arr;

// Release a dynamic 2D array
for (int r = 0; r < rows; r++)
    delete[] matrix[r];

delete[] matrix;

Course Information

Course: Data Structures and Algorithms
Lab: Lab 02
Topic: Static and Dynamic Arrays, Pointers, and Dynamic Memory Allocation
Language: C++

Author

Name: Your Name
Registration Number: Your Registration Number
Section: Your Section
