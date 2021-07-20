#include<stdio.h>
int main()
{
	int A[10][10],i,j,r,c;
	printf("\n enter no.of rows,cols");
	scanf("\n%d%d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("\n%d",&A[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%4d",&A[i][j]);
		}
		printf("\n");
	}
	
}
