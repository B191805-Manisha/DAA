#include<stdio.h>
#include<limits.h>
int visited[5];

void prims(int adjmatrix[][5],int n)
{
  visited[0]=1;
  int u,v,i,j,min;
  for(int l=0;l<n-1;l++)
  {
   min=INT_MAX;
  for(int i=0;i<n;i++)
  {
      if(visited[i]==1)
      {
        for(j=0;j<n;j++)
        {
         if(visited[j]==-1 && adjmatrix[i][j]!=0)
         {
           if(min>adjmatrix[i][j])
           {
            min=adjmatrix[i][j];
            u=i;
            v=j;
           
           }
         }
         }
    }
  }
   printf("%d - %d = %d\n",u,v,min); 
   visited[v]=1;
   }
}

int main()
{
 /* int n;
  printf("enter no of vertices : ");
  scanf("%d",&n);
  printf("enter the cost of edge between vertices\n" );
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
    printf("edge[%d][%d] = ",i,j);
    scanf("%d",&adjmatrix[i][j]);
    }
  }*/
  for(int i=0;i<5;i++)
  visited[i]=-1;
  int adjmatrix[5][5]={{0,2,0,6,0},{2,0,3,8,5},{0,3,0,0,7},{6,8,0,0,9},{0,5,7,9,0}};
  prims(adjmatrix,5);
  
}





