// Online C compiler to run C program online
#include <stdio.h>
void main()
{
    int n,sum=0,rem;
    printf("enter the value of n");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("the sum is %d",sum);
}
