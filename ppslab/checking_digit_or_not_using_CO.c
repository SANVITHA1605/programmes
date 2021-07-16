#include<stdio.h>
int main()
{
	char ch;
	printf("enter value");
	scanf("\n%d",&ch);
	(ch>=48&&ch<=57)?printf("it is a digit"):printf("it is not a digit");
}
