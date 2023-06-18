#include<stdio.h>
void main(){
    int k ,count=0,sum=0,countall=0;
    scanf("%d",&k);
    while(1){
        int x;
        scanf("%d",&x);
        if(x==0){
            break;
        }
        count++;
        if(x>0 && x%k==0){
            sum++;
            countall=countall+x;
        }
    }
    printf("%d\n%d\n%d",count,sum,countall);
}
