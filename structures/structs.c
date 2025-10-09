#include <stdio.h>
#include <stdbool.h>

#define MAX_EMPLOYEES 32

struct employee
{
    /* data */
    int id;
    float income;
    bool isManager;
};

int main()
{
    struct employee employees[MAX_EMPLOYEES];

    int i = 0;
    for (int i = 0; i < MAX_EMPLOYEES; i++)
    {
        employees[i].id = i + 1; // optional: assign IDs
        employees[i].income = i * 10000;
        employees[i].isManager = (i == 31) ? true : false;
    }

    // Print array
    printf("ID\tIncome\t\tManager\n");
    printf("-----------------------------\n");
    for (int i = 0; i < MAX_EMPLOYEES; i++)
    {
        printf("%d\t%.2f\t\t%s\n",
               employees[i].id,
               employees[i].income,
               employees[i].isManager ? "Yes" : "No");
    }
    return 0;
}