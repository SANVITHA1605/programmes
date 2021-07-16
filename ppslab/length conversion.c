#include<stdio.h>
int main()
{
	float cm,m,km;
	printf("\n ENTER VALUE IN cm");
	scanf("\n%f",&cm);
	m=(cm/100);
	km=(cm/100000);
	printf("\nm=%f,km=%f",m,km);
}
