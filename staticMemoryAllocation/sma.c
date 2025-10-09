#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> // for malloc and free

#define MAX_EMPLOYEES 3200

struct employee
{
    /* data */
    int id;
    int income;
    bool staff;
};

void initialize_employee(struct employee *e)
{
    e->id = 0;
    e->income = 0;
    e->staff = false;

    return;
}

int main()
{
    int NEEDED_IDS = 6;
    // struct employee employees[MAX_EMPLOYEES];
    // blowing stack, memory (3200 employees)

    struct employee *employees = malloc(sizeof(struct employee) * NEEDED_IDS); // controlled memory allocation
    if (employees == NULL)
    {
        printf("Allocator Failed\n");
        return -1; // error
    }

    initialize_employee(&employees[0]);
    printf("%d\n", employees[0].income);
    free(employees);
    employees = NULL;
}