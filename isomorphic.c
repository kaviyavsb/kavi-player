#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10];
    int i,l,m,j,s1,s2,c=0;
    scanf("%s %s",a,b);
    l=strlen(a);
    m=strlen(b);
    if(l==m)
    {
        for(i=0;i<l;i++)
        {
            for(j=i+1;j<l;j++)
            {
            s1=a[i]-a[j];
            s2=b[i]-b[j];
            if(s1==s2)
            c=0;
            else
            c=1;
            }
        }}
  else
        printf("no");
        if(c==1)
        printf("no");
         else
      printf("yes");
      return 0;
}
