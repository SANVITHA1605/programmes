#include<stdio.h>
int main()
{
	int l,b,area,perimeter;
	printf("\n enter values of l,b");
	scanf("\n%d%d",&l,&b);
	area=(l*b);
	perimeter=(l*b)+(l*b);
	printf("\narea=%d,perimeter=%d",area,perimeter);
}
