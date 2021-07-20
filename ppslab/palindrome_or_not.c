#include<stdio.h>
int main()
{
	int num,rem,number,reverse=0;
	printf("\n enter number");
	scanf("%d",&num);
	number=num;
  	while(num!=0)           
	{
		rem=num%10;   
		reverse=reverse*10+rem; 
		num=num/10;   
		
	}
            if(number==reverse)
	printf("it is  a palindrome");
	else
	printf("it is not a palindrome");
	
}
