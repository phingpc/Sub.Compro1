#include<stdio.h>
void main(){
    int x,y,sum=1;
    scanf("%d%d",&x,&y);
    for (int i=1; i<=x; i++){
        for(int j=1; j<=y; j++){
        printf("%d ",sum);
        sum++;
        }
        printf("\n");
    }
}
