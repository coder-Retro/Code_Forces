#include<stdio.h>

// Function Declarations
int solution(const int *arr,const int size);

// Main Function
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
        scanf("%d",arr+i);
    int answer=solution(arr,size);
    printf("%d",answer);
    return 0;
}

// Function Definitions
int solution(const int *arr,const int size)
{
    int answer=0;
    int min=arr[0],max=arr[0];
    for(int i=1;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            answer++;
        }
        if(arr[i]>max)
        {
            max=arr[i];
            answer++;
        }
    }
    return answer;
}