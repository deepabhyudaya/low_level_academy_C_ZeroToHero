#include <stdio.h>

int main()
{
    int temp;
    printf("Enter the temperature: ");
    scanf("%d", &temp);

    if (temp <= 0)
    {
        printf("Freezing");
    }
    else if (temp > 0 && temp < 100)
    {
        printf("Heating");
    }
    else
    {
        printf("Boiling");
    }

    return 0;
}
