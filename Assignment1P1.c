#include<stdio.h>
#include<conio.h>
#include<limits.h>

int main()
{
//assigning and declaring values
	short s = 5;
	char c = 'A';
	int i = 73246;
	long l = 234234;
	long long ll = 7685798768;
	float f = 1.5;
	double d = 7.8989;
	//printing 
	printf("short s = %d \nsize of short is %d bytes \nrange of Short variable is from %d to %d\n\n", s, sizeof(s), SHRT_MIN, SHRT_MAX);
	printf("Char c = %c \nsize of char variable is %d bytes \nrange of Char variable is from %ld to %ld\n\n", c, sizeof(c), CHAR_MIN, CHAR_MAX);
	printf("int i = %d \nsize of int variable is %d bytes \nrange of Integer variable is from %d to %d\n\n", i, sizeof(i), INT_MIN, INT_MAX);
	printf("long l = %ld \nsize of long variable is %d bytes \nrange of Long variable is from %ld to %ld\n\n", l, sizeof(l), LONG_MIN, LONG_MAX);
	printf("long long ll = %lld \nsize of long long variable is %d bytes \nrange of Long Long variable is from %lld to %lld\n\n", ll, sizeof(ll), LLONG_MIN, LLONG_MAX);
	printf("float f = %f \nsize of float variable is %d bytes \nrange of flaot is undefine\n\n", f, sizeof(f));
	printf("double d = %lf\nsize of double variable is %d bytes \nrange of double is undefined", d, sizeof(d));
	
	
	
	return 0;
}
