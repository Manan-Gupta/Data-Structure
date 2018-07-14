#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
const int size=10;
void push(int stack[], int &top, int it)
{ if(top==size-1)
  { printf("\nStack is overflowing"); }
  else
  { top++;
    stack[top]=it;
  }
}
void pop(int &top)
{ if(top==-1)
  { printf("\nNothing to delete");
  }
  else
  { top--;
  }
}
void display(int stack[], int top)
{ if(top==-1)
  { printf("\n Nothing to delete"); }
  else
  { for(int i=top; i>=0; i--)
    { cout<<"\nStack is "<<(i+1)<<": "<<stack[i];   }
  }
}
int main()
{
  int stack[size],top=-1,item; char ch;
  start:
  printf("\n               MENU");
  printf("\n1. Insert");
  printf("\n2. Display");
  printf("\n3. Delete");
  printf("\nEnter your choice: ");
  cin>>ch;
  if(ch=='1')
  { int a;
    printf("\nHow many element you wish to enter: ");
    scanf("%d",&a);
    for(int i=0; i<a; i++)
    { printf("\nEnter element for stack %d: ",i+1);
      scanf("%d",&item);
      push(stack,top,item);
    }
  }
  else if(ch=='3')
  { pop(top);
    printf("\n Element has been deleted from stack!");
  }
  else if(ch=='2')
  { display(stack,top); }
  else if(ch=='4')
  { exit(0); }
  else
  { printf("\nWrong input"); }
  char ch2;
  printf("\n\nDo you wish to do it again(Y/N): ");
  cin>>ch2;
  if(ch2=='Y' || ch2=='y')
  { goto start; }
  printf("\n\nPress any key to exit");
  return 0;
  getch();
}
