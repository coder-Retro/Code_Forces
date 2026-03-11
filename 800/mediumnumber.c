#include<stdio.h>
int main()
{
    int cases;
    scanf("%d",&cases);
    int arr[cases][3];
    int med[cases];
    for(int i=0;i<cases;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        if((arr[i][0]>arr[i][1]&&arr[i][0]<arr[i][2])||(arr[i][0]<arr[i][1]&&arr[i][0]>arr[i][2]))
            med[i]=arr[i][0];
        else if((arr[i][1]>arr[i][0]&&arr[i][1]<arr[i][2])||(arr[i][1]<arr[i][0]&&arr[i][1]>arr[i][2]))
            med[i]=arr[i][1];
        else
            med[i]=arr[i][2];
    }
    for(int i=0;i<cases;i++)
        printf("%d\n",med[i]);
    return 0;
}