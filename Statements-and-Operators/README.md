# Statements and Operators - Change Counter Challenge

This project is a C++ application that calculates the minimum number of US coins (dollars, quarters, dimes, nickels, and pennies) needed to make change for a given number of cents.

## 📝 Problem Description
The program takes an integer input representing an amount in cents and breaks it down into:
* **Dollars** (100 cents)
* **Quarters** (25 cents)
* **Dimes** (10 cents)
* **Nickels** (5 cents)
* **Pennies** (1 cent)

## 🎯 Learning Objectives
* **Integer Division (`/`)**: Understanding how C++ performs floor division with integers.
* **Modulo Operator (`%`)**: Using the remainder operator to update the balance efficiently.
* **Arithmetic Logic**: Comparing two different mathematical approaches to solve the same problem.
* **Constants**: Using `const int` for fixed currency values.

## 💡 Solutions Compared

### 1. Traditional Subtraction Approach
Calculates the count by dividing and then manually subtracting the value from the total balance.
```cpp
dollars = change_amount / dollar_value;
balance = change_amount - (dollars * dollar_value);
```

### 2. Modulo Operator Approach (Optimized)

Uses the modulo operator to find the remainder in a single step, making the code much cleaner.
C++
```cpp
dollars = change_amount / dollar_value;
balance = change_amount % dollar_value;
```

## 🛠 Setup and Run

Ensure you have a C++ compiler installed (e.g., GCC, Clang, or MSVC).

Compile the file:

`g++ main.cpp -o change`

Run the executable:

`./change`