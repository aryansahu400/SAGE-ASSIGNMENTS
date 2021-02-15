//Write a program to search the given element by using linear search.

#include<stdio.h>
#include<conio.h>

void main()
{
    printf("Enter the size of array: ");
    int n;      
    scanf("%d", &n);        //Size of the arry is stored in n
    int arr[n];
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++)
    {
        scanf(("%d"), &arr[i]);     //elements are stored in the array
    }
    printf("Enter the element you want to find");
    int key;
    scanf("%d", &key);      //The element which is to be found is stored in key variable

    //linear serch algorithm
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            printf("%d is present at the %dth position of the array", key, i+1);        //found at the ith position
            break;
        }
        if(i==n-1)      //serch reached the last element but did not find the key
        {
            printf("%d is not present in the array", key);
        }
    }
    
}