#include<stdio.h>
void main(){
    int x,y;
    scanf("%d%d",&x,&y);
    for(int i=1; i<=x*y+y+1; i++ ){
        printf("*");
    }
    printf("\n");
    for(int j=1; j<=y+1; j++){
        printf("*");
        for(int m=1; m<=x; m++){
            printf(" ");
        }
    }
    printf("\n");
    for(int i=1; i<=x*y+y+1; i++ ){
        printf("*");
    }
}
