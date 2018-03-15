    #include<stdio.h>
    #include<math.h>
    int main()
    {
        int a,b,c,ans,tans;
        scanf("%d %d %d",&a,&b,&c);
        ans=pow(a,b);
        tans=ans%c;
        printf("%d",tans);
        return 0;
  }
