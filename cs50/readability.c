#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
    string text = get_string("Text: ");

    int letters = 0;
    int words = 1;
    int sentences = 0;
    int length = strlen(text);
    for (int i=0; i<length ;i++)
    {
        char p = text[i];
        if ((p >= 'A' && p <='Z') || (p >= 'a' && p <= 'z'))
        {
            letters++;
        }
        else{
            if (p == ' ')
            {
                words++;
            }
            else if (p == '.' || p == '?' || p == '!')
            {
                sentences++;
            }
        }
    }
    float L = ((letters/(float)words)*100);
    float S = ((sentences/(float)words)*100);
    int index = round((0.0588 * L) - (0.296 * S) - 15.8);
    printf("Index: %d\n",index);
    printf("%d letter(s)\n%d word(s)\n%d sentence(s)\n",letters,words,sentences);
    if (index<1)
    {
        printf("Before Grade 1\n");
    }
    else if (1<=index && index<16)
    {
        printf("Grade %d\n",index);
    }
    else {
        printf("Grade 16+\n");
    }
}









