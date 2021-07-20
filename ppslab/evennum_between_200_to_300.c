#include<stdio.h>
int main()
{

	int num1,num2,num=202;
	printf("enter numbers");
	scanf("%d%d",&num1,&num2);
	while((num1<num)&&(num<num2))
	{
		if(num%2==0)
		printf("%4d",num);
		num++;
	}
}
