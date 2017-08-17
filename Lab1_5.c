/* Columbia University Summer Program 2017
Introduction to Programming: Fundamentals of C
Instructor: Gilbert Pajela
Student: Maulenov Allazhar */
#include <stdio.h>
int main()
{
 int m,y,a;
 printf ("Input the number of month and the year\n");
 scanf ("%d",&m);
scanf ("%d",&y);
 a=y%4;
 switch (m)
  {
    case 1: printf("January %d has 31 days\n", y); break;
    case 2: a==0 ? printf("February %d has 29 days\n", y) : printf("February %d has 28 days\n", y); break;
    case 3: printf("March %d has 31 days\n", y); break;
    case 4: printf("April %d has 30 days\n", y); break;
    case 5: printf("May %d has 31 days\n", y); break;
    case 6: printf("June %d has 30 days\n", y); break;
    case 7: printf("July %d has 31 days\n", y); break;
    case 8: printf("August %d has 31 days\n", y); break;
    case 9: printf("September %d has 30 days\n", y); break;
    case 10: printf("October %d has 31 days\n", y); break;
    case 11: printf("November %d has 30 days\n", y); break;
    case 12: printf("December %d has 31 days\n", y); break;
    default: printf ("Error\n");
  }
return 0;
}
