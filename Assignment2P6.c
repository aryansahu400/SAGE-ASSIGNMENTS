//Write a program to count no. of positive number, negative numbers and zeros in the 1-D array.

#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    printf("Enter the siz eof the array: ");
    scanf("%d", &n);
    int arr[n];     //an array of size n is created
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);       //array is filled with elements
    }
    int countZero=0, countPos=0, countNeg=0;        //all the counts are initialzed to 0
    for(int i=0;i<n;i++)        //itrates throughout the array and counts are incremented
    {
        if(arr[i]<0)
        {
            countNeg++;     
        }else if(arr[i]==0)
        {
            countZero++;
        }else{
            countPos++;
        }
    }

    printf("Number of positive integers = %d\nNumber of Zeros = %d\nNumber of negative integers = %d",countPos,countZero,countNeg);     //results are printed
}