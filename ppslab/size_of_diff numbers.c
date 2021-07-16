#include<stdio.h>
int main()
{
	int num,size;
	char ans;
	float realnum;
	double dnum;
	printf("enter a num,char,float,double:");
	scanf("%d%c%f%lf",&num,&ans,&realnum,&dnum);
	size=sizeof(num);
	size=sizeof(ans);
	size=sizeof(realnum);
	size=sizeof(dnum);
	printf("size of num=%d,ans=%d,realnum=%d,dnum=%d",num,ans,realnum,dnum);
}
