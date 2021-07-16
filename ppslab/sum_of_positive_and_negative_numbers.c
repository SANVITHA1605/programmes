#include<stdio.h>
int main()
{
	int num1,num2,num3,num4,num5,sum_of_positive,sum_of_negative;
	printf("\n enter values");
	scanf("\n%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
	if(num1>0)
	sum_of_positive += num1;
	else
	sum_of_negative += num1;
	if(num2>0)
	sum_of_positive += num2;
	else
	sum_of_negative += num2;
	if(num3>0)
	sum_of_positive += num3;
	else
	sum_of_negative += num3;
	if(num4>0)
	sum_of_positive += num4;
	else
	sum_of_negative += num4;
	if(num5>0)
	sum_of_positive += num5;
	else
	sum_of_negative += num5;
	printf("\n sum of positive numbers=%d,sum of negative numbers=%d",sum_of_positive,sum_of_negative);
	
}
