#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int moves;
    scanf("%d",&moves);
    while(moves>0)
    {
        if(a%10!=0)
            a--;
        else
            a/=10;
        moves--;
    }
    printf("%d",a);
    return 0;
}