#include <stdio.h>

typedef char *string;
int main(void)
{
    int n = 110;
    
    printf("%i\n",n);
    printf("%p\n",&n);
    printf("%i\n",*&n);

    int *p = &n;
    printf("%p\n",p);
    printf("%i\n",*p);

    char c = 'A';
    
    printf("%c\n",c);
    printf("%p\n",&c);
    printf("%c\n",*&c);

    char *s = &c;
    printf("%p\n",s);
    printf("%c\n",*s);
}