#include <stdio.h>
#include <string.h>

int main(int argc, int argv[])
{
    if (argc == 1) {
        printf("Missing command line argument\n");
        return 1;
    }
    
    for (int i = 1; i < argc; i++)
    {
        printf("%d\n", argv[i]);
    }

}