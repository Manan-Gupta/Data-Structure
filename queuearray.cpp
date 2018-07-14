#include<iostream.h>
const int size=50;
int queue[size],rear=-1,front=-1;
void push(float x)
{ if(rear==size-1)
  {
      cout<<" Overflowing!";
  }
  else if(rear==-1)
  {
      rear=front=0;
      queue[rear]=x;
  }
  else
  {
      rear++;
      queue[rear]=x;
  }

}
void pop()
{
    if(front==-1)
    {
        cout<<endl<<" Nothing to delete";
    }
    else
    {
        if(front==rear)
        {
            front=rear=-1;
        }
        else
        {
            front++;
        }
        cout<<endl<<" Element Deleted";

    }
}
void display()
{
    if(front==-1)
    {
        cout<<endl<<" Nothing to display";
    }
    else
    {
        for(int i=front; i<=rear; i++)
            cout<<endl<<" Queue "<<(i+1)<<" is: "<<queue[i];
    }
}
void peek()
{
    int x;
    x=queue[rear];
    cout<<endl<<" Top most element is: "<<x;
}
void main()
{
    char ch;
    do
    {
        cout<<endl<<endl<<" 1.Insert";
        cout<<endl<<" 2.Display";
        cout<<endl<<" 3.Peek";
        cout<<endl<<" 4.Delete";
        cout<<endl<<" 5.Exit";
        cout<<endl<<" Enter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case '1': float x; int y;
                      cout<<endl<<" How many element you wish to enter: ";
                      cin>>y;
                      for(int i=0; i<y; i++)
                      { cout<<endl<<" Enter element for queue: ";
                        cin>>x;
                        push(x);
                      }
                      break;
            case '2': display();
                      break;
            case '3': peek();
                      break;
            case '4': pop();
                      break;
            case '5': exit(0);
        }

    }while(ch);
}
