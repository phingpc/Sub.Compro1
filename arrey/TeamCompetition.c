#include<stdio.h>
void main(){
    int N,sumA=0,sumB=0;
    scanf("%d",&N);
    int A[N],B[N];
    for(int i=1; i<=N; i++){
        scanf("%d",&A[i]);
    }
    for(int i=1; i<=N; i++){
        scanf("%d",&B[i]);
    }
    for(int ind=1; ind<=N; ind++){
        if(A[ind]>B[ind]){
            sumA+=2;
        }
        else if(A[ind]<B[ind]){
            sumB+=2;
        }
        else {
            sumA+=1;
            sumB+=1;
        }
    }

    if(sumA>sumB){
        printf("Team 1 wins\nScore %d to %d",sumA,sumB);
    }
    else if(sumB>sumA){
        printf("Team 2 wins\nScore %d to %d",sumB,sumA);
    }
    else {
        printf("Draw game\nScore %d to %d",sumB,sumA);
    }
}
