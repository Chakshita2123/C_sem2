#include <stdio.h>
#include <string.h>
int main()
{
    char src[]="Welcome, Hello World";
    char dest[20];
    strncpy(dest,src,4);
    printf("%s",dest);
    return 0;
}