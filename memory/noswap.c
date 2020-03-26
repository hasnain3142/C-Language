#include <stdio.h>
void swap(int a, int b);

int main(void)
{
    int x = 1, y = 2;
    printf("x: %i and y: %i\n",x,y);
    swap(x,y);
    printf("x: %i and y: %i\n",x,y);
}

void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
    return;
}