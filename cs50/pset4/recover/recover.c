#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //Checking for command-line argument
    if (argc != 2)
    {
        printf("Usage: ./recover image\n");
        return 1;
    }
    //Open input file
    FILE *file = fopen(argv[1],"r");

    if (file == NULL)
    {
        printf("File cannot be opened\n");
        return 1;
    }
    //Create a buffer space for storing file data
    unsigned char bytes[512];

    //Created a space for filename;
    char filename[8];

    //Created an output file
    FILE *img;

    //Initialized counter for tracking image number
    int count = 0;

    //A bool type integer to check if a jpeg file is already opened or not
    //0 for false, 1 for true
    int jpg = 0;

    //Reading the file from memory card
    //Iterating through every block of size 512
    while (fread(bytes, sizeof(bytes), 1, file))
    {
        if (bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff && (bytes[3] & 0xf0) == 0xe0)
        {
            if (jpg)
            {
                //A file is already opened
                //Close it.
                fclose(img);
                //Set jpg to 0
                jpg = 0;
            }
            //Make a new filename
            sprintf(filename, "%03i.jpg", count);
            //Open a new file for writing
            img = fopen(filename,"w");
            //Write blocks of buffer in this file
            fwrite(bytes, sizeof(bytes), 1, img);
            //Set jpg to 1, as file is now opened
            jpg = 1;
            //Increment image count
            count++;
        }
        //If the header file is not of a jpeg file
        else
        {   //If a jpeg file is already opened
            if (jpg)
            {
                fwrite(bytes, sizeof(bytes), 1, img);
            }
        }

    }

    //Close input file
    fclose(file);

    //Close output file
    fclose(img);

    return 0;

}
