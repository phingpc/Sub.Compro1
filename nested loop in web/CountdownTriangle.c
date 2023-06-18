#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int sum=n , nspace=0;
    for(int i=0; i<n; i++)
    {
        for(int u=0; u<nspace; u++){
            printf(" ");
        }
        nspace++;
        for(int j=0; j<sum; j++)
        {
            if(n>=0){
                    printf("%d",sum%10);
            }
        }
        sum--;
        printf("\n");
    }
}
