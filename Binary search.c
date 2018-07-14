#include<stdio.h>
void main()
{
int beg,mid,end,size,i,a[20],item,j,temp;
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
printf("\n Enter Element to be Searched \t");
scanf("%d",&item);
beg=0;
end=size;
mid=(beg+end)/2;
while(beg<=end)
{
if(a[mid]>item)
end=mid-1;
else
beg=mid+1;
mid=(beg+end)/2;
}
if(a[mid]==item)
printf("\n Element Found at Position\t %d",mid+1);
else
printf("\n Element Not Found");
}
