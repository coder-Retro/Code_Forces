#include<stdio.h>
int main()
{
    long long a;
    int lucky=0;
    int digits=0;
    scanf("%lld",&a);
    while(a>0)
    {
        if(a%10==4||a%10==7)
        {
            lucky=1;
            digits++;
        }
        a/=10;
    }
    if(lucky==1&&(digits==4||digits==7))
        printf("YES");
    else
        printf("NO");
    return 0;
}