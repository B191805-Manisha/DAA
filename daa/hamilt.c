#include<stdio.h>
int n;

int a[10];
int is_safe(int index,int val,int adjlist[][5])
{                                                   ///strating with all INDEX**** 
  if(index==n-1)
  {
    for(int i=0;i<index;i++)
    {
      if(a[i]==val || adjlist[a[index-1]][val]==0 || adjlist[val][a[0]]==0)
      // if(val==4 && a[0]==3)
      // printf("%d ",adjlist[val][a[0]]); 
       return 0;
     }
  }
  if(index!=n)
  {
   for(int i=0;i<index;i++)
   {
    if(a[i]==val || adjlist[a[index-1]][val]==0)
     return 0;
     }
  }
  return 1;
}

 void print(int n)
 {
   for(int i=0;i<n;i++)
   printf("%d - ",a[i]);
   printf("\n");
 }

void hamil(int index,int n,int adjlist[][5])
{
  if(index==n)
  {
    print(n);
    return;
  }
  for(int i=0;i<n;i++)
  {
  if(is_safe(index,i,adjlist))
   { 
    a[index]=i;
    hamil(index+1,n,adjlist);
    }
  }
}

int main()
{
  int i;
  n=5;
// int adjlist[4][4]={{1,1,0,1},{1,1,1,0},{0,1,1,1},{1,0,1,1}};
// int adjlist[4][4]={{1,0,1,1},{0,1,1,1},{1,1,1,0},{1,1,0,1}};
int adjlist[5][5]={{1,1,0,1,0},{1,1,1,0,0},{0,1,1,0,1},{1,0,0,1,0},{0,0,1,0,1}};
  // a[0]=0;
  hamil(0,n,adjlist);
 
}


/*#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int a[10];
int isafe(int I,int val,int n,int adj[][5])
{
  if(I==n)
  {
    for(int i=0;i<I;i++)
     {
     if(a[i]==val || adj[a[I-1]][val]==-1 || adj[val][a[0]]==-1)
     return 0;
     }
  }
  else if(I!=n)
  {
    for(int i=0;i<I;i++)
    {
      if(a[i]==val || adj[a[I-1]][val]==-1)
      return 0;
    }
  }
  return 1;
}

void print(int n)
{
  for(int i=0;i<=n;i++)
  {
    printf("%d ",a[i]);
  }
  printf("\n");
}

void back(int n,int I,int adj[][5])
{
  if(I==n+1)
  {
     print(n);
     return;
  }
   for(int i=0;i<=n;i++)
   {
     if(isafe(I,i,n,adj))
     {
       a[I]=i;
       back(n,I+1,adj);
     }
   }
  
}

 
 


int main()
{
int n=4;
int adj[5][5]={{-1,1,-1,1,-1},{1,-1,5,1,6},{-1,5,-1,-1,2},{1,1,-1,-1,3},{-1,6,2,3,-1}};
a[0]=1;
 back(n,1,adj);
}*/















