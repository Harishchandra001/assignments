#include<stdio.h>
int main()
{
	int i,j,s;
	const int n=10;
	for(i=0;i<n;i++)
	{
		for(s=0;s<n-1;s++)
			printf("  ");
		for(j=0;j<=i;j++)
			printf("* ");
		printf("\n");

	}
	for(i=0;i<n;i++)
	{
		for(s=0;s<i;s++)
			printf("  ");
		for(j=0;j<n-i;j++)
			printf("* ");
		printf("\n");
	}
}
