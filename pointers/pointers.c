#include <stdio.h>
#include <stdbool.h>

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
    int x = 3;    // makes room in memory for x
    int *pX = &x; // address of room for x

    printf("%d\n", *pX);
    printf("%p\n", pX);

    struct employee Abhyduaya;

    // setting values manually
    Abhyduaya.id = 0;
    Abhyduaya.income = 0;
    Abhyduaya.staff = false;
    printf("%d %d\n", Abhyduaya.id, Abhyduaya.income);

    struct employee coolAbhyudaya;

    // using functions
    initialize_employee(&coolAbhyudaya);
    printf("%d %d\n", coolAbhyudaya.id, coolAbhyudaya.income);
}