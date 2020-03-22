#include <stdio.h>

int collatz(int n);

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("%d\n",collatz(num));
}
int collatz(int n) 
{
    if (n == 1)
    {
        return 1;
    }
    
    else if (n%2==0)
    {
        return 1 + collatz(n/2);
    }

    else
    {
        return 1 + collatz(3*n + 1);
    }
}