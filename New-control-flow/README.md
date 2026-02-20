# Functions - Modular Collection Manager

This project is a refactored version of the Collection Operations Challenge, now implemented using a modular functional approach.

## 📝 Project Overview
In this version, the previous logic from Section 9 was completely reorganized into separate, specialized functions. This makes the code more readable, maintainable, and reusable.

### Key Improvements:
- **Function Prototypes**: Declared at the top to give a clear overview of the program's capabilities.
- **Pass by Reference**: Using `vector<int>&` to avoid expensive copies of data.
- **Const Correctness**: Using `const vector<int>&` for functions that only need to read data, ensuring safety.
- **Input Normalization**: Centralized logic in `get_choice()` using `toupper()`.

## 🎯 Learning Objectives
* **Abstraction**: Hiding the implementation details of each operation behind a function call.
* **Refactoring**: Converting a monolithic `main` function into smaller, manageable pieces.
* **Switch Statements**: Using `switch` for cleaner menu logic compared to long `if-else` chains.
- **Data Integrity**: Using `static_cast<double>` for precise average calculations.

## 🛠 Function Structure
| Function             | Purpose                                             |
|:---------------------|:----------------------------------------------------|
| `display_menu()`     | Prints the UI to the console.                       |
| `get_choice()`       | Handles and sanitizes user input.                   |
| `menu_logic()`       | Orchestrates which function to call based on input. |
| `print_numbers()`    | Iterates and displays vector elements.              |
| `add_number()`       | Modifies the vector by adding a new integer.        |
| `mean_numbers()`     | Calculates the average value.                       |
| `smallest/largest()` | Custom algorithms to find extrema.                  |



## 💻 Technical Snippet: Const Reference
```cpp
// Why this is better:
void print_numbers(const vector<int> &numbers) {
    // 'const' prevents accidental modification
    // '&' avoids copying the entire vector into memory
}
```

## 🛠 Setup and Run

Ensure you have a C++ compiler installed (e.g., GCC, Clang, or MSVC).

Compile the file:

`g++ main.cpp -o New_control_flow `

Run the executable:

`./New_control_flow `