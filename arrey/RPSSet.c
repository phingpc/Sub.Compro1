#include<stdio.h>
void main()
{
    int N,winA=0,winB=0,winAB=0;
    scanf("%d",&N);
    int arr[2][5000];
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<N; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }


        for(int j=0; j<N; j++)
        {
            if(arr[0][j]==2 && arr[1][j]==1)
            {
                winA++;
            }
            else if(arr[1][j]==2 && arr[0][j]==1)
            {
                winB++;
            }
            else if(arr[1][j]==3 && arr[0][j]==2)
            {
                winB++;
            }
            else if(arr[1][j]==2 && arr[0][j]==3)
            {
                winA++;
            }
            else if(arr[1][j]==1 && arr[0][j]==3)
            {
                winB++;
            }
            else if(arr[1][j]==3 && arr[0][j]==1)
            {
                winA++;
            }

        }

    printf("%d %d",winA,winB);
    printf("\n");
    if(winA>winB)
    {
        printf("1");
    }
    else if (winB>winA)
    {
        printf("2");
    }
    else
    {
        printf("0");
    }
}
