#include<stdio.h>
void swap(char *a,char *b);
int main()
{
    int n;
    scanf("%d",&n);
    char words[n][4];
    char words2[n][4];
    for(int i=0;i<n;i++)
    {
        scanf("%s%s",words[i],words2[i]);
        swap(&words[i][0],&words2[i][0]);
    }
    for(int i=0;i<n;i++)
        printf("%s %s\n",words[i],words2[i]);
}
void swap(char *a,char *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}