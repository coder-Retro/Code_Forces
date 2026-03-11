#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ans[n];
    int a,b,c;
    for(int i=0;i<n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a+b>9||a+c>9||b+c>9)
            ans[i]=1;
        else
            ans[i]=0;
    }
    for(int i=0;i<n;i++)
        printf("%s\n",(ans[i]==1)?"YES":"NO");
    return 0;
}