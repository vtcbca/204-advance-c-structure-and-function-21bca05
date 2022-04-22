/* Create a structure inventory (Inventory id , Quantity , Rate).Enter 3
details and print it:*/
#include<stdio.h>
#include<conio.h>
struct inventory//Create datatype of inventory
{
	int id,qty,rate;//structure member
};
void main()
{
	struct inventory i;
	int a,j;
	clrscr();
	for(j=0;j<3;j++)
	{
		printf("\n Enter inventory id:");
		scanf("%d",&i.id);
		printf("\n Enter inventory quantity:");
		scanf("%d",&i.qty);
		printf("\n Enter inventory rate:");
		scanf("%d",&i.rate);
		a=i.rate*i.qty;
		printf(" Total rate of inventory:%d",a);
		printf("\n Inventory Details:");
		printf("\n______________________________________________\n");
		printf("\n\tInventory id:%d \n\tInventory quantity:%d \n\tInventory rate:%d",i.id,i.qty,a);
		printf("\n_______________________________________________\n");
	}
	getch();
}


