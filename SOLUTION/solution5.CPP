/* Write a menu driven program to perform following operation:
1)Palindrome Number
2)Prime Number
3)Reverse Number
4)Armstrong Number
5)Exit
Date:04\04\2022*/
#include<stdio.h>
#include<conio.h>
void palinum();//Function Declaration without argument without returntype
void primenum(int a);//Function Declaration with argument without returntype
int reversenum();//Function Declaration without argument with returntype
int armnum(int a);//Function Declaration with argument with returntype
int menu();//Function Declaration with argument without returntype
void main()
{
	char yn;
	int c,a;
	clrscr();
	do
	{
		c=menu();//Function Call
		switch(c)
		{
			case 1:
				palinum();
				break;
			case 2:
				printf("\n Enter value for a:");
				scanf("%d",&a);
				primenum(a);//Function Call
				break;
			case 3:
				c=reversenum();//Function Call
				printf("\n Reverse Number is %d",c);
				break;
			case 4:
				printf("\n Enter value for a:");
				scanf("%d",&a);
				c=armnum(a);//Function Call
				break;

			case 5:
				exit(0);
			default:
				printf("\n Enter valid choice.Please enter choice from 1 to 5 number:");
				break;
		}
		printf("\n\n\t Do you want to continue?(Yes=Y/y,No=N/n):");
		flushall();
		scanf("%c",&yn);
		}while(yn=='y'||yn=='Y');
	getch();
}
int menu()//Function Declaration
{
	int choice;
	printf("\n MENU LIST:");
	printf("\n-----------------------------\n");
	printf("\n 1)palindrome Number \n 2)Prime Number \n 3)Reverse Number \n 4)Armstrong Number \n 5)Exit");
	printf("\n Enter your choice:");
	scanf("%d",&choice);
	return choice;
}
void palinum()//Function Declaration
{
	int a,c,sum=0,b;
	printf("\n Enter value for a:");
	scanf("%d",&a);
	c=a;
	while(a>0)
	{
		b=a%10;
		sum=(sum*10)+b;
		a=a/10;
	}
	if(c==1)
		printf("\n Entered Number is not palindrome number");
	else
		printf("\n Entered Number is palindrome number");
}
void primenum( int a)//Function Declaration
{
	int i,c=0;
	//printf("\n Enter value for no:");
	//scanf("%d",&no);
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			c=1;
			break;
		}
	}
	if(c==1)
		printf("\n Number is not prime number");
	else
		printf("\n Number is prime number");
}
int reversenum()//Function Definition
{
	int a,b,c=0;
	printf("\n Enter value for a:");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		c=c*10+b;
		a=a/10;
	}
	return c;
}
int armnum(int a)//Function Definition
{
	int b,n,c=0;
	n=a;
	while(a>0)
	{
		b=a%10;
		c=c+(b*b*b);
		a=a/10;
	}
	if(n==c)
		printf("\n Number is armstrong");
	else
		printf("\n Number is not  armstrong");
	return c;
}

