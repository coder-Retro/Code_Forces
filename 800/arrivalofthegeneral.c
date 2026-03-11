#include<stdio.h>
#include<stdbool.h>
int main()
{
    int soldiers;
    scanf("%d",&soldiers);
    int line[soldiers];
    for(int i=0;i<soldiers;i++)
        scanf("%d",&line[i]);
    int swaps=0;
    int min=101,max=-1;
    int min_pos,max_pos;
    bool minD=false,maxD=false;
    for(int i=0;i<soldiers;i++)
    {
        if(line[i]<=min)
        {
            min=line[i];
            min_pos=i;
        }
        if(line[i]>max)
        {
            max=line[i];
            max_pos=i;
        }
    }
    for(int i=0;i<soldiers;i++)
    {
        if(i==min_pos&&minD==false)
        {
            swaps+=(soldiers-1-i);
            minD=true;
        }
        if(i==max_pos&&maxD==false)
        {
            swaps+=i;
            maxD=true;
        }
        if(minD==true&&maxD==true)
            break;
    }
    if(min_pos<=max_pos)
        swaps--;
    printf("%d",swaps);
    return 0;
}