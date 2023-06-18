#include<stdio.h>
int N;
int arr[100];
void derivative (){
    printf("0 ");
    for(int i=1; i<N; i++){
        printf("%d ",arr[i]-arr[i-1]);
    }
}
void main(){
    scanf("%d",&N);
    for(int i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }
    derivative(N);
}
