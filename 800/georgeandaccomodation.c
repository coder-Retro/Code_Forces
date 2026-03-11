#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int p,q;
    int roomsAvailable=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d",&p,&q);
        if(q-p>1)
            roomsAvailable++;
    }
    printf("%d",roomsAvailable);
    return 0;
}