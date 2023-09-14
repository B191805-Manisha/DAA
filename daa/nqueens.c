#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int a[10];
int is_safe(int index,int val)
 {
   for(int i=1;i<index;i++)
    {
      if(a[i]==val || abs((index)-i)==abs(val-a[i]) )
       return false;
    }
    return true;
 }
 void print(int n)
 {
  for(int i=1;i<=n;i++)
   printf("%d\t",a[i]);
   printf("\n");
 }

void nqueens(int INDEX,int n)
 {
   if(INDEX==n+1)
   { 
     print(n);
     return;
   } 
       for(int i=1;i<=n;i++)
        {
          if(is_safe(INDEX,i))
           {
             a[INDEX]=i;
            
             nqueens(INDEX+1,n);
            }
        } 
 }
 
 int main()
  {
    int n,i;
     printf("enter n value : ");
     scanf("%d",&n);
 
    nqueens(1,n);
   }
 
 
 
 
