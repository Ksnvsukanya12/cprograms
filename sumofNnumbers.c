#include <stdio.h>
void main() {
 int i,n,sum=0 ;   // Write C code here
 printf("enter n");
scanf("%d",&n);
for(i=1;i<=n;++i)
{
    sum=sum+i;
}
printf("the sum is %d",sum);
}
