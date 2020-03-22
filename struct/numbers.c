#include <stdio.h>
int main(void) 
{
    int numbers[6] = {1,5,12,14,72,110};
    
    for (int i = 0; i < 6; i++)
    {
        if (numbers[i] == 50)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}