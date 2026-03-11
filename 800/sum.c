#include<stdio.h>
int main()
{
    int cases;
    scanf("%d",&cases);
    int a,b,c,answers[cases];
    for(int i=0;i<cases;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a+b==c||b+c==a||a+c==b)
            answers[i]=1;
        else
            answers[i]=0;
    }
    for(int i=0;i<cases;i++)
        if(answers[i]==1)
            printf("YES\n");
        else
            printf("NO\n");
    return 0;
}