# Expense Tracker (C Project)

This is a simple Expense Tracker application written in C. It allows users to add, list, delete expenses, and generate reports.  Expenses are categorized, and the application provides summary and detailed reports. Data is persisted to a file.

## Features

*   Add expenses with description, amount, and category.
*   List all expenses.
*   Delete expenses by ID.
*   Generate summary report (total expenses, expenses by category).
*   Generate detailed report (list of all expenses).
*   Save and load expenses from a file (`expenses.dat`).

## Build Instructions (using GCC)

1.  Save all `.c` and `.h` files in the same directory.
2.  Open a terminal or command prompt in that directory.
3.  Compile:
    ```bash
    gcc main.c expense_management.c expense_report.c data_persistence.c -o expense_tracker
    ```
4.  Run:
    ```bash
    ./expense_tracker
    ```

## Usage

1.  Run the executable (`./expense_tracker`).
2.  Follow the menu prompts to interact with the application.

## File Format

Expenses are stored in a binary file named `expenses.dat`.  The file contains an array of `Expense` structs.

## Code Structure

*   `expense.h`: Defines the `Expense` struct.
*   `expense_management.c`: Implements functions to manage expenses (add, list, delete, etc.).
*   `expense_report.c`: Implements functions to generate reports.
*   `data_persistence.c`: Handles saving and loading expenses to/from the file.
*   `main.c`: Contains the `main` function and handles user interaction.

## Future Improvements

*   Implement search functionality.
*   Add more report options (e.g., expenses by date range).
*   Improve error handling and input validation.
*   Consider using a more robust data storage solution (e.g., a database).
