#include<stdio.h>
void main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }
    int x = arr[0];
    int count=0;
    for(int j=0; j<N; j++)
    {
        for(int i=0; i<N; i++)
        {
            if(arr[j]==arr[i])
            {
                count++;
            }
        }
    }
    if(count == N)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}
