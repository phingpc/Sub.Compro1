#include<stdio.h>
void main()
{
    int N;
    scanf("%d",&N);
    int arr[N][1000];
    for(int i=0; i<N; i++)
    {
        int j=0;
        while(1)
        {
            scanf("%d",&arr[i][j]);
            if(arr[i][j]>0)
            {
                j++;
            }
            else if(arr[i][j]==0)
            {
                j=0;
                break;
            }
        }
    }
    int mid=1,j=0;
    for(int i=0; i<N; i++)
    {
        while(1)
        {
            if(arr[i][j]>arr[i][mid])
            {
                if(arr[i][mid]<arr[i][j+2])
                {
                    printf("min %d",arr[i][mid]);
                    j+=1;
                    mid+=1;
                    printf(" ");
                    if(arr[i][j+2]==0){
                        printf("\n");
                        j=0;
                        mid=1;

                        break;
                    }
                }
                else if (arr[i][mid]>arr[i][j+2])
                {
                    j+=1;
                    mid+=1;
                    if(arr[i][j+2]==0){
                        printf("\n");
                        j=0;
                        mid=1;

                        break;
                    }
                }
            }
            else if(arr[i][mid]>arr[i][j])
            {
                if(arr[i][mid]>arr[i][j+2])
                {
                    printf("max %d",arr[i][mid]);
                    j+=1;
                    mid+=1;
                    printf(" ");
                    if(arr[i][j+2]==0)
                    {
                        printf("\n");
                        j=0;
                        mid=1;

                        break;
                    }

                }
                else if (arr[i][mid]<arr[i][j+2]){
                    j+=1;
                    mid+=1;
                    if(arr[i][j+2]==0)
                    {
                        printf("\n");
                        j=0;
                        mid=1;

                        break;
                    }
                }
            }
        }
    }
}
