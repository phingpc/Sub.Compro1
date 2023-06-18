#include<stdio.h>
struct student{
    char pass[6];
    int score;
}typedef student_score;
void main(){
    int n;
    scanf("%d",&n);
    student_score std[n];
    for(int i=0; i<n; i++){
        scanf("%s",std[i].pass);
        scanf("%d",&std[i].score);
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=std[i].score;
    }
    double average=sum/n;
int count=0;
    for(int i=0; i<n; i++){
        if (std[i].score>average){
            count++;
        }
    }
    printf("%d\n",count);
    for(int i=0; i<n; i++){
        if (std[i].score>average){
            printf("%s\n",std[i].pass);
        }
    }
}
