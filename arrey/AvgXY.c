#include<stdio.h>
void main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }
    int x,y;
    scanf("%d%d",&x,&y);
    double count=0,sum=0;
    int total=0;
    for(int i=0; i<N; i++){
        if(arr[i]>=x && arr[i]<=y){
            count++;
            sum=sum+arr[i];
            total++;
        }
    }
    printf("%d\n",total);
    if (total==0){
        printf("none");
    }
    else{
    printf("%.2lf",sum/count);
    }
}
