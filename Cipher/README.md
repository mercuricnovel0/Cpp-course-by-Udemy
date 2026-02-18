# Section 10: Characters and Strings - Substitution Cipher

A C++ application that implements a classic Substitution Cipher to encrypt and decrypt secret messages.

## 📝 Project Overview
The program takes a raw text input from the user and "scrambles" it by replacing each character with a corresponding character from a randomized key. It then demonstrates the reverse process by decrypting the message back to its original form.



### How it works:
- **Encryption**: For every character in the message, the program finds its index in the `alphabet` string and replaces it with the character at the same index in the `key` string.
- **Decryption**: The process is reversed—the program finds the index in the `key` and maps it back to the `alphabet`.
- **Non-alphabetic characters**: Symbols not found in the defined alphabet (like numbers or certain punctuation) are left unchanged.

## 🎯 Learning Objectives
* **String Manipulation**: Working with `std::string` and methods like `.find()` and `.at()`.
* **Input Handling**: Using `getline(cin, var)` to capture strings with spaces.
* **Algorithm Logic**: Implementing a two-way mapping logic.
* **Edge Cases**: Handling characters that are not present in the cipher key (using `string::npos`).

## 💻 Technical Details
The core logic relies on the relationship between two mapped strings:
```cpp
string alphabet {"[ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
string key      {" [XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
```
By using size_t position = alphabet.find(c), we efficiently locate characters and swap them.

## 🛠 How to Build
To compile this specific file using g++, use:

`g++ main.cpp -o cipher`

`./cipher`