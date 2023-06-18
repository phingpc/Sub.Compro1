#include<stdio.h>
int arr[100];
int n;
double average(){
    double average=0;
    for (int i=0; i<n; i++){
        average+=arr[i];
    }
    average=average/n;
    return average;
}
double variance (double average){
    double variance=0;
    for (int i=0; i<n; i++){
        variance+=(arr[i]-(average))*(arr[i]-(average));
    }
    variance=variance/(n-1);
    return variance;
}
void main(){
    scanf("%d",&n);
    for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
    }
    double avg = average();
    printf("%.2f",avg);
    double var = variance(avg);
    printf(" %.2f",var);
}

