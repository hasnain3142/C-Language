#include <stdio.h>
int main(void) {
    // char string[] = {'H','A','S','N','A','I','N'};
    // printf("Greetings %s",string);

    // char name[20];
    // printf("\nEnter your name: ");
    // scanf("%s",name);
    // printf("\nGreetings %s\n",name);
    char *s = "HASNAIN";
    printf("%s\n",s);
    printf("%p\n",s);
    printf("%p\n",&s[0]);
    printf("%p\n",&s[1]);
    printf("%p\n",&s[2]);

    printf("%c\n",*s);
    for (int i = 0; i < 7; i++)
    {
        printf("%c",*(s+i));
    }
    printf("\n");
    
}