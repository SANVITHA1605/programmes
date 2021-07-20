#include<stdio.h>
int main()
{
	int n;
	int A[10],i,min=100;
	printf("\n enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	   {
	     printf("\n enter numbers");
	    scanf("\n%d",&A[i]);
	printf("\n");
}
	for(i=0;i<n;i++)
	{
		if (A[i]<min)
		min = A[i];
	}
	printf("%d",min);
}
