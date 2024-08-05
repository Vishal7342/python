//Create an Array of 5 Elements and display them.
#include<stdio.h>
#include<conio.h>

void main()
{
	int No[5] = {45,7,-12,90,-2},i;
	clrscr();
	printf("\n Display of 5 Elements: \n");
	for(i=0;i<=4;i++)
	{
		printf("\n No[%d] is : %d",i,No[i]);
	}
	getch();
}