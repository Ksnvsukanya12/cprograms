/ Online C compiler to run C program online
#include <stdio.h>
void main()
{
int n,i,count=0;
printf("enter n");
scanf("%d",&n);
for(i=0;i<=n;++i)
{
    if(n%i==0)
    {
    count++;
    }
}
if(count==2)
{
    printf("prime");
}
else
{
    printf("notprime");
}
}
