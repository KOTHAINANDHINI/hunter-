#include<stdio.h>

int main()
{
    char a[1000];
    int i,j,k,n,l=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                a[j]='$';
            }
        }
    }
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!='$')
        printf("%c",a[i]);
    }
    return 0;
}
