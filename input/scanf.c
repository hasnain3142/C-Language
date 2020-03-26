#include <stdio.h>

int main(void)
{
    //Input for an integer
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    //Input for a string
    char *str;
    printf("Enter your name: ");
    scanf("%s",str);
    printf("Hello, %s\n",str);
}