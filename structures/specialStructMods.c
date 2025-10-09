#include <stdio.h>
#include <stdbool.h>

#define MAX_EMPLOYEES 32

__attribute__((__packed__)) struct employee
{
    /* data */
    int id;
    float income;
    bool isManager; // alloc memory of employee != sum(int, float, bool) but more due to os optimizations
};

int main()
{
    struct employee employees[MAX_EMPLOYEES];

    printf("%d\n", sizeof(struct employee));
}