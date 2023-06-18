#include<stdio.h>
void main()
{
    int row,col;
    scanf("%d%d",&row,&col);
    int arr[row][col];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0,Num=0,max=0;
    for(int i=0; i<row; i++)
    {
        int sum=0;
        for(int j=0; j<col; j++)
        {
            sum=sum+arr[i][j];
        }
        if(sum>count)
        {
            count=sum;
            max=i;
        }
    }
    for(int j=0; j<col; j++){
            int sus=0;
        for(int i=0; i<row; i++){
            if(arr[i][j]>sus){
                sus=arr[i][j];
            }
        }
        if(arr[max][j]>=sus){
            Num++;
        }
    }
    printf("%d\n%d",count,Num);
}
