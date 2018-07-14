#include<iostream.h>
#include<process.h>
#include<stdio.h>
#include<string.h>
struct queue
{ int id;
  char name[30];
  queue *next;
}*front,*rear,*temp,*np;
void push()
{ int a; char str[30];
  np=new queue;
  cout<<endl<<" Enter id: "; cin>>a;
  np->id=a;
  cout<<" Enter name: "; gets(str);
  strcpy(np->name,str);
  np->next=NULL;
  if(front==NULL)
  { front=rear=np; }
  else
  { rear->next=np;
    rear=np;
  }
  cout<<"\n New item inserted";
}
void display()
{ if(front==NULL)
  { cout<<"\n No element"; }
  else
  {  temp=front;
     while(temp!=NULL)
     { cout<<endl<<" ID: "<<temp->id;
       cout<<" Name: "<<temp->name;
       temp=temp->next;
     }
  }
}
void pop()
{ if(front==NULL)
  { cout<<endl<<" Nothing to delete!!"; }
  else
  { temp=front; front=front->next; delete temp;
    cout<<"\n Element is deleted";
  }
}
void searchbyid()
{ int i,flag=0;
  cout<<endl<<" Enter id: ";
  cin>>i;
  temp=front;
  while(temp!=NULL)
  { if(temp->id==i)
    { flag=1;
    cout<<endl<<" ID: "<<temp->id;
    cout<<" Name: "<<temp->name;
    }
    temp=temp->next;
  }
  if(flag==0)
  { cout<<endl<<" Match not found"; }

}
void searchbyname()
{ char i[25]; int flag=0;
  cout<<endl<<" Enter name: ";
  gets(i);
  temp=front;
  while(temp!=NULL)
  { if(strcmp(temp->name,i)==0)
    { flag=1;
    cout<<endl<<" ID: "<<temp->id;
    cout<<" Name: "<<temp->name;
    }
    temp=temp->next;
  }
  if(flag==0)
  { cout<<endl<<" Match not found"; }

}
void main()
{ char ch1;
  do
  {
  cout<<endl<<"           MENU";
  cout<<endl<<" 1.Insert";
  cout<<endl<<" 2.Display";
  cout<<endl<<" 3.Delete";
  cout<<endl<<" 4.Search by ID";
  cout<<endl<<" 5.Search by Name";
  cout<<endl<<" 6.Exit";
  cout<<endl<<" Enter your choice: ";
  cin>>ch1;
  if(ch1=='1')
  { push(); }
  else if(ch1=='2')
  { display(); }
  else if(ch1=='3')
  { pop(); }
  else if(ch1=='4')
  { searchbyid(); }
  else if(ch1=='5')
  { searchbyname(); }
  else if(ch1=='6')
  { exit(0); }
  }while(ch1);
}
