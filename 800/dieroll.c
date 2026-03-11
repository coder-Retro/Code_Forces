#include<stdio.h>
int main()
{
    int a,b;
    int wins;
    scanf("%d%d",&a,&b);
    if(a>b)
        wins=(6-a)+1;
    else
        wins=(6-b)+1;
    if(wins==6)
        printf("1/1");
    if(wins==5)
        printf("5/6");
    if(wins==4)
        printf("2/3");
    if(wins==3)
        printf("1/2");
    if(wins==2)
        printf("1/3");
    if(wins==1)
        printf("1/6");
    if(wins==0)
        printf("0/1");
}