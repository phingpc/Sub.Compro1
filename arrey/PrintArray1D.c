#include<stdio.h>
void main(){
    int N,X;
    scanf("%d",&N);
    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&X);
    printf("%d ",arr[0]);
    int C=0;
    C=X;
    for(int i=1; i<N; i++){
        if (i==C){
            printf("%d ",arr[i]);
            C+=X;
        }
    }
}
