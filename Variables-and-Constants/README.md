# Section 6: Variables and Constants - Challenge

This project is a solution to the "Frank's Carpet Cleaning Service" challenge. It focuses on using variables, constants, and basic arithmetic in C++.

## 📋 Problem Description
Frank's Carpet Cleaning Service needs a program to provide estimates for their customers.
* **Charges:**
    * $25 per small room.
    * $35 per large room.
* **Sales Tax:** 6%
* **Estimate Validity:** 30 days

The program prompts the user for the number of small and large rooms, calculates the cost, adds tax, and displays a formatted estimate.

## 🎯 Learning Objectives
* **Constants:** Using `const` for fixed values (prices, tax rate, expiry days).
* **Variables:** Using `int` for room counts and `double` for monetary calculations.
* **Arithmetic Expressions:** Calculating totals and taxes within `std::cout` statements.
* **Input/Output:** Reading multiple user inputs and formatting console output.

## 💻 Code Logic Preview
```cpp
const double price_per_small_room {25.0};
const double price_per_large_room {35.0};
const double sales_tax {0.06};

// Total Cost calculation:
double cost = (price_per_small_room * small_rooms) + (price_per_large_room * large_rooms);
double tax = cost * sales_tax;
double total_estimate = cost + tax;
```

## 🛠 Setup and Run

Ensure you have a C++ compiler installed (e.g., GCC, Clang, or MSVC).

Compile the file:

`g++ main.cpp -o carpet_cleaning`

Run the executable:

`./carpet_cleaning`