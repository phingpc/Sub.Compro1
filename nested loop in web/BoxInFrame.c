#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    //zone 1
    for(int i=1; i<=n; i++){
        printf("*");
    }
    printf("\n");
    //zone 2
    printf("*");
    for(int col=1; col<n-1; col++){
            printf(" ");
        }
    printf("*");
    printf("\n");
    //zone 3
    for(int m=1; m<=n-4; m++){
    printf("*");
    printf(" ");
    for(int p=1; p<=n-4; p++){
        printf("*");
    }
    printf(" ");
    printf("*");
    printf("\n");
    }
    //zone 4
    printf("*");
    for(int col=1; col<n-1; col++){
            printf(" ");
        }
    printf("*");
    printf("\n");
    //zone 5
    for(int i=1; i<=n; i++){
        printf("*");
    }
}
