#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    int l,m,i,count=0;
    scanf("%s %s",a,b);
    l=strlen(a);
    m=strlen(b);
    for(i=0;i<l&&i<m;i++)
    {
        if(a[i]!=b[i])
        ++count;
    }
    if(count==1)
    printf("yes differ by 1 char");
    else
    printf("no");
    return 0;
}
