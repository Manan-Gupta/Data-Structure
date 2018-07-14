#include<iostream.h>
uisng namespace std;
#define max 10

template<class a>
void bubbleasc(a ar[])
{
    for(int i=0; i<max-1; i++)
    {
        for(int j=max-1; j>i; j--)
        {
           if(a[j]<a[j-1])
           {
               swap(a[j],a[j-1]);
           }
        }
    }

}
void bubbledsc(a ar[])
{
    for(int i=0; i<max-1; i++)
    {
        for(int j=max-1; j>i; j--)
        {
           if(a[j]<a[j+1])
           {
               swap(a[j],a[j-1]);
           }
        }
    }

}
template<class b>
void swap(b &c, b &d)
{
    b temp=c;
    c=d;
    d=temp;
}
int main()
{
    int a[10],k; char ch;
    cout<<"Enter the array elements (max 10)": ;
    for(k=0; k<max; k++)
    {
        cin>>a[k];
    }
    cout<<"\n                MENU";
    cout<<"\n1. Ascending order  ";
    cout<<"\n2. Descending order ";
    cout<<"\n3.Exit ";
    cout<<"\nEnter you choice: ";
    cin>>ch;
    do
    {
    switch(ch)
    {
        case 1: bubbleasc(x);
                cout<<endl<<endl<<"Sorted list is :\n"
                for(k=0; k<max; k++)
                {
                   cout<<a[k];
                }
                break;
        case 2: bubbledsc(x)
                cout<<endl<<endl<<"Sorted list is:\n"
                for(k=0; k<max; k++)
                {
                   cout<<a[k];
                }
                break;
        case 3: exit(); break;
        default: cout<<"\n Wrong input!";

    }
    }while(ch!=3)
    return 0;

}
