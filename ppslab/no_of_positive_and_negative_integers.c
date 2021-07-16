#include<stdio.h>
int main()
{
	int num1,num2,num3,num4,num5,positive_count=0,negative_count=0;
	printf("\n enter values:");
	scanf("\n%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
	if(num1>0)
	positive_count += 1;
	else
	negative_count += 1;
	
	if(num2>0)
	positive_count += 1;
	else
	negative_count += 1;
	
	if(num3>0)
	positive_count += 1;
	else
	negative_count += 1;
	
	if(num4>0)
	positive_count += 1;
	else
	negative_count += 1;
	
	
	if(num5>0)
	positive_count += 1;
	else
	negative_count += 1;
	
	printf("\n number of positive numbers=%d,number of negative numbers=%d",positive_count,negative_count);
	
	


	
	
}
