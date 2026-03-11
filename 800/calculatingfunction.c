#include<stdio.h>
int main()
{
    long long a;
    scanf("%lld",&a);
    printf("%lld",(a%2==0)?a/2:-1*((a+1)/2));
    return 0;
}