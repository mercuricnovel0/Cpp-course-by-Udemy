# Vectors and 2D Vectors - Challenge

This project demonstrates the behavior of dynamic arrays in C++, specifically focusing on `std::vector` and how data is handled when nested (2D vectors).

## 📝 The Experiment
The goal of this challenge was to observe how C++ manages memory when a vector is added to another vector.

### Steps taken:
1. Created two separate integer vectors (`vector1` and `vector2`).
2. Populated them with data using `push_back()`.
3. Created a 2D vector (`vector_2d`) and added both vectors to it.
4. Modified an element in the original `vector1`.
5. Inspected both `vector_2d` and `vector1` to see the results.

## 🎯 Key Learning Objectives
* **Dynamic Sizing**: Using `push_back()` to add elements without pre-defining the size.
* **Safe Access**: Utilizing the `.at()` method for bounds-checked access to elements.
* **Multi-dimensional Vectors**: Declaring and accessing a "vector of vectors" (`vector<vector<int>>`).
* **Deep Copying (Value Semantics)**: Understanding that when you `push_back` a vector into another, C++ creates a **copy** of the data.

## 🛠 Setup and Run

Ensure you have a C++ compiler installed (e.g., GCC, Clang, or MSVC).

Compile the file:

`g++ main.cpp -o vectors`

Run the executable:

`./vectors`