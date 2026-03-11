#include<stdio.h>
int main()
{
    char name[100];
    char distinct[100];
    int add=1;
    scanf("%s",name);
    for(int i=0;i<100;i++)
        distinct[i]='0';
    for(int i=0;name[i]!='\0';i++)
    {
        add=1;
        for(int j=0;j<100;j++)
        {
            if(name[i]==distinct[j])
            {
                add=0;
                break;
            }
        }
        if(add==1)
            distinct[i]=name[i];
    }
    int total=0;
    for(int i=0;i<100;i++)
        if(distinct[i]!='0')
            total++;
    if(total%2==0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
}