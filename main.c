#include <stdio.h>

int main(void)
{
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
    return 0;
}
