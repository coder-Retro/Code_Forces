#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ans[n];
    int a,b,c,d;
    for(int i=0;i<n;i++)
    {
        ans[i]=0;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(b>a)
            ans[i]+=1;
        if(c>a)
            ans[i]+=1;
        if(d>a)
            ans[i]+=1;
    }
    for(int i=0;i<n;i++)
        printf("%d\n",ans[i]);
    return 0;
}