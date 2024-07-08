#include <stdio.h>

int main(void)
{
    //create an inverted pyrmaid

    //const int n=20;
    const int n=20; //defines the number of rows
    for (int i=1;i<=n;i++)
    {
        //form a function to print empty spaces
        for(int j=1;j<=(n-i);j++)
        {
            printf(" ");

        }

        //form another function to print *

        for(int j=1; j<=(2*i-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }





    for (int i =1;i<=n;i++)
    {
        //loop to create spaces
        for (int j=1;j<(2*i-i);j++)
        {
            printf(" ");
        }

        //a loop to print the * after the spaces.

        for(int j=1; j<(2*n-2*i);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

