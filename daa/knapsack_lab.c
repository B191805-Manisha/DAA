#include <stdio.h>
void knapsack(int n,int w,int wt[],int val[]);
int max(int x,int y);
void main()
{
int n,w;
printf("Enter the number of items and total weight ");
scanf("%d%d",&n,&w);
int wt[n],val[n];
printf("Enter the weights ");
for(int i=0;i<n;i++)
scanf("%d",&wt[i]);
printf("Enter the values ");
for(int i=0;i<n;i++)
scanf("%d",&val[i]);
knapsack(n,w,wt,val);
}

void knapsack(int n,int w,int wt[],int val[])
{
int a[n+1][w+1];
for(int i=0;i<=n;i++)
{
 for(int j=0;j<=w;j++)
  a[i][j]=-1;
 }
 
 for(int i=0;i<=n;i++)
 {
   for(int j=0;j<=w;j++)
   {
    if(i==0 || j==0)
    a[i][j]=0;
    else if(wt[i-1]<=j)
    a[i][j]=max(val[i-1]+a[i-1][j-wt[i-1]],a[i-1][j]);
    else a[i][j]=a[i-1][j];
    }
  }
  
  for(int i=0;i<=n;i++)
{
printf("\n");
 for(int j=0;j<=w;j++)
  printf("%d\t",a[i][j]);
 }
 }
 
 int max(int x,int y)
 {
if(x>y)
return x;
else return y;
}
  
 
