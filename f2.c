#include<stdio.h>
int fun();
extern int a=5,b=12;
main()
{
  int a=10;
  printf("%d%d\n",a,b);
  fun();
}
 fun()
{
 printf("%d%d\n",a,b);
}
