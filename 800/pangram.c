#include<stdio.h>
int main()
{
    int length;
    scanf("%d",&length);
    char word[length];
    scanf("%s",word);
    int detected;
    int pangram=1;
    for(char a='A';a<='Z';a++)
    {   
        detected=0;
        for(int i=0;i<length;i++)
        {
            if(word[i]==a||word[i]==(char)a+32)
            {
                detected=1;
                break;
            }
        }
        if(detected==0)
        {
            pangram=0;
            break;
        }
    }
    printf("%s",(pangram==1)?"YES":"NO");
    return 0;
}