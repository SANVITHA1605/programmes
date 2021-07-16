#include<stdio.h>
int main()
{
	int num;
	printf("\n enter number");
	scanf("\n%d",&num);
	if(num&1==1)
	printf("LSB of %d is  1",num);
	else
	printf("LSB of %d is  0",num);
	
	

}
