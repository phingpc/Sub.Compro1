#include<stdio.h>
void main(){
    int nRow,nCol;
    scanf("%d%d",&nRow,&nCol);
    int arr[nRow][nCol];
    for(int i=0; i<nRow; i++){
        for(int j=0; j<nCol; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0; i<nCol; i++){
        for(int j=0; j<nRow; j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}
