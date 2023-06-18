#include<stdio.h>
struct student {
    char ID[9];
    char name[31];
    char surename[51];
    int years;
}typedef bio_student;
void main(){
    int n,x;
    scanf("%d",&n);
    bio_student std[n];
    for(int i=0; i<n; i++){
        scanf("%s",std[i].ID);
        scanf("%s",std[i].name);
        scanf("%s",std[i].surename);
        scanf("%d",&std[i].years);
    }
    scanf("%d",&x);
    int count=0;
    for(int i=0; i<n; i++){
        if(std[i].years==x){
            printf("%s ",std[i].ID);
            printf("%s ",std[i].name);
            printf("%s\n",std[i].surename);
            count++;
        }
    }
    if(count==0){
        printf("None");
    }
}
