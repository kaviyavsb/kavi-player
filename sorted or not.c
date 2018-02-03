#include <stdio.h>
int main(void) {
	int a[5],i,j,count=0;
	for(i=1;i<=5;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=5;i++)
	{
	for(j=i+1;j<=5;j++)
	{
	if(a[j]<a[i])
            {
           ++count;
           break;
            }
	}
	}
	if(count==0)
	printf("yes");
	else 
	printf("no");
	return 0;
}


