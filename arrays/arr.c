#include <stdio.h>

#define MAX_IDS 32 // pound max id size

int main()
{
    int id = 0; // allocates 4 bytes to the memory.
    int id_1, id_2 = 1;

    int ids[MAX_IDS] = {0, 2, 3, 0x41};
    printf("%d", ids[3]);
}