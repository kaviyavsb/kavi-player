#include<stdio.h>
int main()
{
    int no,result=0,n,remain,tans=0,ans;
    scanf("%d",&no);
    n=no;
    while(n>0)
    {
        remain=n%10;
        if(remain!=0)
        {
        ans=remain*remain;
        tans=ans+tans;
        }
        n=n/10;
    }
    printf("%d",tans);
    return 0;
   }
