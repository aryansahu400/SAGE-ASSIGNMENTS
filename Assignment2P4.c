//Write a program to perform matrix addition.

#include<stdio.h>
#include<conio.h>

void main()
{
    printf("Enter the number of rows followed by the nummber of columbs: ");
    int n, m;
    scanf("%d%d",&n, &m);       
    int a[n][m], b[n][m], c[n][m];

    printf("Enter the elements of the first matrix: \n");       //elemets of the first matrix are stored in 2-d array a
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the elements of the second matrix: \n");      //elemets of the second matrix are stored in 2-d array b
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    //Addition alogrithm
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    //printing the resultant matrix
    printf("The resultant matrix is: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

}