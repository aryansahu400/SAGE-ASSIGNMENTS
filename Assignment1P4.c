//Write a program to read radius value from the keyboard and calculate the area of circle and print the result.

#include<stdio.h>
#include<conio.h>

float celcius(float farenheit)      //this function converts farenheit to celcius
{
    return ((farenheit-32)*5)/9;
}
void main()
{
    printf("Enetr the temprature in farenheit");
    float farenheit;
    scanf("%f", &farenheit);        //Takes the input from user and stores it in the farenheit variable
    printf("the temprature in celcius is : %.2f", celcius(farenheit));      //this prints the celcius equvalent of farenheit temparute given as input 
}