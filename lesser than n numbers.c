#include <stdio.h>
int main(void) {
	int n,a[5],i;
	scanf("%d",&n);
	for(i=1;i<=5;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=5;i++)
	{
	if(a[i]<n)
	printf("%d\n",a[i]);
	}
	return 0;
}
