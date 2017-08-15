#include <stdio.h>;
unsigned int a;
main()
{
printf("Input the years of schooling\n");
scanf ("%d",&a);
switch (a)
{
  case 0: printf( "None\n"); break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5: printf( "Elementary school\n"); break;
  case 6:
  case 7:
  case 8: printf( "Middle school\n"); break;
  case 9:
  case 10:
  case 11:
  case 12: printf( "High school\n"); break;
  default: printf( "College\n");
}
return 0;
}
