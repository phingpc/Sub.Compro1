#include<stdio.h>
void main(){
    int row,col;
    scanf("%d%d",&row,&col);
    int arr[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int x,sum=0;
    scanf("%d",&x);
    if(x==1){
        for(int i=0; i<row; i++){
            for(int j=0; j<col-1; j++){
                sum=arr[i][j+1]-arr[i][j];
                printf("%d ",sum);
            }
            printf("\n");
        }
    }
    else if (x==2){
        for(int i=0; i<row-1; i++){
            for(int j=0; j<col; j++){
                sum=arr[i+1][j]-arr[i][j];
                printf("%d ",sum);
            }
            printf("\n");
        }
    }
}
