#include <stdio.h>
int main(void) {
	int k,a[5],i;
	scanf("%d",&k);
	for(i=1;i<=100;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=100;i++)
	if(a[i]==k)
	printf("yes");
	return 0;
}
