#include <stdio.h> // copy pastes the header file into this file

#define MAX_PPL 2025

#define DEBUG

int main()
{
#ifdef DEBUG // if its defined then run this
    printf("We are in debug mode: %s:%d", __FILE__, __LINE__);
#endif
    return 0;
}
