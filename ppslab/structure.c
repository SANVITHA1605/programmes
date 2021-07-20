#include<stdio.h>
struct student
{
	int rolno;
	char name[20];
	int marks;
}S;
int main()
{
	struct student ;
	printf("\n enter name");
	scanf("%s",&S.name);
	printf("\nenter rolno");
	scanf("%d",&S.rolno);
	printf("\n enter marks");
	scanf("%d",&S.marks);
	printf("\n student details are %s %d %d",S.name,S.rolno,S.marks);
}
