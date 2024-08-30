/*
WAP to Tak Array of Elements, scan/read values from User and display
them memory address.
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int No[5],i;
	clrscr();
	printf("\n Enter 5 Elements: \n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&No[i]);
	}
	printf("\n Display of 5 elements \n");
	for(i=0;i<=4;i++)
	{
	printf("\n No[%d] is %d at %u Memory addres",i,No[i],&No[i]);
	}
	getch();
}