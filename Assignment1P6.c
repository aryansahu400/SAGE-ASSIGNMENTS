//Write a program for computing volume of cylinder , sphere and cone assume that dimensions are integer’s use type casting where ever necessary.

#include<stdio.h>
#include<conio.h>
#include<math.h>

float volumeOfCylinder(int height, int radius)      //this function returns the volume of a cylinder
{
    return 3.14*pow(radius,2)*height;
}
float volumeOfSphere(int radius)        //this function returns the volume of a sphere
{
    return (4*(3.14*pow(radius,3)))/3;
}
float volumeOfCone(int height, int radius)      // this function returns the volume of a cone
{
    return ((3.14*pow(radius,2)*height)/3);
}
void main()     //the exicution begis from here
{
    printf("Enter the radius of the circle ");
    int radius, height;
    scanf("%d",&radius);        //stores the entered value by user in radius variable
    printf("The volume of circle whose radius is %d units is %.2f units\n", radius , volumeOfSphere(radius));       //prints the volume of the spherec by using the function volumeOfSphere
    printf("Enter the height of the cylinder ");
    scanf("%d", &height);       //stores the entered value by user in height variable
    printf("Enter the radius of the cylinder ");
    scanf("%d", &radius);       //overwrite the previous value in radius with the new value user entered
    printf("The volume of cylinder whose radius is %d units and height is %d units is %.2f\n", radius, height , volumeOfCylinder(height, radius));      //prints the vlome of cylinder using the volumeOfCylinder function
    printf("Enter the radius of the cone ");
    scanf("%d", &radius);       //overwrite the previous value in radius with the new value user entered
    printf("Enter the height of the cone ");
    scanf("%d", &height);       //overwrite the previous value in height with the new value user entered
    printf("The volume of a cone whose radius is %d units and height is %d units is %.2f units", radius, height, volumeOfCone(height , radius));        //prints the volume of the cone using the volumeOfCone function

}