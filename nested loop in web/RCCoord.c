#include<stdio.h>
void main(){
    int x,y;
    scanf("%d%d",&x,&y);
    for(int i=0; i<=x; i++){
        for(int j=0; j<=y; j++){
            printf("(%d, %d) ",i,j);
        }
        printf("\n");
    }
}
