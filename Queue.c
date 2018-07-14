#include<stdio.h>
#include<process.h>
#define SIZE 5
int front=-1;
int rear=-1;
int q[SIZE];
void insert();
void del();
void display();
void main()
{
int choice;

do
{
printf("\n\t Menu");
printf("\n 1. Insert");
printf("\n 2. Delete");
printf("\n 3. Display ");
printf("\n 4. Exit");
printf("\n Enter Your Choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
insert();
getch();
break;
case 2:
del();
display();
getch();
break;
case 3:
display();
getch();
break;
case 4:
exit(0);
default: printf("Wrong Input!");
}
}while(choice!=4);
}
void insert()
{
int no;
printf("\n Enter No.:");
scanf("%d",&no);
if(rear < SIZE-1)
{
q[++rear]=no;
if(front==-1)
front=0;
}
else
{
printf("\n Queue overflow");
}
}
void del()
{
if(front==-1)
{
printf("\nQueue Underflow");
return;
}
else
{
printf("\nDeleted Item:-->%d\n",q[front]);
}
if(front==rear)
{
front=-1;
rear=-1;
}
else
{
front=front+1;
}
}
void display()
{
int i;
if(front==-1)
{
printf("\nQueue is empty....");
return;
}
for(i=front;i<=rear;i++)
printf("\t%d",q[i]);
}
