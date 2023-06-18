#include<stdio.h>
struct student_score{
    int score[5];
}typedef student;
void main(){
    int n,x,max_sumscore=0;
    scanf("%d%d",&n,&x);
    student arr[n];
    for(int i=0; i<n; i++){
        int sumscore=0;
        for(int j=0; j<x; j++){
            scanf("%d",&arr[i].score[j]);
            sumscore += arr[i].score[j];
        }
        if(sumscore>max_sumscore){
            max_sumscore = sumscore;
        }
    }
    int max_Q[x];
    for(int i=0; i<n; i++){

    }
}
