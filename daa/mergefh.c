#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void merge(int a[],int low,int mid,int high)
 {
   int i,j,n1,n2,k;
   int b[100];
   i=low;
   j=mid+1;
   k=low;
   
   
   
    while(i<=mid&&j<=high)
    {
      if(a[i]<=a[j])
       b[k++]=a[i++];
      else
       b[k++]=a[j++];
    }
    while(i<=mid)
     b[k++]=a[i++];
    while(j<=high)
     b[k++]=a[j++]; 
     for(k=low;k<=high;k++)
     a[k]=b[k];
 }

void merge_sort(int a[],int low,int high)
{
 if(low<high)
 {
  int mid=(low+high)/2;
  merge_sort(a,low,mid);
  merge_sort(a,mid+1,high);
  merge(a,low,mid,high);
 }
}


int main()
{
  clock_t e,s;
  FILE*fp;
  fp=fopen("merge.txt","w");
  for(int i=0;i<10;i++)
  { 
    fprintf(fp,"%d",rand()%1000);
    putc('\n',fp);
  }
  fclose(fp);
  int a[10],i=0;
  fopen("merge.txt","r");
   while(fscanf(fp,"%d",&a[i])!=EOF)
     i++;
   fclose(fp);  
   printf("\n \tarray elements \n");
    for(i=0;i<10;i++)
   printf("%d ",a[i]);
   
  s=clock();
  merge_sort(a,0,9);
  e=clock();   //merge(a,0,n-1)
 
  float timetaken=(float)(e-s)/CLOCKS_PER_SEC;
   printf("\n\ttime = %f\n",timetaken);
   printf("\n\tsorted list\n");
   for(i=0;i<10;i++)
   printf("%d ",a[i]);
   
   }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
    
   
   

