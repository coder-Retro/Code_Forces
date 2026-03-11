#include<stdio.h>
#include<conio.h>
int main()
{
    int levels;
    scanf("%d",&levels);
    int xlevels;
    scanf("%d",&xlevels);
    int x[xlevels];
    for(int i=0;i<xlevels;i++)
    {
        scanf("%d",&x[i]);
    }
    int ylevels;
    scanf("%d",&ylevels);
    int y[ylevels];
    int i;
    for(i=0;i<ylevels;i++)
    {
        scanf("%d",&y[i]);
    }
    int size=xlevels+ylevels;
    int final[size];
    for(i=0;i<size;i++)
    {
        if(i<xlevels)
            final[i]=x[i];
        else
            final[i]=y[i-xlevels];
    }
    for(i=1;i<size;i++)
    {
        if(final[i]<final[i-1])
        {
            final[i]+=final[i-1];
            final[i-1]=final[i]-final[i-1];
            final[i]-=final[i-1];
            i=0;
        }
    }
    int win=1;
    int count=0;
    for(i=0;i<size-1;i++)
    {
        if(final[i+1]>final[i]+1)
            win=0;
    }
    if(final[0]==1&&win==1&&final[size-1]==levels)
        printf("I become the guy.");
    else
        printf("Oh, my keyboard!");
    return 0;
}