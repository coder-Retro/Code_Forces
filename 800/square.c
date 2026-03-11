#include<stdio.h>
int square(int parameter);
int main()
{
    int cases;
    scanf("%d",&cases);
    int arr[4];
    int ans[cases];
    for(int i=0;i<cases;i++)
    {
        scanf("%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3]);
        if(arr[0]==arr[1]&&arr[1]==arr[2]&&arr[2]==arr[3])
            ans[i]=1;
        else
            ans[i]=0;
    }
    for(int i=0;i<cases;i++)
    {
        if(ans[i]==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}