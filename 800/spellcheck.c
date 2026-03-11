#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char str1[5]="Timur";
    scanf("%d",&n);
    int ans[n];
    for(int i=0;i<n;i++)
    {
        int flag=1;
        int freq[256]={0};
        int size;
        scanf("%d",&size);
        char str2[size];
        scanf("%s",str2);
        if(strlen(str2)==5)
        {
            for(int k=0;k<5;k++)
            {
                freq[(unsigned char)str1[k]]++;
                freq[(unsigned char)str2[k]]--;
            }
            for(int j=0;j<256;j++)
            {
                if(freq[j]!=0)
                {
                    ans[i]=0;
                    flag=0;
                    break;
                }
            }
            if(flag==1)
                ans[i]=1;
        }
        else
            ans[i]=0;
    }
    for(int i=0;i<n;i++)
        printf("%s\n",(ans[i]==1)?"YES":"NO");
    return 0;
}