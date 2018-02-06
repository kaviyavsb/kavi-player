#include <stdio.h>
int main(void) {
 int a[10],n,k,i,j,temp; 
 scanf("%d %d",&n,&k);
 for(i=1;i<=n;i++)
 scanf("%d",&a[i]);
 for(i=1;i<=n;i++)
 {
 for(j=i+1;j<=n;j++)
 {
  if(a[i]>a[j])
   {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    }
  }
 if(a[i]<k)
 printf("%d\t",a[i]);
 }
 return 0;
}
