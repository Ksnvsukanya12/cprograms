#include<stdio.h>
void main()
{
    int i,n;
    printf("enter n");
    scanf("%d",&n);
    for(i=0;i<=n;++i)
    {
        printf("%d",i);
    }
    for(i=10;i>=n;--i)
    {
        printf("%d",i);
    }
}

