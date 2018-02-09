#include <stdio.h>
int main(void) {
	int a[10],i,n,count=0,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	for(j=i+1;j<=n;j++)
	{
               if(a[i]==a[j])
               ++count;
	}
	if(count>0)
	printf("yes");
	else
	printf("no");
	return 0;
}
