//Write a program to display name of days in a week using switch case.
#include<stdio.h>
#include<conio.h>

void main()
{
    int dayNumber;
    printf("Enter the day number: ");
    scanf("%d", &dayNumber);     //dayNumber stores the value user provided
    switch (dayNumber)      
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;   
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("Invalid Input!");
        break;
    }
}