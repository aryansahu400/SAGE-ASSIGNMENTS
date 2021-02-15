//Write a program to calculate factorial using recursion.

#include<stdio.h>
#include<conio.h>

typedef long long ll;       //long long is defined as ll as factorials can be very big numbers

ll factorialFunction(ll factorial)      //a recursive function which returns factorial of current-1
{
    if(factorial>1)
    {
        return factorial*factorialFunction(factorial-1);
    }else{      
        return 1;       //if value of factorial becomes 1, 1 is returned and recursion is stopped
    }
}

void main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("%d! = %lld",number, factorialFunction(number));     //The function is called to get the factorial of the number entered
}