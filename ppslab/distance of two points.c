#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,x1,x2,y1,y2,distance_ab;
	printf("\n enter values");
	scanf("\n%d%d%d%d",&x1,&y1,&x2,&y2);
	distance_ab= sqrt(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
	printf("\ndistance_ab=%d",distance_ab);
	
}
