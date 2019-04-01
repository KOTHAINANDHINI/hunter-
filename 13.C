#include<stdio.h>

int main()
{
    char a[2000],b[10000];
    int i,j,k=0,l=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    j=0;
    for(i=l-1;a[i]!='\0';i--)
    {
       b[j]=a[i];
       j++;
    }
    for(i=0;i<l;i++)
    {
        if(a[i]==b[i])
        {
          k++;  
        }                                                                         
    }
    if(k==l)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    return 0;
}
