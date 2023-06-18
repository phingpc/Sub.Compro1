#include<stdio.h>
void main(){
    int nRow, nCol;
    scanf("%d%d",&nRow,&nCol);
    char arr[nRow][nCol];
    for(int r=0; r<nRow; r++){
            for(int c=0; c<nCol; c++){
                arr[r][c]= '_';
            }
    }
    int n;
    scanf("%d",&n);
    for(int i=0; i<n;i++){
        int r,c;
        scanf("%d%d",&r,&c);
        arr[r-1][c-1] = 'x';
    }
    for(int r=0; r<nRow; r++){
        for(int c=0; c<nCol; c++){
            printf("%c",arr[r][c]);
        }
        printf("\n");
    }
}
