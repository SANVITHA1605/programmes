#include<stdio.h>
int main()
{
	int days,months,years;
	printf("\nEnter no.of days:");
	scanf("\n%d",&days);
	months=(days/30);
	years=(days/365);
	printf("\nmonths=%d,years=%d",months,years);
	
}
