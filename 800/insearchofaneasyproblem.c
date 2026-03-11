#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(i==n-1&&a==0)
            printf("EASY");
        if(a==1)
        {
            printf("HARD");
            break;
        }
    }
    return 0;
}