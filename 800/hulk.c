#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        if(i%2!=0)
            if(i!=a)
                printf("I hate that ");
            else
                printf("I hate it");
        else
            if(i!=a)
                printf("I love that ");
            else
                printf("I love it");
    }
}