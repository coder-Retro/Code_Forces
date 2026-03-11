#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    year++;
    while(1)
    {
        if(year%10==(year%100)/10||year%10==(year%1000)/100||year%10==year/1000||(year%100)/10==(year%1000)/100||(year%100)/10==year/1000||(year%1000)/100==year/1000)
            year++;
        else
            break;
    }
    printf("%d",year);
    return 0;
}