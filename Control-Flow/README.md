# Control Flow - Collection Operations Challenge

A comprehensive C++ menu-driven application that manages a dynamic list of integers.

## 📝 Project Overview
This program simulates a collection manager where users can interact with a list of numbers through a console-based menu. It demonstrates robust input handling and algorithmic logic without using built-in library functions like `std::min` or `std::max`.

### Available Features:
- **P (Print)**: Displays all elements in the list in a formatted style: `[ 1 2 3 ]`.
- **A (Add)**: Dynamically adds an integer to the collection.
- **M (Mean)**: Calculates the average of all numbers (with proper double casting).
- **S (Smallest)**: Finds the minimum value using a custom search loop.
- **L (Largest)**: Finds the maximum value using a custom search loop.
- **Q (Quit)**: Gracefully terminates the program.

## 🎯 Learning Objectives
* **Looping Structures**: Implementing a `do-while` loop for a persistent menu.
* **Selection Logic**: Using complex `if-else` chains to handle user commands.
* **Vector Manipulation**: Using `std::vector` for dynamic storage and `push_back()`.
* **Algorithmic Thinking**:
    - Calculating the mean while handling empty list edge cases.
    - Manually iterating through a collection to find extrema.
* **Input Normalization**: Handling both uppercase and lowercase character inputs.

## 🛠 Setup and Run

Ensure you have a C++ compiler installed (e.g., GCC, Clang, or MSVC).

Compile the file:

`g++ main.cpp -o control_Flow`

Run the executable:

`./Control_Flow`