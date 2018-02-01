#include <stdio.h>
int main(void) {
	int n,k,i,count=0;
	scanf("%d %d",&n,&k);
	for(i=2;i<=100;i++)
	if(n%i==0)
	{
	if(k%i==0)
	{
	printf("%d",i);
	}
	}
	return 0;
}
