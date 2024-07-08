#include <stdio.h>

int main(void)
{
    //create an inverted pyrmaid

    int n=20;
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
