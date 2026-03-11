#include<stdio.h>

// Function Declaration
int solution(const char *ptr,int number);

// Main Function
int main()
{
    int x=0,ops;
    scanf("%d",&ops);
    char arr[4];
    if(ops>=1&&ops<=150)
    {
        for(int i=0;i<ops;i++)
        {
            scanf("%s",arr);
            x=solution(arr,x);
        }
        printf("%d",x);
    }
    return 0;
}

// Function Definition
int solution(const char *ptr,int number)
{
    if(ptr[1]=='+')
        return number+1;
    else
        return number-1;
}