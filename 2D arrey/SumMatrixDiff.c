#include<stdio.h>
void main()
{
    int N,sum=0;
    scanf("%d",&N);
    int arr[N][N];
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            sum += abs(arr[i][j]-arr[j][i]);
        }
    }
    printf("%d",sum/2);
}
