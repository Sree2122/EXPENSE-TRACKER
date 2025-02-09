#ifndef EXPENSE_H
#define EXPENSE_H

#include <stdio.h>
#include <string.h>

#define MAX_DESCRIPTION_LENGTH 50

typedef struct {
    int id;
    char description[MAX_DESCRIPTION_LENGTH];
    float amount;
    char category[20]; // e.g., "Food", "Transportation", "Entertainment"
} Expense;

#endif