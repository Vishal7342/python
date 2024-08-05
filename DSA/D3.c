/*
WAP to Take Array of five integer elements scan/read value from user
and searching opretor.
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int No[5],i,key,flag=0;
	clrscr();
	printf("\n Enter 5 elements : \n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&No[i]);
	}
	printf("\n Display of 5 elements : \n");
	for(i=0;i<=4;i++)
	{
	printf("\n No[%d] is %d at %u (Memory Addres)",i,No[i],&No[i]);
	}
	printf("\n Enter the key elements: ");
	scanf("%d",&key);
	for(i=0;i<=4;i++)
	{
		if(key==No[i])
		{
			printf("\n key is Found at %d Position",i+1);
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("\n sorry....key not found");
	}
	getch();
}