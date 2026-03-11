#include<stdio.h>
int main()
{
    int games;
    scanf("%d",&games);
    char results[games];
    scanf("%s",results);
    int a=0,d=0;
    for(int i=0;i<games;i++)
        if(results[i]=='A')
            a++;
        else
            d++;
    printf("%s",(a>d)?"Anton":(a<d)?"Danik":"Friendship");
    return 0;
}