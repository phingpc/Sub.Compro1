#include<stdio.h>
#include<limits.h>
void main(){
    int N,K;
    scanf("%d%d",&N,&K);
    int arr[N];
    for(int i=1; i<=N; i++){
        arr[i]=0;
    }
    int x;
    for(int i=1; i<=K; i++){
        scanf("%d",&x);
        arr[x]+=1;
    }
    int sum=0;
    int count=0;
    for(int i=1; i<=N; i++){
        if(arr[i]>sum){
        sum=arr[i];
        count=i;
        }
    }
    printf("%d\n%d",count,sum);
}
