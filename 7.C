#include<stdio.h>

int main() {
   int a[1000],b[100],i,j,k=0,l=0,n;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       if(i%2!=0&&a[i]%2==0)
       {
           printf("%d ",a[i]);
       }
       if(i%2==0&&a[i]%2!=0)
       {
           printf(" %d ",a[i]);
       }
   }
   return 0;
}
