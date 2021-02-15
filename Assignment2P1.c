//Write a program to calculate sum of individual digits of a given number.
#include<stdio.h>
#include<conio.h>

int sum(int n)      //return the sum of individual digits of the passed number n
{
    int s=0;
    while(n>0)
    {
        int lastDigit=n%10;     //retrives the last digit of n
        s+=lastDigit;       //adds ladt digit to the previous sum 
        n=n/10;     //removes the last digit from thr number
    }
    return s;
}
void main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);        //takes inout from the user and stores it in n
    printf("The sum of individual digits of the number %d is %d ", n, sum(n));      //prints the sum using the function sum
}