#include<stdio.h>

int main()
{
    int a[1000],i,j,k,n,l=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==k)
            {
                l=1;
            }
        }
    }
    if(l>0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
