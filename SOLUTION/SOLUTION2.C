/* Write a program to create structure marksheet (sid,sname,marks1,marks2,
marks3,total,percentage).Print 5 student marksheet using concept of array
of structure:*/
#include<stdio.h>
#include<conio.h>
struct student
{
	char sname[5][20];
	int sid[5],m1[5],m2[5],m3[5],total[5],per[5];
};
void main()
{
	struct student s;
	int a,i;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\n Enter value for Student Name:");
		flushall();
		gets(s.sname[i]);
		printf("\n Enter value for Student Id:");
		scanf("%d",&s.sid[i]);
		printf("\n Enter value for Marks 1:");
		scanf("%d",&s.m1[i]);
		printf("\n Enter value for Marks 2:");
		scanf("%d",&s.m2[i]);
		printf("\n Enter value for Marks 3:");
		scanf("%d",&s.m3[i]);
		printf("\n______________________________________\n");
		s.total[i]=s.m1[i]+s.m2[i]+s.m3[i];
		printf("\n\t Total marks:%d",s.total[i]);
		s.per[i]=s.total[i]/3;
		printf("\n\t Total Percentage:%d",s.per[i]);
		printf("\n______________________________________\n");
	}
	printf("\n Student Marksheet:");
	printf("\n_______________________________________:\n");
	for(i=0;i<5;i++)
	{
		printf("\n\t Student Name:%s",s.sname[i]);
		printf("\n\t Student Student Id:%d",s.sid[i]);
		printf("\n\t Student marks1:%d",s.m1[i]);
		printf("\n\t Student marks2:%d",s.m2[i]);
		printf("\n\t Student marks3:%d",s.m3[i]);
		printf("\n\t Student total:%d",s.total[i]);
		printf("\n\t Student Percentage:%d",s.per[i]);
	}
	getch();
}


