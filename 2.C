#include<stdio.h>
int main()
{
    int a[1000],temp,i,j,n,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    j=1;
    for(i=0;i<n-1;i++)
    {
        j=j*10;
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i]*j;
        j=j/10;
    }
    printf("%d",s);
    return 0;
}
