#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,c;
    int ans[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a<b&&b<c)
            ans[i]=1;
        else if(a<b&&b>c)
            ans[i]=2;
        else
            ans[i]=3;
    }
    for(int i=0;i<n;i++)
        printf("%s\n",(ans[i]==1)?"STAIR":(ans[i]==2)?"PEAK":"NONE");
    return 0;
}