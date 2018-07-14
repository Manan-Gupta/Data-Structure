#include<iostream>
#include<stdlib.h>
using namespace std;
#define size 5
class dequeue
{
    int a[10],front,rear;
public:
    dequeue()
    {
        front=-1;
        rear=-1;
    }
    void add_beg()
    {
        int n;
        cout<<endl<<"Enter the element: ";
        cin>>n;
        if(front==-1)
        {
            front=0;
            a[++rear]=n;
            cout<<"\nElement is inserted ";
        }
        else if(front!=0)
        {
            a[--front]=n;
            cout<<"\nElement is inserted ";
        }
        else
        {
            cout<<"\n Overflow!";
        }
    }
    void add_end()
    {
        int n;
        cout<<endl<<"Enter the element to be inserted: ";
        cin>>n;
        if(rear>=size-1)
        {
            cout<<"\n Overflow!";
        }
        else
        {
            if(front==-1)
            {
                rear++; front++;
            }
            else
            {
                rear=rear+1;
            }
        a[rear]=n;
        cout<<"\nElement is inserted ";
        }

    }
    void display()
    {
        if(front==-1)
        {
            cout<<endl<<"Underflow!";
        }
        else
        {
            for(int i=front; i<=rear; i++)
            {
                cout<<a[i]<<" ";
            }
        }
    }
    void delete_beg()
{
        if(front==-1)
        {
            cout<<"deletion is not possible::dequeue is empty";

        }
        else
        {
            cout<<"\nThe element is deleted";
            if(front==rear)
            {
                front=rear=-1;

            }
            else
                {front=front+1;}
        }
}

        void delete_end()
        {
            if(front==-1)
        {
            cout<<"Deletion is not possible::dequeue is empty";

        }
        else
        {
            cout<<"\nThe element is deleted";
            if(front==rear)
            {
                front=rear=-1;
            }
            else
                {rear=rear-1;}
        }
        }



};
int main()
{
    int c,item;
    dequeue d;
    do
    {
        cout<<"\n\n***DEQUEUE OPERATION***\n";
        cout<<"\n 1 Insert at beginning";
        cout<<"\n 2 Insert at end";
        cout<<"\n 3 Display";
        cout<<"\n 4 Deletion from front";
        cout<<"\n 5 Deletion from rear";
        cout<<"\n 6 Exit";
        cout<<"\n Enter your choice: ";
        cin>>c;
        switch(c)
        {
            case 1:d.add_beg();
                          break;
            case 2:d.add_end();
                        break;
            case 3:d.display();
                        break;
            case 4:d.delete_beg();
                        break;
            case 5:d.delete_end();
                      break;
            case 6:exit(1);
                        break;
            csdefault:cout<<"invalid choice";
                    break;
        }
    }while(c!=7);
    return 0;

}


