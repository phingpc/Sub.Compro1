#include<stdio.h>
void main(){
    int n,count=1;
    scanf("%d",&n);
    for(int i=n; i>=1; i--){
        printf("%d",i);
        for(int j=0; j<n-2; j++){
            printf(" ");
        }
        printf("%d",(n*2)-3);
    }
}
