#include<stdio.h>
int main()
{
    int n,k,advancements=0;
    scanf("%d%d",&n,&k);
    if(n>=1&&n<=50)
        if(k<=n)
        {
            int arr[n];
            for(int i=0;i<n;i++)
                scanf("%d",&arr[i]);
            for(int i=0;i<n;i++)
                if(arr[i]>=arr[k-1]&&arr[i]!=0)
                    advancements++;
            printf("%d",advancements);    
        }
    return 0;
}