#include<stdio.h>
#include<math.h>
int main()
{
    long int a,b,c,ans,tans;
    scanf("%ld %ld %ld",&a,&b,&c);
    ans=pow(a,b);
    printf("%ld",(ans%c));
    return 0;
 }
