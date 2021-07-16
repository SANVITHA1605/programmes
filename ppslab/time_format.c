#include<stdio.h>
int main()
{
	int SS,MM,HH;
	printf("\n enter no.of SS");
	scanf("\n%d",&SS);
	MM=(SS/60);
	HH=(SS/3600);
	printf("\nHH:MM:SS=%d:%d:%d",HH,MM,SS);
	
}
