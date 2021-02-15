//Write a program to read marks of a student in six subjects and print whether pass or fail.

#include<stdio.h>
#include<conio.h>

typedef int marks;      //int can be referenced as marks as well, this meams if marks m1 is written it is equal to int m1
void main()
{
    marks m1,m2,m3,m4,m5,m6;        //int m1-m6 are created
    printf("Enter marks in first subject: ");
    scanf("%d", &m1);       //m1 stores the marks in first subject
    printf("Enter marks in second subject: ");
    scanf("%d", &m2);       //m2 stores the marks in second subject
    printf("Enter marks in third subject: ");
    scanf("%d", &m3);       //m3 stores the marks in third subject
    printf("Enter marks in fourth subject: ");
    scanf("%d", &m4);       //m4 stores the marks in fourth subject
    printf("Enter marks in fifth subject: ");
    scanf("%d", &m5);       //m5 stores the marks in fifth subject
    printf("Enter marks in sixth subject: ");
    scanf("%d", &m6);       //m6 stores the marks in sixth subject

    if(m1<33 || m2<33 || m3<33 || m4<33 || m5<33 || m6<33)      //check if the student scored less than 33 marks in any subject
    {
        printf("Student is FAILED");        //true is returned and failed is printed
    }else{
        printf("Student is PASSED");        //false is returned and passed is printed
    }
}