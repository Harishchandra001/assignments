#include<stdio.h>
int main()
{
	int i,j,k;
	const int n=5;
	for(i=-n+1;i<n;i++)
	{
		if(i<0)
			k=-i;
		else
			k=i;
		for(j=0;j<n-k;j++)
			printf("%d ",j+1);
		printf("\n");
	}
}
