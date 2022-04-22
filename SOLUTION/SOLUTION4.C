/* Write a program to create UDF evenodd or check number is even or odd:
 Date:04-04-2022*/
#include<stdio.h>
#include<conio.h>
void evenodd();//Function Declaration
void main()
{
	clrscr();
	evenodd();//Function call();
	getch();
}
void evenodd()//Function Definition
{
	int i;
	printf("Enter value for number:");
	scanf("%d",&i);
	if(i%2==0)
		printf("\n %d Number is even number:",i);
	else
		printf("\n  %d Number is odd number:",i);
}
