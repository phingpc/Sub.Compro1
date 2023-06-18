#include<stdio.h>
void main(){
    int x ;
    scanf("%d",&x);
    for(int mul=1 ; mul<=12; mul+=1){
        if(x<=8 && x>= 1){
            printf("%d x %2d = %2d\n", x, mul, x*mul) ;
        }
        else if(x<=83 && x>=9){
            printf("%d x %2d = %3d\n", x, mul, x*mul) ;
        }
        else if(x<=99 && x>=84){
            printf("%d x %2d = %4d\n", x, mul, x*mul) ;
        }
    }
    if(x>99 ){
        printf("Number is out of range");
    }
    else if (x<=0){
        printf("Number is out of range");
    }
}
