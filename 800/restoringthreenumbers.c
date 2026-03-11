#include<stdio.h>
int main()
{
    int arr[4];
    for(int i=0;i<4;i++)
        scanf("%d",&arr[i]);
    for(int i=1;i<4;i++)
        if(arr[i]>arr[i-1])
        {
            arr[i]=arr[i]+arr[i-1];
            arr[i-1]=arr[i]-arr[i-1];
            arr[i]=arr[i]-arr[i-1];
            i=0;
        }
    int abc=arr[0];
    int bc=arr[1];
    int a=abc-bc;
    int b=arr[3]-a;
    int c=arr[2]-a;
    printf("%d %d %d",a,b,c);
}