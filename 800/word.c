#include<stdio.h>
#include<string.h>
int main()
{
    char word[100];
    scanf("%s",word);
    int lower=0;
    int upper=0;
    for(int i=0;i<strlen(word);i++)
    {
        if(word[i]>=65&&word[i]<=90)
            upper++;
        if(word[i]>=97&&word[i]<=122)
            lower++;
    }
    if(upper>lower)
    {
        for(int i=0;i<strlen(word);i++)
        {
            if(word[i]>=97&&word[i]<=122)
                printf("%c",word[i]-32);
            else
                printf("%c",word[i]);
        }
    }
    else
    {
        for(int i=0;i<strlen(word);i++)
        {
            if(word[i]>=65&&word[i]<=90)
                printf("%c",word[i]+32);
            else
                printf("%c",word[i]);
        }
    }
    return 0;
}