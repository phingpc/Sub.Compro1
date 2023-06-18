#include<stdio.h>
void main(){
    int arr[8];
    for (int i=0; i<8; i++){
        scanf("%d",&arr[i]);
    }
    double average=0;
    for (int i=0; i<8; i++){
        average+=arr[i];
    }
    average=average/8;
    printf("%.2lf",average);
    double variane=0;
    for (int i=0; i<8; i++){
        variane+=(arr[i]-(average))*(arr[i]-(average));
    }
    printf(" %.2lf",variane/7);
}
