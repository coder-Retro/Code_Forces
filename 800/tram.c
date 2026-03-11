#include<stdio.h>
void update(int *stops,int *current,int *capacity);
int main()
{
    int stops;
    scanf("%d",&stops);
    int capacity=0;
    int current=0;
    update(&stops,&current,&capacity);
    printf("%d",capacity);
}
void update(int *stops,int *current,int *capacity)
{
    int exit;
    int enter;
    for(int i=1;i<=*stops;i++)
    {
        scanf("%d%d",&exit,&enter);
        *current+=(enter-exit);
        if(*current>*capacity)
            *capacity=*current;
    }
}