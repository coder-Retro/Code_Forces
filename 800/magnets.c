#include<stdio.h>
int main()
{
    int magnets,groups=1;
    scanf("%d",&magnets);
    char arr[magnets][2];
    for(int i=0;i<magnets;i++)
    {
        scanf("%s",arr[i]);
    }
    for(int i=0;i<magnets-1;i++)
    {
        if(arr[i][0]!=arr[i+1][0])
            groups++;
    }
    printf("%d",groups);
    return 0;
}