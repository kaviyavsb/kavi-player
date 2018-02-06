#include <stdio.h>
int main(void) {
	int n,a[5],b[5],i,j;
	scanf("%d",&n);
	for(i=1;i<=5;i++)
	scanf("%d",&a[i]);
	for(j=1;j<=5;j++)
	scanf("%d",&b[j]);
	for(i=1;i<=5;i++)
	for(j=1;j<=5;j++)
	{
		if(a[i]==b[j])
		printf("%d\n",a[i]);
	}
	return 0;
}
