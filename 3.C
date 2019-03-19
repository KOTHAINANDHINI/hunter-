#include<stdio.h>

int main() {
   int a[1000],i,l=0,n;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       if(i==a[i])
       {
           printf("%d ",a[i]);
           l++;
       }
   }
   if(l==0)
   printf("-1");
   return 0;
}
