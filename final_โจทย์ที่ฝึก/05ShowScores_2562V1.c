#include<stdio.h>
struct ID_student{
    char ID[10+1];
}typedef ID;
void main(){
    int row,col;
    scanf("%d%d",&row,&col);
    ID str[row];
    for(int i=0; i<row; i++){
        scanf("%s",str[i].ID);
    }
    int arr[col][row];
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0; i<row; i++){
        printf("%s ",str[i].ID);
        double sum=0;
        double ans=0;
        for (int j=0; j<col; j++){
            sum+=arr[j][i];
            ans=sum/col;
        }
        printf("%.2lf",ans);
        printf("\n");
    }
}
