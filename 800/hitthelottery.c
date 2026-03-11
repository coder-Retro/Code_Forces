#include<stdio.h>
int minBills(int remaining);
int main()
{
    int withdraw;
    scanf("%d",&withdraw);
    withdraw=minBills(withdraw);
    printf("%d",withdraw);
}
int minBills(int remaining)
{
    int bills[]={1,5,10,20,100};
    int count=0;
    for(int i=4;i>=0;i--)
    {
        if(remaining>=bills[i])
        {
            remaining-=bills[i];
            count++;
            i++;
        }
    }
    return count;
}