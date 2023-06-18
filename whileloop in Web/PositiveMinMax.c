#include<stdio.h>
#include<limits.h>
void main(){
    int i=1, n=8 , maxV=INT_MIN, minV=INT_MAX;
    while (i<=n){
        int x ;
        scanf("%d",&x);
        if (x>0)
        {
        if (x>maxV)
        {
            maxV=x;
        }
        if (x<minV)
        {
            minV=x;
        }
        i+=1;
        }
    }
    printf("%d\n%d",maxV,minV);
}
