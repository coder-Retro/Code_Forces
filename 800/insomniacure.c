#include<stdio.h>
int main()
{
    int arr[4],d;
    for(int i=0;i<4;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&d);
    int dCopy=d;
    int dragons[d];
    for(int i=0;i<d;i++)
        dragons[i]=i+1;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<d;j++)
        {
            if(dragons[j]%arr[i]==0)
            {
                dragons[j]+=dragons[d-1];
                dragons[d-1]=dragons[j]-dragons[d-1];
                dragons[j]-=dragons[d-1];
                d--;
                j--;
            }
        }
    }
    printf("%d",dCopy-d);
    return 0;
}