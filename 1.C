#include<stdio.h>

int main() {
   int a[1000],b[100],i,j,k,l=0,n;
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
           }
       }
   }
   for(i=0;i<l;i++)
   {
       for(j=i+1;j<l;j++)
       {
           if(b[i]>b[j])
           {
               k=b[i];
               b[i]=b[j];
               b[j]=k;
           }
       }
   }
   for(i=0;i<l;i++)
   {
       if(b[i]!=b[i+1])
       {
           printf("%d ",b[i]);
       }
   }
   if(l==0)

      {
         printf("unique");
   }
   return 0;
}
