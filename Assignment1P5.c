//Write a program to check equivalence of two number’s using conditional operator.

#include<stdio.h>
#include<conio.h>

void main()
{
    printf("Enetr the first number\n");     
    int a;
    scanf("%d", &a);        //takes the first number as input from the user and stores it in a
    printf("Enter the second Number\n");
    int b;
    scanf("%d", &b);        //takes the second number as input from the user and stores it in b
    a==b?printf("The entered numbers are equal"):printf("The entered numbers are not equal");       //uses the conditional operator to check if the numbers are equal or not, and print the same
}