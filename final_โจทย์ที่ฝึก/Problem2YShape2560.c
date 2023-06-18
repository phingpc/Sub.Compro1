#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int rou=0,far=n/2+n/2-1,tap=0;;
    for(int i=0; i<n+1; i++){
        if(tap>0 && tap<n/2){
        for(int o=0; o<tap; o++){
                printf(" ");
            }
        }
        tap++;
        if (tap>n/2){
            for(int t=0; t<n/2; t++){
                printf(" ");
            }
        }
        if(rou <= n/2){
        printf("%d",rou);
        }
        for(int j=0; j<far; j++){
            printf(" ");
        }
        if(rou!=n/2){
        printf("%d",rou);
        }
        far-=2;
        rou++;
        printf("\n");
    }
}
