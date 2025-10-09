#include <stdio.h>

int main()
{
    char mystr[] = {'h', 'e', 'l', 'l', 'o', 0}; // vulnerability, must be null terminated
    printf("%s\n", mystr);
    char *myOtherStr = "hello";
    printf("%s", myOtherStr);

    strcpy(dest, src);     // pointers used
    strncpy(dest, src, n); // n bytes long
}