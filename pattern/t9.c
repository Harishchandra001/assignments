#include<stdio.h>
int main()
{
	int i,j,s;
	const int n;
	printf("Enter the number \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(s=0;s<n-i;s++)
			printf("  ");
		for(j=0;j<n;j++)
			printf("* ");
		printf("\n");
	}

}
