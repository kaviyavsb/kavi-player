#include <stdio.h>
int main(void) {
 int a[10],n,k,i; 
 scanf("%d %d",&n,&k);
 for(i=1;i<=n;i++)
 scanf("%d",&a[i]);
 for(i=1;i<=n;i++)
 {
 	if(a[i]<k)
 	printf("the numbers less than k are %d\n",a[i]);
 }
	return 0;
}
