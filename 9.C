#include<stdio.h>

int main() {
   int a[1000],i,j,n;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
          if(a[i]+a[j]==0)
          {
              printf("%d %d",a[i],a[j]);
              printf("\n");
          }
       }
   }
   return 0;
}
