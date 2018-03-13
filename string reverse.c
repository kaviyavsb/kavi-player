#include<stdio.h>
#include<string.h>
int main() {
   char a[30],ans[30];
   int l,i;
   scanf("%s",a);
   l=strlen(a);
   for(i=0;a[i]!='\0';i++)
   {
   ans[i]=a[l-i-1];
   printf("%c",ans[i]);
   }
   return 0;
}
