#include<stdio.h>
#include<limits.h>
void main(){
    int i=1,n=8,target,mindiff=INT_MAX,mindiff_x;
    scanf("%d",&target);
    while (i<=n){
        int x;
        scanf("%d",&x);
        int diff = x-target;
        if (diff < 0){
            diff = -1*diff;
        }
        if(diff< mindiff){
            mindiff = diff;
            mindiff_x = x;
        }
        i+=1;
    }
    printf("%d",mindiff_x);
}
