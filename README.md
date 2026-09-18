<div align="center">

# 📊 DSA Lab 02 — Static & Dynamic Arrays

**Data Structures and Algorithms · Pointers · Dynamic Memory Allocation**

![C++](https://img.shields.io/badge/language-C%2B%2B11-blue?logo=cplusplus)
![Status](https://img.shields.io/badge/status-completed-brightgreen)
![License](https://img.shields.io/badge/license-Educational-lightgrey)

</div>

---

## 👤 Author

| | |
|---|---|
| **Name** | Muhammad Rayan Zulfiqar |
| **Registration Number** | 543021 |
| **Section** | BSCS 15 D |

---

## 📖 Overview

This repository contains solutions for **Data Structures and Algorithms — Lab 02**.

The lab focuses on:

- 🧮 Static and dynamic arrays
- ➡️ Pointer notation and pointer arithmetic
- 🧠 Dynamic memory allocation using `new[]`
- 🗑️ Memory deallocation using `delete[]`
- 🔲 2D arrays and row pointers
- 🧩 Dynamic 2D arrays using `int**`
- 📈 Expanding dynamic arrays
- ⚠️ Common memory errors — out-of-bounds access, dangling pointers, memory leaks

---

## 🗂️ Tasks

### Task 1 — Static 1D Array

A shop records sales for five days using:

```cpp
int sales[5];
int* p = sales;
```

**Covers:**
- Reading values using pointer notation
- Displaying the values
- Calculating the total
- Updating the third day's value through a pointer
- Understanding `p`, `&p`, `*p`, and `*(p + 2)`

---

### Task 2 — Dynamic 1D Array

A teacher stores student marks using a dynamically allocated array.

```cpp
int* marks = new int[n];
```

**Covers:**
- Runtime array size
- Reading marks using pointer notation
- Calculating total and average
- Counting passing marks
- Releasing memory using `delete[]`

---

### Task 3 — Static 2D Array

Sales for two branches across three days are stored using:

```cpp
int sales[2][3];
int (*rowPtr)[3] = sales;
```

**Covers:**
- Reading and displaying a 2D array
- Calculating branch totals
- Calculating day totals
- Understanding row pointers
- Understanding why `int**` is not correct for a built-in 2D array

---

### Task 4 — Dynamic 2D Array

Student marks are stored using a dynamically allocated 2D array.

```cpp
int** marks = new int*[rows];

for (int r = 0; r < rows; r++)
{
    marks[r] = new int[cols];
}
```

**Covers:**
- Runtime rows and columns
- Reading and displaying the matrix
- Calculating each student's total
- Finding the student with the highest total
- Handling ties by selecting the first student
- Correctly releasing every allocated row

---

### Task 5 — Expanding a Dynamic Array

Demonstrates manual resizing of a dynamic array.

**Steps:**

1. Allocate an array of size `n`
2. Allocate a new array of size `n + 1`
3. Copy the original values using pointer notation
4. Store the new value
5. Delete the old array
6. Point the original pointer to the new array
7. Update the size
8. Delete the final block

---

### Task 6 — Fixing Memory Errors

Identifies and fixes common dynamic memory errors.

**Original code contains:**
- ❌ An out-of-bounds loop condition
- ❌ Incorrect use of `delete` instead of `delete[]`
- ❌ Accessing memory after deletion

**Corrected program:**
- ✅ Uses `i < n`
- ✅ Uses `delete[]`
- ✅ Displays values before deleting memory
- ✅ Sets the pointer to `nullptr`

---

## 📁 Repository Structure

```text
DSA-Lab-02/
│
├── task1.cpp
├── task2.cpp
├── task3.cpp
├── task4.cpp
├── task5.cpp
├── task6.cpp
└── README.md
```

---

## ⚙️ Compilation

Compile any task using:

```bash
g++ task1.cpp -o task1
```

Run it using:

```bash
./task1
```

On Windows:

```bash
task1.exe
```

---

## ✅ Requirements

- C++11 or later
- GCC, Clang, Visual Studio, or another standard C++ compiler
- Raw arrays and pointers
- `new[]` and `delete[]`

**The lab does *not* use:**

- `vector`
- Variable-length arrays
- Library sorting functions

---

## 🔑 Key Concepts

```cpp
int* p = array;

int* arr = new int[n];

int (*rowPtr)[3] = matrix;

int** matrix = new int*[rows];

delete[] arr;
```

For a dynamic 2D array:

```cpp
for (int r = 0; r < rows; r++)
{
    delete[] matrix[r];
}

delete[] matrix;
matrix = nullptr;
```

---

## 🎓 Course Information

| | |
|---|---|
| **Course** | Data Structures and Algorithms |
| **Lab** | Lab 02 |
| **Topic** | Static and Dynamic Arrays, Pointers, and Dynamic Memory Allocation |
| **Language** | C++ |

---


<div align="center">

*This repository is for educational purposes and contains my own implementation of the lab tasks.*

</div>
