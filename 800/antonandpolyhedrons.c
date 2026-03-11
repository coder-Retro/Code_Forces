#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char shapes[n][13];
    int faces=0;
    for(int i=0;i<n;i++)
    {
        scanf("%s",shapes[i]);
        if(shapes[i][0]=='T')
            faces+=4;
        else if(shapes[i][0]=='C')
            faces+=6;
        else if(shapes[i][0]=='O')
            faces+=8;
        else if(shapes[i][0]=='D')
            faces+=12;
        else
            faces+=20;
    }
    printf("%d",faces);
    return 0;
}