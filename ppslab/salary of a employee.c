#include<stdio.h>
int main()
{
	int employeesID=1283,number_of_worked_hours_per_month,amount_per_hour=5,salary;
	printf("\n enter values");
	scanf("\n%d",&number_of_worked_hours_per_month);
	salary=number_of_worked_hours_per_month*amount_per_hour;
	printf("\nsalary=%d,employeesID=%d",salary,employeesID);
	
}
