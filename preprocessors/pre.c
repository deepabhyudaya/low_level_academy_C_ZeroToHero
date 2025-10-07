#include <stdio.h>

#define MAX_PPL = 2025

#define DEBUG

int main()
{
#ifdef DEBUG
    printf("We are in debug mode: %s:%d", __FILE__, __LINE__);
#endif
    return 0;
}
