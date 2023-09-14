#include <stdio.h>
#include <stdlib.h>
int cc(int n,int s,int wt[]);
void main()
{
int n,s;
printf("Enter n and s :");
scanf("%d%d",&n,&s);

int wt[n];
printf("Enter the weights :");
for(int i=0;i<n;i++)
  scanf("%d",&wt[i]);
  
cc(n,s,wt);
//printf("The result is :%d",r);
}

int cc(int n,int s,int wt[])
{
int a[n+1][s+1];
for(int i=0;i<=n;i++)
{
for(int j=0;j<=s;j++)
a[i][j]=-1;
}
for(int i=0;i<=n;i++)
{
for(int j=0;j<=s;j++)
{
if(i==0){
a[i][j]=0;continue;}
if(j==0){
a[i][j]=1;continue;}
if(wt[i-1]<=j)
a[i][j]=a[i][j-wt[i-1]]+a[i-1][j];
else a[i][j]=a[i-1][j];
}
}
for(int i=0;i<=n;i++)
{
printf("\n");
for(int j=0;j<=s;j++)
printf("%d\t",a[i][j]);
}
}
