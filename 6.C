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
       for(j=i+1;j<n;j++)
       {
           if(a[i]==a[j])
           {
               b[l]=a[i];
               l++;
               k++;
           }
       }
   }
   if(k>0)
   {
        printf("%d",b[0]);
   }
   if(k==0)
   {
       printf("unique");
   }
   return 0;
}
