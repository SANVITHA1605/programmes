#include<stdio.h>
int main()
{
	char ch1;
	printf("enter value");
	scanf("%c",&ch1);
	if((ch1>='a'&&ch1<='z')||(ch1>='A'&&ch1<='Z'))
	printf("it is  a alphabet");
	else
	printf("it is not alphabet");
}
