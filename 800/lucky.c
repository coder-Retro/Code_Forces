#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    char arr[7];
    int sum1,sum2;
    int ans[n];
    char *p;
    for(int i=0;i<n;i++)
    {
        scanf("%s",arr);
        p=arr;
        sum1=0,sum2=0;
        sum1=p[0]+p[1]+p[2];
        sum2=p[3]+p[4]+p[5];
        ans[i]=(sum1==sum2)?1:0;
    }
    for(int i=0;i<n;i++)
        printf("%s\n",(ans[i]==1)?"YES":"NO");
}