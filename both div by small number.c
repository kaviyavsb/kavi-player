#include<stdio.h>
int main() {
   int a,b,i,n;
   scanf("%d %d %d",&n,&a,&b);
   for(i=2;i<=n;i++)
   {
       if((i%a==0)&&(i%b==0))
       {
       printf("%d",i);
       break;
       }
    }
    return 0;
}
