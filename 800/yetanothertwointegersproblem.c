#include<stdio.h>

// Function Declaration
int solution(const int a,const int b);

// Main Function
int main()
{
    int cases;
    scanf("%d",&cases);
    int ans[cases];
    int a,b;
    for(int i=0;i<cases;i++)
    {
        scanf("%d%d",&a,&b);
        ans[i]=solution(a,b);
    }
    for(int i=0;i<cases;i++)
        printf("%d\n",ans[i]);
    return 0;
}

// Function Definition
int solution(const int a,const int b)
{
    int moves=0;
    moves=(a-b)/10;
    if(moves<0) moves*=(-1);
    if((a-b)%10!=0) moves++;
    return moves;
}