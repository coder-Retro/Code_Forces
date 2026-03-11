#include<stdio.h>
#include<stdbool.h>

// Function Declaration
bool solution(int n);

// Main Function
int main()
{
    int games;
    scanf("%d",&games);
    bool ans[games];
    int number;
    for(int i=0;i<games;i++)
    {
        scanf("%d",&number);
        ans[i]=solution(number);
    }
    for(int i=0;i<games;i++)
    {
        printf("%s\n",(ans[i]==true)?"First":"Second");
    }
}

// Function Definition
bool solution(int n)
{
    if(n%3==0)
        return false;
    if((n+1)%3==0 || (n-1)%3==0)
        return true;
}