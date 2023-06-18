#include<stdio.h>
struct student{
    char ID[10+1];
    char brach[2+1];
    int score[5];
    double midterm;
    double Final;
}typedef student;
struct group{
    char name[2+1];
    int sumgroup;
    student group;
}typedef group;
void main(){
    int n;
    scanf("%d",&n);
    group G[n];
    student str[G[n].sumgroup];
    for(int i=0; i<n; i++){
        scanf("%s",G[i].name);
        scanf("%d",&G[i].sumgroup);
        for(int j=0; j<G[i].sumgroup; j++){
            scanf("%s",G[i].str[j].ID);
        }
    }
}
