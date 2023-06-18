#include<stdio.h>
void main(){
    int x,y,z,k;
    scanf("%d%d%d%d",&x,&y,&z,&k);
    int num=k-y+1;
    int sumy=y;
    for(int i=1; i<=num; i++){
        printf("%d x %d = %d",x,sumy,x*sumy);
        printf("\n");
        sumy++;
    }
    int kuy=z-x-1;
    for(int f=1; f<=kuy; f++){
    x++;
    for(int j=1; j<=k; j++){
        printf("%d x %d = %d",x,j,x*j);
        printf("\n");
    }
    }
    x++;
    for(int m=1; m<=y; m++){
        printf("%d x %d = %d",x,m,x*m);
        printf("\n");
    }
}
