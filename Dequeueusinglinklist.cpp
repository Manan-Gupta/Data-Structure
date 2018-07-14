#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
class dequeue
{   public:
    int id;
    char name[20];
    dequeue *next;

}*np,*temp,*front,*rear;
void add_end()
{
    int n; char names[20];
    cout<<endl<<"Enter id: ";
    cin>>n;
    cout<<endl<<"Enter name: ";
    cin>>names;
    np=new dequeue;
    np->id=n;
    strcpy(np->name,names);
    np->next=NULL;
    if(front==NULL)
    {
        rear=np;
        front=np;
    }
    else
    {
        rear->next=np;
        rear=np;
    }

}
void add_beg()
{
    int n; char names[20];
    cout<<endl<<"Enter id: ";
    cin>>n;
    cout<<endl<<"Enter name: ";
    cin>>names;
    np=new dequeue;
    np->id=n;
    strcpy(np->name,names);
    np->next=NULL;
    if(front==NULL)
    {
         rear=NULL;
         front=NULL;
    }
    else
    {
        np->next=front;
        front=np;
    }
}
void display()
{
    if(front==NULL)
    {
        cout<<endl<<"Underflow!";
    }
    else
    {
        temp=front;
        while(temp!=NULL)
        {
            cout<<endl<<"ID: "<<temp->id;
            cout<<endl<<"Name: "<<temp->name;
            temp=temp->next;
        }
    }
}
void delete_end()
{
    if(front==NULL)
	{
		printf("\nUnderflow!");
	}
	temp=front;
	front=front->next;
	delete(temp);
}
void delete_beg()
{
    if(rear==front)
    {
        delete front;
        rear=front=NULL;

    }
    while(np->next!=rear)
    {
        np=np->next;
    }
    temp=rear;
    rear=np;
    np->next=NULL;
    delete temp;
}
int main()
{
    int data; char choice;
    do
	{
		cout<<"\n\n1.InsertLast\n2.DeleteFirst\n3.Insert First\n4.Delete Last\n5.Display\n6.Exit\n";
		cout<<"\nEnter ur choice:"; cin>>choice;
		switch(choice)
		{
		case '1':
			add_end();
			break;
		case '2':
			delete_beg();
			break;
        case '3':
			add_beg();
			break;
		case '4':
			delete_end();
			break;
		case '5':
			display();
			break;
		case '6':
			exit(0);
		default:
			printf("\nEnter a valid choice");
			break;
		}
	}while(choice!=7);
	return 0;
}
