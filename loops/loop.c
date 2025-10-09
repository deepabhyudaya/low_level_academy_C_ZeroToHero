#include <stdio.h>

#define MAX_IDS 32

int main()
{
    int ids[MAX_IDS] = {1, 2, 3, 4, 5};

    int i = 0;
    int scanElement = 0;
    for (i = 0; i < MAX_IDS; i++)
    {
        printf("Enter the element:\n");
        scanf("%d", &scanElement);
        ids[i] = scanElement;
        printf("%d: %d\n", i, ids[i]);
    }

    while (i < MAX_IDS)
    {
        printf("Enter the element:\n");
        scanf("%d", &scanElement);
        ids[i] = scanElement;
        printf("%d: %d\n", i, ids[i]);
    }

    do
    {
        printf("Enter the element:\n");
        scanf("%d", &scanElement);
        ids[i] = scanElement;
        printf("%d: %d\n", i, ids[i]);
    } while (i < MAX_IDS);

    return 0;
}