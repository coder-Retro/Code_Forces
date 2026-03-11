#include<stdio.h>
#include<string.h>
int main()
{
    int words;
    scanf("%d",&words);
    char arr[words][101];
    if(words>=1&&words<=100)
    {
        for(int i=0;i<words;i++)
        {
            scanf("%s",arr[i]);
        }
        for(int i=0;i<words;i++)
        {
            if(strlen(arr[i])>10)
                printf("%c%zu%c\n",arr[i][0],strlen(arr[i])-2,arr[i][strlen(arr[i])-1]);
            else
                printf("%s\n",arr[i]);
        }
    }
    return 0;
}