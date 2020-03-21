#include <stdio.h>
int main(void) {
    char string[] = {'H','A','S','N','A','I','N'};
    printf("Greetings %s",string);

    char name[20];
    printf("\nEnter your name: ");
    scanf("%s",name);
    printf("\nGreetings %s\n",name);
}