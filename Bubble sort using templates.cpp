#include<iostream>
#include<cstdlib>
using namespace std;
//#define max 10
template<class a>
void bubbleasc(a ar[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=n-1; i<j; j--)
        {
           if(ar[j]>ar[j+1])
           {
               swap(ar[j],ar[j+1]);
           }
        }
    }

}
template<class e>
void bubbledsc(e ar[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=n-1; i<j; j--)
        {
           if(ar[j]<ar[j+1])
           {
               swap(ar[j],ar[j+1]);
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
    int ab[10],k,m=10; int ch; char ans;
    cout<<"Enter the array elements (max 10): " ;
    for(k=0; k<m; k++)
    {
        cin>>ab[k];
    }
    start:
    cout<<"\n        MENU";
    cout<<"\n1. Ascending order  ";
    cout<<"\n2. Descending order ";
    cout<<"\n3. Exit ";
    cout<<"\nEnter you choice: ";
    cin>>ch;
    switch(ch)
    {
        case 1 : bubbleasc(ab,m);
                cout<<endl<<"Sorted list is :\n";
                for(k=0; k<m; k++)
                {
                   cout<<ab[k];
                }
                break;
        case 2 : bubbledsc(ab,m);
                cout<<endl<<"Sorted list is:\n";
                for(k=0; k<m; k++)
                {
                   cout<<ab[k];
                }
                break;
        case 3 : exit(0); break;
        default: cout<<"\n Wrong input!"; break;

    }
    cout<<"\n\n Do you wish to do it again(y/Y): ";
    cin>>ans;
    if(ans=='y' || ans=='Y')
    {
        goto start;
    }
    cout<<"\n\nPress any key to continue";
    return 0;

}
