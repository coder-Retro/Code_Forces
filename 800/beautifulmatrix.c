#include<stdio.h>
#include<math.h>
int main()
{
    int a[5][5],moves;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {
                moves=abs(i-2)+abs(j-2);
            }
        }
    }
    printf("%d",moves);
    return 0;
}