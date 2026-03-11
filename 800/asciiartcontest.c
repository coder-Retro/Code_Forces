#include<stdio.h>
#include<math.h>
int main()
{
    int input[3];
    for(int i=0;i<3;i++)
        scanf("%d",&input[i]);
    for(int i=0;i<2;i++)
        if(input[i]>input[i+1])
        {
            input[i]+=input[i+1];
            input[i+1]=input[i]-input[i+1];
            input[i]-=input[i+1];
            i=-1;
        }
    if(abs(input[0]-input[2])>9)
        printf("check again");
    else
        printf("final %d",input[1]);
    return 0;
}