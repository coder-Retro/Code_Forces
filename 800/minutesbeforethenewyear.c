#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ans[n];
    int a,b;
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        ans[i]=(23-a)*60+(60-b);
    }
    for(int i=0;i<n;i++)
        printf("%d\n",ans[i]);
    return 0;
}