#include<stdio.h>
#include<math.h>
int main()
{
	int root1,root2,a,b,c;
	printf("enter values");
	scanf("%d%d%d",&a,&b,&c);
	root1=-b+(sqrt((b*b)-4*a*c))/2*a;
	root2=-b-(sqrt((b*b)-4*a*c))/2*a;
	printf("\n%d%d",root1,root2);
}
