#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ans[n];
    int floor;
    int app,appOnEachFloor;
    for(int i=0;i<n;i++)
    {
        floor=2;
        scanf("%d%d",&app,&appOnEachFloor);
        if(app<3)
        {
            ans[i]=1;
            continue;
        }
        app-=2;
        while(app>appOnEachFloor)
        {
            app-=appOnEachFloor;
            floor++;
        }
        ans[i]=floor;
    }
    for(int i=0;i<n;i++)
        printf("%d\n",ans[i]);
    return 0;
}