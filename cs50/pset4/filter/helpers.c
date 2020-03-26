#include "helpers.h"
#include <math.h>     //Imported maths library for round function

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    //Iterating over rows
    for (int h = 0; h < height; h++)
    {
        //Iterating over columns
        for (int w = 0; w < width; w++)
        {
            int r = image[h][w].rgbtRed;
            int g = image[h][w].rgbtGreen;
            int b = image[h][w].rgbtBlue;
            //Calculated average of values of red green blue
            int a = round((r + g + b) / (float)3);

            image[h][w].rgbtRed = a;
            image[h][w].rgbtGreen = a;
            image[h][w].rgbtBlue = a;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    //Iterating over rows
    for (int h = 0; h < height; h++)
    {
        //Iterating over columns
        for (int w = 0; w < width; w++)
        {
            int r = image[h][w].rgbtRed;
            int g = image[h][w].rgbtGreen;
            int b = image[h][w].rgbtBlue;

            //Calculating Sepia Red
            int sr = round(.393 * (float) r + .769 * (float) g + .189 * (float) b);
            //Calculating Sepia Green
            int sg = round(.349 * (float) r + .686 * (float) g + .168 * (float) b);
            //Calculating Sepia Blue
            int sb = round(.272 * (float) r + .534 * (float) g + .131 * (float) b);

            //If value exceeds greater than 8bits
            if (sr > 255)
            {
                sr = 255;
            }
            if (sg > 255)
            {
                sg = 255;
            }
            if (sb > 255)
            {
                sb = 255;
            }

            image[h][w].rgbtRed = sr;
            image[h][w].rgbtGreen = sg;
            image[h][w].rgbtBlue = sb;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int h = 0; h < height; h++)
    {
        for (int w = 0; w < (width / 2); w++)
        {
            //Storing in temporay vaiable
            RGBTRIPLE tmp = image[h][w];
            //Swapping
            image[h][w] = image[h][width - 1 - w];
            //Swapping from temp
            image[h][width - 1 - w] = tmp;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    //Created a temp variable
    RGBTRIPLE tmp[height][width];
    //Copying from original struct to temp
    for (int h = 0; h < height; h++)
    {
        for (int w = 0; w < width; w++)
        {
            tmp[h][w] = image[h][w];
        }
    }

     //Iterating over rows
    for (int h = 0; h < height; h++)
    {
        //Iterating over columns
        for (int w = 0; w < width; w++)
        {
            int r = 0, g = 0, b = 0;
            //For Average
            float count = 0.0;

            for (int i = -1; i <= 1; i++)
            {
                for (int j = -1; j <= 1; j++)
                {
                    if (h + i != height && h + i != -1 && w + j != width && w + j != -1)
                    {
                        r += tmp[h + i][w + j].rgbtRed;
                        g += tmp[h + i][w + j].rgbtGreen;
                        b += tmp[h + i][w + j].rgbtBlue;

                        count++;
                    }
                }
            }

            image[h][w].rgbtRed = round(r / count);
            image[h][w].rgbtGreen = round(g / count);
            image[h][w].rgbtBlue = round(b / count);
        }
    }
    return;
}
