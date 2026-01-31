#include<stdio.h>
#include<stdbool.h>

// Function Declaration
bool solution(const char test);

// Main Function
int main()
{
    int cases;
    scanf("%d",&cases);
    bool ans[cases];
    char current;
    for(int i=0;i<cases;i++)
    {
        scanf(" %c",&current);
        ans[i]=solution(current);
    }
    for(int i=0;i<cases;i++)
        printf("%s\n",(ans[i]==true)?"YES":"NO");
    return 0;
}

// Function Definition
bool solution(const char test)
{
    char arr[]="codeforces";
    for(int i=0;i<10;i++)
    {
        if(test==arr[i])
            return true;
    }
    return false;
}