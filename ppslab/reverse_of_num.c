#include<stdio.h>
int main()
{
	int num,reverse,rem;
	printf("enter number");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		reverse=reverse*10+rem;
		num=num/10;
		
	}
	printf("reverse=%d",reverse);
}
