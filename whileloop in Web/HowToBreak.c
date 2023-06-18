#include<stdio.h>
void main(){
    int count = 0 ;
    while (1){
        int x;
        scanf("%d",&x);
        if (x==0){
            break;
        }
        count+=1;
    }
    printf("%d",count);
}
