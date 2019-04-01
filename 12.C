#include<stdio.h>

int main()
{
    int a[1900],i,j,k,n,max=0,p,m;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        max=a[0];
        for(j=0;j<n;j++)
        {
            if(a[j]>max)
            {
                max=a[j];
                p=j;
            }
        }
        a[p]=0;
    }
    printf("%d",max);
    return 0;
}
