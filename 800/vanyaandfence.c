#include<stdio.h>
int main()
{
    int n,h;
    int heights;
    int width=0;
    scanf("%d%d",&n,&h);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&heights);
        if(heights>h)
            width+=2;
        else
            width++;
    }
    printf("%d",width);
}