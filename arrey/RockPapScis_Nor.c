#include<stdio.h>
void main(){
    while(1){
        int x,y;
        scanf("%d%d",&x,&y);
    if(x==2 && y==1){
        printf("1");
        break;
    }
    else if(y==2 && x==1){
        printf("2");
        break;
    }
    else if(y==3 && x==2){
        printf("2");
        break;
    }
    else if(y==2 && x==3){
        printf("1");
        break;
    }
    else if(y==1 && x==3){
        printf("2");
        break;
    }
    else if(y==3 && x==1){
        printf("1");
        break;
    }
    else if (x==y){
        printf("0");
        break;
    }
    printf("\n");
    }
}
