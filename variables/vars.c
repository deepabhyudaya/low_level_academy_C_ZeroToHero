#include <stdio.h>

// global scope
int g_numPersons = 0;

void otherFunction()
{
    // local scope
    int personId = 1;
}

int main()
{
    int personId = 1;
    personId += 1;
    g_numPersons = 11;
    printf("%d", personId);
}