#include<stdio.h>
#include<limits.h>
void main()
{
    int K,N,diff;
    scanf("%d",&N);
    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&K);
    int mindiff=INT_MAX;
    int count=0;
    for(int i=0; i<N; i++){
        if (arr[i]>=K){
            diff = arr[i] - K;
        }
        else{
            diff = K - arr[i];
        }
        if(diff < mindiff){
            mindiff = diff;
            count=1;
        }
        else if (diff == mindiff ){
            count++;
        }
    }
    printf("%d\n%d",mindiff,count);
}
