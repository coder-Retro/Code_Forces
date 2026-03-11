#include<stdio.h>
int main()
{
    char str[101];
    scanf("%s",str);
    for(int i=2;str[i-1]!='\0';i+=2)
    {
        if(str[i]<str[i-2])
        {
            str[i]+=str[i-2];
            str[i-2]=str[i]-str[i-2];
            str[i]-=str[i-2];
            i=0;
        }
    }
    puts(str);
    return 0;
}