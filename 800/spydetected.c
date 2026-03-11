#include<stdio.h>
int main()
{
    int cases;
    scanf("%d",&cases);
    int current;
    int ans[cases];
    int spy_detected;
    for(int i=0;i<cases;i++)
    {
        spy_detected=0;
        scanf("%d",&current);
        int arr[cases][current];
        for(int j=0;j<current;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        for(int j=1;j<current-1;j++)
        {
            if(arr[i][j]!=arr[i][j-1]&&arr[i][j]!=arr[i][j+1])
            {
                ans[i]=j+1;
                spy_detected=1;
                break;
            }
        }
        if(spy_detected==0&&arr[i][0]!=arr[i][1]&&arr[i][0]!=arr[i][2])
        {
            ans[i]=1;
            spy_detected=1;
        }
        if(spy_detected==0&&arr[i][current-1]!=arr[i][current-2]&&arr[i][current-1]!=arr[i][current-3])
        {
            ans[i]=current;
        }
    }
    for(int i=0;i<cases;i++)
        printf("%d\n",ans[i]);
    return 0;
}