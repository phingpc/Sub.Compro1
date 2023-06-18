#include<stdio.h>
#include<limits.h>
void main(){
    int people,days;
    scanf("%d%d",&people,&days);
    int arr[days][days];
    int total=0;
    int time[people];
    for(int i=0; i<people; i++){
        time[i]=0;
    }
    for(int i=0; i<days; i++){
        for(int j=0; j<people; j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]>10){
                arr[i][j]=10;
            }
            total+=arr[i][j];
            time[j]+=arr[i][j];
        }
    }
    int peMax=0,peMin=time[0],Max=0,Min=0;
    for(int i=0; i<people; i++){
        if(time[i]>peMax){
            peMax=time[i];
            Max=i;
        }
        else if (time[i]<=peMin){
            peMin=time[i];
            Min=i;
        }
    }
    printf("%d\n",total*40);
    printf("%d\n",Max+1);
    printf("%d",Min+1);
}
