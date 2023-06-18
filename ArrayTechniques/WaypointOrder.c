#include<stdio.h>
void main()
{
    int R,C;
    scanf("%d%d",&R,&C);
    int arr[R+1][C+1];
    for(int i=1; i<=R; i++)
    {
        for(int j=1; j<=C; j++)
        {
            arr[i][j]=0;
        }
    }
    int target;
    scanf("%d",&target);
    int x,y;
    for (int i=1; i<=target; i++)
    {
        scanf("%d%d",&x,&y);
        arr[x][y]+=i;
    }
    for(int i=1; i<=R; i++)
    {
        for(int j=1; j<=C; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
