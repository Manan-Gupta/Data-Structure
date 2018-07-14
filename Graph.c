#include <stdio.h>
#include<process.h>
void main()
{
   int ch;

   do
   {    printf("\n 1.Directed Graph ");
		printf("\n 2.UnDirected Graph ");
		printf("\n 3.Exit");
		printf("\n\nEnter you choice : ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1 : dirgraph();
				 break;
			case 2 : undirgraph();
				 break;
			case 3 : exit(1);
		}
	}while(1);
}
int dirgraph()
{
	int adj_mat[50][50];
	int n;
	int in_deg, out_deg, i, j;
	printf("\n How Many Vertices: ");
	scanf("%d", &n);
	readgraph (adj_mat, n);
	printf("\n Vertex \t In_Degree \t Out_Degree \t Total_Degree ");
	for (i = 1; i<=n ; i++ )
	{
		in_deg = out_deg = 0;
		for ( j = 1 ; j <= n ; j++ )
		{
			if ( adj_mat[j][i] == 1 )
				in_deg++;
		}
		for ( j = 1 ; j <= n ; j++ )
			if (adj_mat[i][j] == 1 )
				out_deg++;
		printf("\n\n %5d\t\t\t%d\t\t%d\t\t%d\n\n",i,in_deg,out_deg,in_deg+out_deg);
	}
	return;
}
int undirgraph()
{
	int adj_mat[50][50];
	int deg, i, j, n;
	printf("\n How Many Vertices: ");
	scanf("%d", &n);
	readgraph(adj_mat, n);
	printf("\n Vertex \t Degree ");
	for ( i = 1 ; i <= n ; i++ )
	{
		deg = 0;
		for ( j = 1 ; j <= n ; j++ )
			if ( adj_mat[i][j] == 1)
				deg++;
		printf("\n\n %5d\t\t%d\n\n", i, deg);
	}
	return;
}
int readgraph ( int adj_mat[50][50], int n )
{
	int i, j;
	int reply;
	for ( i = 1 ; i <= n ; i++ )
	{
		for ( j = 1 ; j <= n ; j++ )
		{
			if ( i == j )
			{
				adj_mat[i][j] = 0;
				continue;
			}
			printf("\n Vertices %d & %d are Adjacent(1/0): ",i,j);
			scanf("%d", &reply);
			if ( reply == 1 )
				adj_mat[i][j] = 1;
			else
				adj_mat[i][j] = 0;
		}
	}
	return;
}
