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

union unions // allocs memory for the largest data type
{
    /* data */
    int x;  // allocated 4 bytes
    char c; // reference variables
    short s;
};

int main()
{
    struct employee employees[MAX_EMPLOYEES];
    union unions u;
    u.x = 0x745254325235; // allocated largest variable
    printf("%hx (half) %hhx (half of half, quarter)", u.s, u.c);
}