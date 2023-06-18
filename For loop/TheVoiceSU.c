#include<stdio.h>
void main(){
    int n , k, k1=0,k2=0;
    scanf("%d%d",&n,&k);
    for (int i=1; i<=n; i++){
        int g, s1 ,s2 ;
        scanf("%d%d%d",&g,&s1,&s2);

        if (g==1 && s1>=9 && k1<k){
            printf("%d 1\n", i);
            k1+=1;
        } else if (g==2 && s2 >= 9 && k2<k){
            printf("%d 2\n", i);
            k2+=1;
        } else if (s1>=9 && k1<k) {
            printf("%d 1\n", i);
            k1+=1;
        } else if (s2>=9 && k2<k) {
            printf("%d 2\n", i);
            k2+=1;
        }
    }
}
