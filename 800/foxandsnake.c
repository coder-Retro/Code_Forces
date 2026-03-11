#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int row=0;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            if(i%2!=0)
                printf("#");
            else
            {
                if(i%4==0&&j==1)
                    printf("#");
                else if(i%4==0)
                    printf(".");
                else if(i%2==0&&j==b)
                    printf("#");
                else if(i%2==0)
                    printf(".");
            }
        }
        printf("\n");
    }
    return 0;
}