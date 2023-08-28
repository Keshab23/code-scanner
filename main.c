#include <stdio.h>

int main()
{
    char buf[24];
    printf("Enter your name: \n");
    gets(buf);
    printf("%s", buf);
    return 0;
}
