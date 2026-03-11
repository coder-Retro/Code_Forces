#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        int b,c;
        scanf("%d%d",&b,&c);
        if(b%c!=0)
        {
            arr[i]=(c-b%c);
        }
        else
            arr[i]=0;
    }
    for(int i=0;i<a;i++)
        printf("%d\n",arr[i]);
    return 0;
}