#include <stdio.h>
int main(void) {
	int n,i,ans1=1,k,ans2=1,sub,ans;
	scanf("%d %d",&n,&k);
	for(i=n;i>=1;i--)
	{
	ans1=ans1*i;
	}
	sub=n-k;
	for(i=sub;i>=1;i--)
	{
	ans2=ans2*i;
	}
	ans=ans1/ans2;
	printf("%d",ans);
	return 0;
}
