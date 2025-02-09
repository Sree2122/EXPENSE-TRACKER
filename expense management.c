#include "expense.h"
#include <stdlib.h>

#define MAX_EXPENSES 100

Expense expenses[MAX_EXPENSES];
int num_expenses = 0;

void add_expense(int id, const char *description, float amount, const char *category);
void list_expenses();
void delete_expense(int id);
float calculate_total_expenses();
void save_expenses();
void load_expenses();

int find_expense_index(int id); // Helper function