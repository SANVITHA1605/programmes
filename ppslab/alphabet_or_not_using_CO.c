#include<stdio.h>
int main()
{
	char ch;
	printf("enter value");
	scanf("\n%c",&ch);
	((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))?printf("it is alphabet"):printf("not an alphabet");
}

