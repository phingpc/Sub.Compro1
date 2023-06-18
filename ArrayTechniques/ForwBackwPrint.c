#include<stdio.h>
void main(){
    int N,M;
    scanf("%d",&N);
    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&M);
    if(M>=0){
        for(int i=0; i<N; i++){
            arr[i]=arr[i]+M;
            printf("%d ",arr[i]);
        }
    }
    else if(M<0){
        for(int i=N-1; i>=0; i--){
            arr[i]=arr[i]+M;
            printf("%d ",arr[i]);
        }
    }
}
