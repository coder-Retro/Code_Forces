#include<stdio.h>
int main()
{
    int rolls;
    scanf("%d",&rolls);
    int m,mR=0,c,cR=0;
    for(int i=1;i<=rolls;i++)
    {
        scanf("%d%d",&m,&c);
        if(m>c)
            mR++;
        if(m<c)
            cR++;
    }
    if(mR>cR)
        printf("Mishka");
    else if(mR<cR)
        printf("Chris");
    else
        printf("Friendship is magic!^^");
    return 0;
}