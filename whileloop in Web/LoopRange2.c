#include<stdio.h>
void main(){
    int x,y;
    scanf("%d%d",&x,&y);
    if (x>y){
        int i=x, n=y;
        while(i>n){
        printf("%d ",i);
        i-=1;
        }
    } else {
        int i=x, n=y;
        while(i<=n){
        printf("%d ",i);
        i+=1;
        }
    }
}
