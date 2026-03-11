#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int spaces[n];
    int size;
    int currentSpace;
    int maxSpace;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&size);
        int arr[size];
        currentSpace=0;
        maxSpace=0;
        for(int j=0;j<size;j++)
        {
            if(j!=0&&arr[j-1]!=0)
                currentSpace=0;
            scanf("%d",&arr[j]);
            if(arr[j]==0)
            {
                currentSpace++;
                if(currentSpace>maxSpace)
                    maxSpace=currentSpace;
            }
        }
        spaces[i]=maxSpace;
    }
    for(int i=0;i<n;i++)
        printf("%d\n",spaces[i]);
    return 0;
}