# Simple Library Management System

This is a basic C++ library management system that allows you to add, list, reserve, and borrow books, while tracking the library's budget and the total number of borrowed books.

## Features

- Add books to the library (with budget and capacity checks)
- List all available books
- Reserve a book
- Borrow a book (removes it from the library and reserved list)
- Track total number of borrowed books
- Manage library budget

## Project Structure

- [`Library.hpp`](Library.hpp): Library class declaration
- [`Library.cpp`](Library.cpp): Library class implementation
- [`main.cpp`](main.cpp): Example usage and entry point
- `.vscode/`: VS Code configuration files

## Build Instructions

You can build the project using g++:

```sh
g++ -o library main.cpp Library.cpp
```

Or use the provided VS Code tasks for building and debugging.

## Usage

Run the compiled executable:

```sh
./library
```

The program will demonstrate adding, listing, reserving, and borrowing books, and display the current budget and total borrowed books.

## Requirements

- C++ compiler (e.g., g++)
- [Optional] Visual Studio Code with C++ extensions for easier development

## License

This project is for educational purposes.
