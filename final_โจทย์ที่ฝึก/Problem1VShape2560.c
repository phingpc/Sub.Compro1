#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int rou=0,far=n+n-1,tap=0;;
    for(int i=0; i<n+1; i++){
        if(tap>0){
        for(int o=0; o<tap; o++){
                printf(" ");
            }
        }
        tap++;
        printf("%d",rou);
        for(int j=0; j<far; j++){
            printf(" ");
        }
        if(rou!=n){
        printf("%d",rou);
        }
        far-=2;
        rou++;
        printf("\n");
    }
}
