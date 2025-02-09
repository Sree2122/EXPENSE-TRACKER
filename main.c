#include <stdio.h>
#include "expense.h"
#include "expense_report.h"
#include "data_persistence.h"

int main() {
    int choice;
    load_expenses();

    do {
        printf("\nExpense Tracker\n");
        printf("1. Add Expense\n");
        printf("2. List Expenses\n");
        printf("3. Delete Expense\n");
        printf("4. Generate Summary Report\n");
        printf("5. Generate Detailed Report\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int id;
                char description[MAX_DESCRIPTION_LENGTH];
                float amount;
                char category[20];

                printf("Enter expense ID: ");
                scanf("%d", &id);
                printf("Enter description: ");
                scanf(" %[^\n]s", description);
                printf("Enter amount: ");
                scanf("%f", &amount);
                printf("Enter category: ");
                scanf(" %[^\n]s", category);

                add_expense(id, description, amount, category);
                break;
            }
            case 2:
                list_expenses();
                break;
            case 3: {
                int id;
                printf("Enter expense ID to delete: ");
                scanf("%d", &id);
                delete_expense(id);
                break;
            }
            case 4:
                generate_summary_report();
                break;
            case 5:
                generate_detailed_report();
                break;
            case 0:
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 0);

    save_expenses();
    return 0;
}