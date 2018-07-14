#include<stdio.h>
#include<conio.h>
void main()
{
    int n,bt[20],wt[20],tat[20],avwt=0,avtat=0,i,j;
    clrscr();
    printf("\n Enter total number of processes(maximum 20):");
    scanf("%d",&n);
    printf("\n Enter Process Burst Timen");
    for(i=0;i<n;i++)
    {
	printf("P[%d]:",i+1);
	scanf("%d",&bt[i]);
    }
    wt[0]=0;    //waiting time for first process is 0
    //calculating waiting time
    for(i=1;i<n;i++)
    {
	wt[i]=0;
	for(j=0;j<i;j++)
	    wt[i]+=bt[j];
    }
    printf("\n ProcessttBurst TimetWaiting TimetTurnaround Time");
   
    for(i=0;i<n;i++)
    {
	tat[i]=bt[i]+wt[i];
	avwt+=wt[i];
	avtat+=tat[i];
	printf("\n P[%d]tt%dtt%dtt%d",i+1,bt[i],wt[i],tat[i]);
    }
    avwt/=i;
    avtat/=i;
    printf("\n Average Waiting Time:%d",avwt);
    printf("\n Average Turnaround Time:%d",avtat);
    getch();
}
