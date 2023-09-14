#include <stdio.h>
int cc(int n,int w,int wt[]);
void main()
{
int n,w;
printf("Enter the number of items and total weight ");
scanf("%d%d",&n,&w);
int wt[n];
printf("Enter the weights ");
for(int i=0;i<n;i++)
scanf("%d",&wt[i]);
cc(n,w,wt);
//printf("The result is %d",r);
}

int cc(int n,int w,int wt[])
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

if(j==0)
a[i][j]=1;
if(i==0)
a[i][j]=0;
if(wt[i-1]<=j)
a[i][j]=a[i][j-wt[i-1]]+a[i-1][j];
else a[i][j]= a[i-1][j];
}
}
for(int i=0;i<=n;i++)
{
printf("\n");
 for(int j=0;j<=w;j++)
  printf("%d\t",a[i][j]);
 }
 }

