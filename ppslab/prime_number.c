#include<stdio.h>
int main()
{
	int num,i,count=0;
	printf("\n enter num");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
	    if (num%i==0)
	    count=count+1;
	    
  }
             if (count>2)
             printf("it is not a prime");
             else
             printf("it is a prime");
              


}
