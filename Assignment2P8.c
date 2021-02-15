#include<stdio.h>
#include<conio.h>

void swap(int a, int b)
{
	int temp=a;
	a=b;
	b=temp;
	printf("after swapping:\na = %d\nb = %d",a,b);
}
void main()
{
	printf("Enter the first number a: ");
	int a;
	scanf("%d",&a);
	printf("Enter the second number b: ");
	int b;
	scanf("%d",&b);
	swap(a,b);
}