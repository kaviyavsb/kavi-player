#include<stdio.h>
#include<string.h>
int main() {
 char a[20];
 int l,i;
 scanf("%s",a);
 l=strlen(a);
 for(i=0;i<l;i++)
 {
     if(a[i]>='a'&&a[i]<='z')
     printf("%c",(a[i]-32));
     else if(a[i]>='A'&&a[i]<='z')
     printf("%c",(a[i]+32));
     else
     printf("%c",a[i]);
}
return 0;
}
