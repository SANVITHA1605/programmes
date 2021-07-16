#include<stdio.h>
int main()
{
	int itemsweight = 30,cost = 50,number_of_units,totalweight,totalcost ;
	printf("\n enter values");
	scanf("\n%d",&number_of_units);
	totalweight=number_of_units*itemsweight;
	totalcost=number_of_units*cost;
	printf("\ntotal weight=%d,total cost=%d",totalweight,totalcost);
}
