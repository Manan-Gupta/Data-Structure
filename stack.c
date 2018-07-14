#include<stdio.h>
#include<process.h>
void main()
{
int n,a[6],top=-1,temp;
printf("\n Max element you can have is 5");
do
{
printf("\n 1.Push");
printf("\n 2.Pop");
printf("\n 3.Display");
printf("\n 4.Exit");
printf("\n Enter Choice \t");
scanf("%d",&n);
switch(n)
{
case 1: if(top==5)
printf("\n OverFlow");
else
{
top++;
printf("\n Enter Element \t");
scanf("%d",&a[top]);
}
break;
case 2: if(top==-1)
printf("\n Underflow \t");
else
{
printf("\n Deleting \t %d",a[top]);
top--;
}
break;
case 3: printf("\n Displaying Elements in Stack \n");
temp=top;
while(temp!=-1)
{
printf("%d \n",a[temp]);
temp--;
}
break;
case 4: exit(0);
default: printf("Wrong input!");
}
}while(n!=4);
}
