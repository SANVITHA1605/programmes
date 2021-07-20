#include<stdio.h>
int main()
{
	char ch1;
	printf("enter value");
	scanf("%c",&ch1);
	if(ch1>='a'&&ch1<='z')
	printf("alphabet is lower case");
	else
	printf("alphabet is upper case");
}
