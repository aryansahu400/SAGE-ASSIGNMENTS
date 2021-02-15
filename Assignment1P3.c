//Write a program to read radius value from the keyboard and calculate the area of circle and print the result.

#include<stdio.h>
#include<conio.h>

float area(int radius)      //this function returns The area of the circle
{
    return 2*3.14*radius;
}
int main()
{
    int radius;
    printf("Enter the radius of the circle : ");
    scanf("%d", &radius);       //take sinput from user and stores it in radius
    printf("The Area of the circle is %.2f Units", area(radius));       //prints the value returned by the area function
    return 0;
}