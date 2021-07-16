#include<stdio.h>
int main()
{
	int numbers,sum=0,res;
	
		printf("\nenter numbers");
		scanf("\n%d",&numbers);
		while(numbers!=0)
		{
			res=sum+numbers;
			numbers++;
		}
		
	
	printf("%d",res);
	
}
