#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    char stones[num];
    scanf("%s",stones);
    int take=0;
    for(int i=1;i<num;i++)
        if(stones[i]==stones[i-1])
            take++;
    printf("%d",take);
    return 0;
}