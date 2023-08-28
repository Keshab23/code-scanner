#include <stdio.h>

#define MAX 24

int main()
{
    char buf[MAX];
    printf("Enter your name: \n");
    gets(buf);
    fgets(buf, MAX, stdin);
    printf("%s", buf);

    char str[5];
    sprintf(str, "%s", "Buffer Overflow");
    printf("%s", str);

    return 0;
}
