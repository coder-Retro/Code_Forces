#include<stdio.h>
#include<string.h>
int main()
{
    int cases;
    scanf("%d",&cases);
    int ans[cases];
    int size;
    for(int i=0;i<cases;i++)
    {
        scanf("%d",&size);
        char s[size+1],t[size+1];
        scanf("%s%s",s,t);
        for(int i=0;s[i+1]!='\0';i++)
        {
            if(s[i]>s[i+1])
            {
                s[i]+=s[i+1];
                s[i+1]=s[i]-s[i+1];
                s[i]-=s[i+1];
                i=-1;
            }
            if(t[i]>t[i+1])
            {
                t[i]+=t[i+1];
                t[i+1]=t[i]-t[i+1];
                t[i]-=t[i+1];
                i=-1;
            }
        }
        if(strcmp(s,t)==0)
            ans[i]=1;
        else
            ans[i]=0;
    }
    for(int i=0;i<cases;i++)
        if(ans[i]==1)
            printf("YES\n");
        else
            printf("NO\n");
    return 0;
}