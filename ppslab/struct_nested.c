#include<stdio.h>
struct student
{
	char name[100];
	int rno;
	
	struct date_of_birth
	{
		int date;
		int month;
		int year;
	}D;
	
}S;
int main()
{
{

           struct student ;
           printf("\n enter name");
           scanf("\n%s",&S.name);
           printf("enter rno");
           scanf("\n%d",&S.rno);
}

          {
            struct date_of_birth D;
            printf("\n enter date_of_birth");
           scanf("\n%d%d%d",&D.date,&D.month,&D.year);
           printf("\n student details");
           printf("\n--------------------");
           printf("\n NAME     RNO    DATE-MONTH-YEAR");
           printf("\n%8s%8d%8d-%d-%d",S.name,S.rno,D.date,D.month,D.year);
}
}
           
