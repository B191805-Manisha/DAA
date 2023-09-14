#include<stdio.h>

int p[20];
int findparent(int u)
{
  while(p[u]!=u)
  u=p[u];
  return u;
}

int findminedge(int n,int *u,int *v,int adj[][5])
{
  int min=1000,i,j;
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
       if(min>adj[i][j] && adj[i][j]!=0 && adj[i][j]!=-1)
       {
         min=adj[i][j];
         *u=i;
         *v=j;
       }
    }
   // printf("%d-%d",*u,*v);
    return min ;
}

void kruskals(int n,int adj[][5])
{
   int edge,u,v,pau,pav,count=0;
   while(count<n-1)
   {
   edge=findminedge(n,&u,&v,adj);
   pau=findparent(u);
   pav=findparent(v);
  if(pau!=pav)
  {
     p[pav]=pau;
     printf("%d-%d = %d\n",u,v,edge);
     count++;
  } 
  adj[u][v]=0;
  adj[v][u]=0;
  }
}

int main()
{
 
  for(int i=0;i<5;i++)
  p[i]=i;
// int adj[6][6]={{0,3,0,0,0,7},{3,0,5,0,8,4},{0,5,0,6,3,4},{0,0,6,0,4,0},{0,8,3,4,0,2},{7,4,4,0,2,0}};
 int adj[5][5]={{-1,1,-1,1,-1},{1,-1,5,1,6},{-1,5,-1,-1,2},{1,1,-1,-1,3},{-1,6,2,3,-1}};
  kruskals(5,adj);

return 0;



}


