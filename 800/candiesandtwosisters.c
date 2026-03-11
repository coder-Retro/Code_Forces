#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    int ans[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>2)
        {
            for(int j=1;j<=arr[i]/2;j++)
            {
                ans[i]=arr[i]-j-1;
            }
        }
        else
            ans[i]=0;
    }
    for(int i=0;i<a;i++)
        printf("%d\n",ans[i]);
    return 0;
}