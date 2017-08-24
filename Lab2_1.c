/* Columbia University Summer Program 2017
Introduction to Programming: Fundamentals of C
Instructor: Gilbert Pajela
Student: Maulenov Allazhar */
#include <stdio.h>
int main()
{
 int b,a,c,d,n,k,m,i;
 printf("Input numbers n and k to find C(n,k)\n");
 scanf("%d",&n);
 scanf("%d",&k);
 m=n-k;
 a=1;
 b=1;
 d=1;
 for (i=1; i<=n; i++)
  {
   a=i*a;
  }
printf("n! is equal to %d\n",a); 
 for (i=1; i<=k; i++)
 {
   b=i*b;
 }
  printf("k! is equal to %d\n",b);
 for (i=1; i<=m; i++)
  {
    d=i*d;
  }
  printf("n-k! is equal to %d\n",d);
  c=a/(b*d);
  printf("C(n,k) is equal to %d\n",c);
 return 0;
}
