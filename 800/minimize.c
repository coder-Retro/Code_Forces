#include<stdio.h>
int main()
{
    int cases;
    scanf("%d",&cases);
    int c[cases];
    int a,b;
    for(int i=0;i<cases;i++)
    {
        scanf("%d%d",&a,&b);
        c[i]=b-a;
    }
    for(int i=0;i<cases;i++)
        printf("%d\n",c[i]);
    return 0;
}