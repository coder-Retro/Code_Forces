#include<stdio.h>
int main()
{
    int cases;
    scanf("%d",&cases);
    int ratings[cases];
    int divisions[cases];
    for(int i=0;i<cases;i++)
    {
        scanf("%d",&ratings[i]);
        if(ratings[i]<=1399)
            divisions[i]=4;
        else if(ratings[i]<=1599)
            divisions[i]=3;
        else if(ratings[i]<=1899)
            divisions[i]=2;
        else
            divisions[i]=1;
    }
    for(int i=0;i<cases;i++)
        printf("Division %d\n",divisions[i]);
    return 0;
}