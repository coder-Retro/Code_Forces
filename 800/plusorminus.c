#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char answer[n];
    int a,b,c;
    for(int i=0;i<n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a+b==c)
            answer[i]='+';
        else
            answer[i]='-';
    }
    for(int i=0;i<n;i++)
        printf("%c\n",answer[i]);
    return 0;
}