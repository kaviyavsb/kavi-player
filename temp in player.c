#include<stdio.h>
int main()
{
    int a[10],n,i,count=0,count1=0,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if((a[i]>a[i+1])&&(a[i+1]<a[i+2]))
        ++count;
        else if((a[i]<a[i+1])&&(a[i+1]>a[i+2]))
       ++count1;
        else
        c=0;
    }
   if(count>0||count1>0)
   printf("yes");
   else
   printf("no");
   return 0;
}
   
