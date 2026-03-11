#include<stdio.h>
int main()
{
    int problems,arr[3],solvable=0,sum;
    scanf("%d",&problems);
    for(int i=1;i<=problems;i++)
    {
        sum=0;
        for(int i=0;i<3;i++)
        {
            scanf("%d",&arr[i]);
            sum+=arr[i];
        }
        if(sum>1)
            solvable++;
    }
    printf("%d",solvable);
    return 0;
}