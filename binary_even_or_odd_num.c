#include<stdio.h>
int main()
{
	int num;
	printf("enter number");
	scanf("\n%d",&num);
	if(num&1==1)
	printf("number is odd");
	else
	printf("number is even");
}

