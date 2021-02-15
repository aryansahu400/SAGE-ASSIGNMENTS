/*Write a program to print following format.
                1 				*
                12				**
                123				***
                1234			****
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    printf("Enter the number: ");
    int n;
    scanf("%d",&n);

    //patter 1
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    printf("\n");
    //patter 2
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}