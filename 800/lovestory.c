#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);
    int ans[tc],diff;
    char str[11],str1[]="codeforces";
    for(int i=0;i<tc;i++)
    {
        diff=0;
        scanf("%s",str);
        for(int j=0;j<10;j++)
        {
            if(str[j]!=str1[j])
                diff++;
        }
        ans[i]=diff;
    }
    for(int i=0;i<tc;i++)
        printf("%d\n",ans[i]);
    return 0;
}