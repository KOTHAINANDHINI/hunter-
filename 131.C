#include<stdio.h>

int main() 
{
    int a[1000],b[1000],c[1000],i,j,k,l=0,n,t,d[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
         if(a[i]<=a[j])
         {
             k=a[i];
             a[i]=a[j];
             a[j]=k;
         }
        }
    }
    j=0;
    for(i=0;i<n/2;i++)
    {
        b[j]=a[i];
        j++;
    }
    t=j;
    for(i=n/2;i<n;i++)
    {
       c[l]=a[i];
       l++;
    }
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(c[i]>=c[j])
            {
                k=c[i];
                c[i]=c[j];
                c[j]=k;
            }
        }
    }
    i=0;
    j=0;
    while(i<t||j<l)
    {
         d[k]=b[i];
         i++;
         k++;
         d[k]=c[j];
         k++;
         j++;   
       
    }
    for(i=0;i<k;i++)
    {
        if(d[i]!=0)
        {
            printf("%d ",d[i]);
        }
    }
    return 0;
}
