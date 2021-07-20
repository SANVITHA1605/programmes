#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("\n enter values");
	scanf("\n%d%d%d",&num1,&num2,&num3);
	if(num1>num2)
	{
		if(num1>num3)
		printf("num1=%d is bigger",num1);
		else
		printf("num3=%d is bigger",num3);
	}
	else
	{
		if(num2>num3)
		printf("num2=%d is bigger",num2);
		else
		printf("num3=%d is bigger",num3);
	}
}
