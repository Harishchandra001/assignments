#include<stdio.h>
enum year{jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};
int main()
{
int i;
for(i=jan; i<=dec; i++)
printf("%d",i);
return 0;
}
