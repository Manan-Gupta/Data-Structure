#include<iostream>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
void tower(int N,char A[7],char B[7],char C[7])
{ if(N==1)
  { cout<<endl<<" Move "<<A<<" -> "<<C; return;}
  tower(N-1,A,C,B);
  cout<<" Move "<<A<<" -> "<<C;
  tower(N-1,B,A,C);
  return;
}
int main()
{
  int n;
  cout<<endl<<"WELCOME TO TOWER OF HANOI PROBLEM SOLVER!";
  cout<<endl<<endl<<"Enter number of disk: ";
  cin>>n;
  if(n<1)
  { cout<<endl<<"Incorrect number of disk";
    exit(0);
  }
  else
  { cout<<endl<<"Following moves are required to move "<<n<<" from tower 1 to tower 3";
    tower(n,"TOWER1","TOWER2","TOWER3");
  }
  return 0;
  getch();
}
