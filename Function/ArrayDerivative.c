#include<stdio.h>
void main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }
    printf("0 ");
    for(int i=1; i<N; i++){
        int sum=0;
        sum=arr[i]-arr[i-1];
        printf("%d ",sum);
    }
}
