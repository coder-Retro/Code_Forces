#include<stdio.h>
#include<string.h>
int main()
{
    char word[101];
    scanf("%s",word);
    char attempt[101];
    scanf("%s",attempt);
    char *a,*b;
    int i=1;
    for(a=&word[0],b=&word[strlen(word)-1];a<b;a++,b--,i++)
    {
        *a ^= *b;
        *b = *a ^ *b;
        *a ^= *b;
    }
    printf("%s",(strcmp(attempt,word)==0)?"YES":"NO");
    return 0;
}