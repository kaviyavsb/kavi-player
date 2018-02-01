#include <stdio.h>
int main(void) {
      int a[10],i,small,lar,diff;
      for(i=1;i<=5;i++)
      scanf("%d",&a[i]);
      lar=a[1];
      for(i=1;i<=5;i++)
      {
      if(a[i]>lar)
      lar=a[i];
      }
      printf("%d\n",lar);
      small=a[2];
      for(i=1;i<=5;i++)
      {
      if(a[i]<small)
      small=a[i];
      }
      printf("%d\n",small);
      diff=lar-small;
      printf("%d\n",diff);
      return 0;
}
