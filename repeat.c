#include <stdio.h>
int main(void) {
	int a[10],i,n,k,count=0;
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	{
	if(a[i]==k)
	{
	++count;
	}
	}
	if(count>1)
	printf(" yes %d",count);
	else
	printf("no");
	return 0;
}
