/* Columbia University Summer Program 2017
Introduction to Programming: Fundamentals of C
Instructor: Gilbert Pajela
Student: Maulenov Allazhar */
#include <stdio.h>
int main()
{
char letter;
float s;
int a;
printf ("Choose the figure by typing the first letter: S for sphere and C for cube\n");
scanf ("%c",&letter);
if (letter=='S')
{
printf ("Input the radius of the sphere\n");
scanf ("%d",&a);
s=(a*a*a*3.1416*4)/3;
printf("The area of sphere is %f\n", s);
}
else if (letter=='C')
{
printf ("Input the length of the sides of the cube\n");
scanf ("%d",&a);
s=(a*a*a);
printf("The area of cube is %f\n", s);
}
else printf ("Error\n");
return 0;
}
