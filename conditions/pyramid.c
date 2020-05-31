#include <stdio.h>

int main(void)
{
    int height = 8;

    for (int i = 1; i < (height + 1); i++)  { 

        for (int k = i; k < height; k++){     
            printf(" ");
        }
        for (int j = 0; j < i; j++) 
        { 
            printf("#");
        }
        printf("  ");
        for (int l = 0; l <i; l++)
        {
            printf("#");
        }

        printf("\n");                 
    }
}
