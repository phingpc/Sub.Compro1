#include<stdio.h>
void main(){
    int x;
    scanf("%d",&x);
    for(int v=1; v<=x/3; v++){
    for(int j=1; j<=x/3; j++){
            printf("*");
            for(int k=1; k<=2; k++){
                printf(" ");
            }
        }
    printf("\n");
    printf(" ");
    for(int j=1; j<=x/3; j++){
            printf("*");
            for(int k=1; k<=2; k++){
                printf(" ");
            }
        }
    printf("\n");
    printf("  ");
    for(int j=1; j<=x/3; j++){
            printf("*");
            for(int k=1; k<=2; k++){
                printf(" ");
            }
        }
        printf("\n");
    }
}
