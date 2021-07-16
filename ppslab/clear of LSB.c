#include<stdio.h>
int main()
{
	int num,clear_of_lsb;
	printf("\n enter number");
	scanf("\n%d",&num);
	clear_of_lsb=(num&0);
	printf("clear_of_lsb is set to %d",clear_of_lsb);
}


