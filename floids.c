#include<stdio.h>
int b[10][10];
void floids(int adj[][4],int n)
{
  
  for(int k=0;k<n;k++)
  {
   printf("  k=%d\n",k);
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        if(i==k||j==k)
          b[i][j]=adj[i][j];
        else
          {
            if(adj[i][k]+adj[k][j]<adj[i][j])
              b[i][j]=adj[i][k]+adj[k][j];
            else
             b[i][j]=adj[i][j];  
          }
      }
    }
    for(int i=0;i<n;i++)
    { for(int j=0;j<n;j++)
     {
        adj[i][j]=b[i][j];
        printf("%d\t",adj[i][j]);
     }
     printf("\n");}
  }
}


int main()
{
  int adj[4][4]={{0,1,6,5},{1,0,2,4},{6,2,0,3},{5,4,3,0}};
  floids(adj,4);
}











