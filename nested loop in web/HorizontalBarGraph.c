#include<stdio.h>
void main(){
    while(1){
      int x;
      scanf("%d",&x);
      if(x>0){
        for(int j=1; j<=x; j++){
            printf("*");
        }
        printf("\n");
      }
      else {
        break;
      }
    }
}
