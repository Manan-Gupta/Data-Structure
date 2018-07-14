#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;
struct stack
{ int id;
  char name[30];
  stack *next;
}*top,*temp,*np;
void push()
{ int a; char str[30];
  np=new stack;
  cout<<"Enter name: ";
  gets(str);
  cout<<endl<<"Enter id: "; cin>>a;
  np=new stack;
  np->id=a;
  strcpy(np->name,str);
  np->next=NULL;
  if(top==NULL)
  { top=np; }
  else
  { temp=top;
    top=np;
    np->next=temp;
  }
  cout<<"\nNew item inserted";
}
void display()
{ if(top==NULL)
  { cout<<"\nNo element"; }
  else
  {  temp=top;
     while(temp!=NULL)
     { cout<<endl<<"ID: "<<temp->id;
       cout<<"  Name: "<<temp->name;
       temp=temp->next;
     }
  }
}
void pop()
{ if(top==NULL)
  { cout<<endl<<"Nothing to delete!!"; }
  else
  { temp=top; top=top->next; delete temp;
    cout<<"\nElement is deleted";
  }
}

int main()
{
  char ch1;
  do
  {
  cout<<endl<<"           MENU";
  cout<<endl<<"1.Insert";
  cout<<endl<<"2.Display";
  cout<<endl<<"3.Delete";
  cout<<endl<<"4.Exit";
  cout<<endl<<"Enter your choice: ";
  cin>>ch1;
  if(ch1=='1')
  { push();
  }
  else if(ch1=='2')
  { display(); }
  else if(ch1=='3')
  { pop(); }
  else if(ch1=='4')
  { exit(0); }
  }while(ch1);
  return 0;
}

