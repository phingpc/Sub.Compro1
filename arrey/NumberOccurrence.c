#include<stdio.h>
void main(){
    int N,sum=0;
    scanf("%d",&N);
    int arr[N];
    for(int ind=1; ind<=N; ind++){
        scanf("%d",&arr[ind]);
    }
    int M;
    scanf("%d",&M);
    for(int ind=1; ind<=N; ind++){
        if(arr[ind]==M){
            printf("%d ",ind);
        }
        if(arr[ind]!=M){
            sum++;
        }
    }
    if(sum==N){
        printf("0");
    }
}
