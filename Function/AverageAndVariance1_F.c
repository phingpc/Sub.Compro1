#include<stdio.h>
int arr[8]; //global
double average(){
    double average=0;
    for (int i=0; i<8; i++){
        average+=arr[i];
    }
    average=average/8;
    return average;
}
double variance (double average){
    double variance=0;
    for (int i=0; i<8; i++){
        variance+=(arr[i]-(average))*(arr[i]-(average));
    }
    variance=variance/7;
    return variance;
}
void main(){
    for(int i=0; i<8; i++){
    scanf("%d",&arr[i]);
    }
    double avg = average();
    printf("%.2f",avg);
    double var = variance(avg);
    printf(" %.2f",var);
}
