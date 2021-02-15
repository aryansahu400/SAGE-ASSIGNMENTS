//Write a program to store 10 element in 1-d array and print sum of the array.

#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[10];
    printf("Enter the elements of the array : ");
    for(int i=0;i<10;i++)
    {
        scanf("%d", &arr[i]);       //elements are stored in the array arr[]
    }
    int sum=0;      //sum is initalised to 0
    for(int i=0;i<10;i++)
    {
        sum+=arr[i];        //sum is updated
    }

    printf("The sum of the array is: %d", sum);     //The value of sum is printed
}