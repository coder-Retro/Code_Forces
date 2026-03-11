#include<stdio.h>
#include<string.h>
int main()
{
    char line[1001];
    fgets(line,1001,stdin);
    if(strlen(line)!=2)
    {
        char distinct[strlen(line)];
        int detected;
        distinct[0]='{',distinct[1]=',',distinct[2]=' ',distinct[3]='}',distinct[4]='\n';
        for(int i=5;i<strlen(line);i++)
            distinct[i]='0';
        for(int i=0,k=5;line[i]!='\0';i++)
        {
            detected=0;
            for(int j=0;j<strlen(line);j++)
            {
                if(line[i]==distinct[j])
                {
                    detected=1;
                    break;
                }
            }
            if(detected==0)
            {
                distinct[k]=line[i];
                k++;
            }
            if(i==strlen(line)-1)
                distinct[k]='\0';
        }
        printf("%d",strlen(distinct)-5);
    }
    else
    {
        printf("0");
    }
    return 0;
}