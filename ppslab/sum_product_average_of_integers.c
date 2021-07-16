#include<stdio.h>
int main()
{
	int num1,num2,num3,sum,product,average;
	printf("\n enter values");
	scanf("\n%d%d%d",&num1,&num2,&num3);
	sum=num1+num2+num3;
	product=num1*num2*num3;
	average=product/3;
	printf("\nsum=%d,product=%d,average=%d",sum,product,average);
}
