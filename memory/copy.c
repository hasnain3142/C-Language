#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
    char *a = get_string("Enter: ");
    // char *b = a;

    // b[0] = toupper(b[0]);

    // printf("%s\n",a);
    // printf("%s\n",b);
    int len = strlen(a);
    char *b = malloc(len + 1);

    // for (int i = 0; i <= len; i++)
    // {
    //     b[i] = a[i];
    // }
    strcpy(b,a);

    b[0] = toupper(b[0]);
    printf("%s\n",a);
    printf("%s\n",b);

    free(b);
}