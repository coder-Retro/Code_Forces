#include<stdio.h>
#include<stdbool.h>

// Function Declarations
bool solution(const char *str);

// Main Function
int main()
{
    int n;
    scanf("%d",&n);
    bool ans[n];
    char string[4];
    for(int i=0;i<n;i++){ scanf("%s",string); ans[i]=solution(string); }
    for(int i=0;i<n;i++) printf("%s\n",(ans[i]==true)?"YES":"NO");
    return 0;
}

// Function Definitions
bool solution(const char *str)
{
    if(str[0]=='a'||str[1]=='b'||str[2]=='c')
        return true;
    return false;
}