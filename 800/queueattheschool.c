#include<stdio.h>
int main()
{
    int size,seconds;
    scanf("%d%d",&size,&seconds);
    char queue[size];
    scanf("%s",queue);
    for(int i=0;i<seconds;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(queue[j]=='B'&&queue[j+1]=='G')
            {
                queue[j]=queue[j]+queue[j+1];
                queue[j+1]=queue[j]-queue[j+1];
                queue[j]=queue[j]-queue[j+1];
                j++;
            }
        }
    }
    printf("%s",queue);
    return 0;
}