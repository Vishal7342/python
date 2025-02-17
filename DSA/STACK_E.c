//WAP to implement all operations of Stack.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
void push();
void pop();
void peep();
void change();
void display();
int stack[size],top=-1,value,del_value,ch,i;
void main()
{
	clrscr();
	while(1)
	{
		printf("\nOperations are:");
		printf("\n1.push");
		printf("\n2.pop");
		printf("\n3.peep");
		printf("\n4.change");
		printf("\n5.display");
		printf("\n6.exit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : push();
				 break;
			case 2 : pop();
				 break;
			case 3 : peep();
				 break;
			case 4 : change();
				 break;
			case 5 : display();
				 break;
			case 6 : exit(0);
			default : printf("\nSorry...Its Wrong Choice");
				 break;
		}
	}
}
void push()
{
	if(top==(size-1))
	{
		printf("\nStack is FULL");
	}
	else
	{
		top++;
		printf("\nEnter the value:");
		scanf("%d",&value);
		stack[top]=value;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("\nStack is Empty");
	}
	else
	{
		del_value=stack[top];
		printf("\nDeleted value is:%d",del_value);
		top--;
	}
}
void display()
{
	if(top==-1)
	{
		printf("\nStack is Empty");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("\n%d",stack[i]);
		}
	}
}
void peep()
{
}
void change()
{
}



