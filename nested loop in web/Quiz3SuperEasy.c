#include<stdio.h>
void main(){
    int x;
    scanf("%d",&x);
    for(int i=1; i<=x; i++){
        int y,z;
        scanf("%d%d",&y,&z);
        int sum=z-y+1;
        int sum2=y-z+1;
        if(y<z){
            for(int j=1; j<=sum; j++){
                printf("%d ",y);
                y++;
            }
            printf("\n");
        }
        else if (y>z){
            for(int k=1; k<=sum2; k++){
                printf("%d ",z);
                z++;
            }
            printf("\n");
        }
        else if (y==z){
            printf("%d",z);
            printf("\n");
        }
    }
}
