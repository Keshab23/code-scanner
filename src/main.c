#include <stdio.h>

#define MAX 24

int main()
{
    char buf[MAX];
    printf("Enter your name: \n");
    gets(buf);
    fgets(buf, MAX, stdin);
    printf("%s", buf);
    return 0;
}
