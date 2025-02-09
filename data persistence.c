#include "expense.h"
#include <stdio.h>

void save_expenses() {
    FILE *file = fopen("expenses.dat", "wb");
    if (file == NULL) {
        perror("Error opening file for saving");
        return;
    }
    fwrite(expenses, sizeof(Expense), num_expenses, file);
    fclose(file);
}

void load_expenses() {
    FILE *file = fopen("expenses.dat", "rb");
    if (file == NULL) {
        return; // File doesn't exist
    }
    num_expenses = fread(expenses, sizeof(Expense), MAX_EXPENSES, file);
    if (ferror(file)) {
        perror("Error reading file");
    }
    fclose(file);
}