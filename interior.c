#include<stdio.h>
int main()
{
    int a,b,c,ans;
    scanf("%d %d %d",&a,&b,&c);
    ans=a+b+c;
    if(ans==180)
    printf("it is an interior angle");
    else
    printf("it is not an interior angle");
}
