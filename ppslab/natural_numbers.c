#include<stdio.h>
int main()
{
	int num=1,end_num;
	printf("\n enter end_number");
	scanf("\n%d",&end_num);
	while(num<=end_num)
	{
		printf("%3d",num);
		num++;
	}
}
