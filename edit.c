#include <stdio.h>
int main(void) {
	int a[5],i,j,count=0;
	for(i=1;i<=5;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=5;i++)
	for(j=i+1;j<=5;j++)
	if((a[j]<a[i])&&(a[j]>a[i+2]))
            {
            ++count;
            break;
            }
	if(count!=0)
	printf("it is not sorted");
            else
            printf("it is sorted");
	
	return 0;
}

