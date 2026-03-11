#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    int test;
    for(int i=0;i<a;i++)
    {
        scanf("%d",&test);
        arr[i]=(test/10)+(test%10);
    }
    for(int i=0;i<a;i++)
        printf("%d\n",arr[i]);
    return 0;
}