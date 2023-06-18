#include<stdio.h>
void main(){
    int n , dayA=0,dayB=0,dayC=0;
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
        int day;
        scanf("%d",&day);
        if (dayA<=dayB && dayA<=dayC){
            printf("A\n");
            dayA+=day;
        }
        else if (dayB<=dayA && dayB<=dayC){
            printf("B\n");
            dayB+=day;
        }
        else {
            printf("C\n");
            dayC+=day;
        }
    }
}
