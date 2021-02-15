//Write a program to verify the given string is palindrome or not (Using function).

#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#include<string.h>

bool isPalidrome(char str[])
{    
    // Start from leftmost and rightmost corners of str 
    int l = 0; 
    int h = strlen(str) - 1; 
  
    // Keep comparing characters while they are same 
    while (h > l) 
    { 
        if (str[l++] != str[h--]) 
        { 
            
            return false; 
        } 
    } 
    return true;
}
void main()
{
    printf("Enter the string: ");
    char s[20];     //a string as a char array is declared
    scanf("%s", &s);        //string is initialised
    if(isPalidrome(s))      //s is sent as value to the function isPalidrome
    {
        printf("It is a palidrome");        //if true is returned it confirms a palidrome
    }else{
        printf("It is not a palidrome");        //else it is not a palidrome
    }
}