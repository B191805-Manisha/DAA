#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int partition(int a[],int low,int high)
{
  int pivot=low;
  int i=low,j=high,t;
  while(i<j)
  {
    while(a[i]<=a[pivot])
     i++;
     while(a[j]>a[pivot])
     j--;
     if(i<j)
     {
       t=a[i];
       a[i]=a[j];
       a[j]=t;
     }
  }
   t=a[pivot];
       a[pivot]=a[j];
       a[j]=t;
   return j;
}

void qs(int a[],int low,int high)
{
  int pivot;
  if(low<high)
  {
  pivot=partition(a,low,high);
  qs(a,0,pivot-1);
  qs(a,pivot+1,high);
}}
 
 int main()
 {
    clock_t e,s;
    int a[15],i;
    FILE *kp;
    kp=fopen("quick.txt","w");
    for(i=0;i<15;i++)
    {
       fprintf(kp,"%d",rand()%100);
       putc('\n',kp);
    }
    fclose(kp);
    i=0;
    fopen("quick.txt","r");
    while(fscanf(kp,"%d",&a[i])!=EOF)
    i++;
    fclose(kp);
    printf("\n\tarray elements\n");
    for(i=0;i<15;i++)
    printf("%d ",a[i]);
    s=clock();
    qs(a,0,14);
    e=clock();
    float tt=(float)e-s/CLOCKS_PER_SEC;
    printf("\n\t time= %f\n",tt);
    printf("\n\t sorted array\n\n");
    for(i=0;i<15;i++)
    printf("%d ",a[i]);
 }












