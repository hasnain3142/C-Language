#include <stdio.h>
int fact(int num);

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d\n",fact(n));
}

int fact(int num)
{
    if (num == 1)
    {
        return 1;
    }

    return num*fact(num-1);
}