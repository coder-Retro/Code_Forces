#include<stdio.h>
int main()
{
    char players[101];
    scanf("%s",players);
    int consecutive=1;
    int danger=0;
    for(int i=1;players[i]!='\0';i++)
    {
        if(players[i]==players[i-1])
            consecutive++;
        else
            consecutive=1;
        if(consecutive==7)
        {
            danger=1;
            break;
        }
    }
    if(danger==0)
        printf("NO");
    else
        printf("YES");
    return 0;
}