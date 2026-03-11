#include<stdio.h>

// Function Declaration
int solution(int weight);

// Main Function
int main()
{
    int weight;
    scanf("%d",&weight);
    printf("%s",(solution(weight))?"YES":"NO");
    return 0;
}

// Function Definition
int solution(int weight)
{
    if(weight%2==0&&weight>2)
        return 1;
    return 0;
}