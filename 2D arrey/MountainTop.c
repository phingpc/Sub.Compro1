#include<stdio.h>
void main(){
    int N;
    scanf("%d",&N);
    int arr[N][N];
    for(int r=0; r<N; r++){
        for(int c=0; c<N; c++){
            scanf("%d",&arr[r][c]);
        }
    }
    int nPeak=0;
    for(int cenR=1; cenR<N-1; cenR++){
        for(int cenC=1; cenC<N-1; cenC++){
            // 3x3
            int sum=0;
            for(int r=cenR-1; r<=cenR+1; r++){
                for(int c=cenC-1; c<=cenC+1; c++){
                    if(arr[cenR][cenC]>arr[r][c]){
                        sum++;
                    }
                }
            }
            if(sum == 8){
                nPeak++;
            }

        }
    }
    printf("%d\n",nPeak);
    for(int cenR=1; cenR<N-1; cenR++){
        for(int cenC=1; cenC<N-1; cenC++){
            // 3x3
            int sum=0;
            for(int r=cenR-1; r<=cenR+1; r++){
                for(int c=cenC-1; c<=cenC+1; c++){
                    if(arr[cenR][cenC]>arr[r][c]){
                        sum++;
                    }
                }
            }
            if(sum == 8){
                printf("%d %d %d\n",arr[cenR][cenC] ,cenR,cenC);
            }

        }
    }
}
