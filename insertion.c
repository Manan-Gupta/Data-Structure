#include<stdio.h>
#include<process.h>
int deletee(int la[], int N, int k)
{ int j,item;
  item=la[k-1];
  printf("Item %d is deleted from the location: %d ",item,k);
  for(j=k-1; j<N-1; j++)
  { la[j]=la[j+1]; }
  return(N-1);
}
void main()
{
int n,size,i,a[20],b[20],loc,j;

do
{
printf("\n 1.Insertion");
printf("\n 2.Display");
printf("\n 3.Deletion");
printf("\n Enter Choice \t");
scanf("%d",&n);
switch(n)
{
case 1: printf("\n Inserting Element into the Array");
printf("\n Enter Size(max 20)\t");
scanf("%d",&size);
for(i=0; i<size; i++)
{
scanf("%d",&a[i]);
}
break;
case 2: printf("\n Displaying the Array \n");
for(i=0; i<size; i++)
{
printf("%d \t",a[i]);
}
break;
case 3:
printf("\nEnter the location for the element to be deleted: ");
    scanf("%d",&loc);
    if(loc<=size)
    { size=deletee(a,size,loc);
      printf("\nModified array is: ");
      for(i=0; i<size; i++)
      { printf("%d ",a[i]); }
    }
    else
    { printf("\nEntered location is out of bound");
    }
break;
default: exit(0);
}
}while(n!=4);

}
