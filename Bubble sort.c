#include<stdio.h>
void main()
{
int a[20],i,j,size,temp;
printf("\n Enter Size of Array \t");
scanf("%d",&size);
printf("\n Enter Array \n");
for(i=0; i<size; i++)
{
scanf("%d",&a[i]);
}
for(i=0; i<size; i++)
{
for(j=0; j<size; j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("\n Sorted Array is \n");
for(i=0; i<size; i++)
{
printf("%d \t",a[i]);
}
}

