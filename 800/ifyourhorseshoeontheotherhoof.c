#include<stdio.h>
int main()
{
    int arr[4]; // declaring array
    for(int i=0;i<4;i++)
        scanf("%d",&arr[i]);
    int unique=1;
    for(int i=1;i<4;i++)
        if(arr[i]<arr[i-1])
        {
            arr[i]=arr[i]+arr[i-1];
            arr[i-1]=arr[i]-arr[i-1];
            arr[i]=arr[i]-arr[i-1];
            i=0;
        }
    for(int i=1;i<4;i++)
        if(arr[i]!=arr[i-1])
            unique++;
    printf("%d",4-unique);
    return 0;
}