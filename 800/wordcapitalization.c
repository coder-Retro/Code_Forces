#include<stdio.h>
int main()
{
    char word[1000];
    scanf("%s",word);
    for(int i=0;i<1000;i++)
    {
        if(word[i]=='\0')
            break;
        if(i==0&&word[i]>=97&&word[i]<=122)
            printf("%c",word[0]-32);
        else
            printf("%c",word[i]);
    }
    return 0;
}