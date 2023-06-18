#include<stdio.h>
void main(){
    int n,k,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    if(k==1){
        for(int i=0; i<n-1; i++){
            sum=arr[i+1]-arr[i];
            printf("%d ",sum);
        }
    }
    else if (k==2){
        for(int i=n-1; i>0; i--){
            sum=arr[i-1]-arr[i];
            printf("%d ",sum);
        }
    }
}
