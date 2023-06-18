#include<stdio.h>
#include<limits.h>
void main()
{
    int n,x,max=INT_MIN,min=INT_MAX;
    scanf("%d",&n);
    int sum_max=INT_MIN,sum_min=INT_MAX,sum=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<5; j++)
        {
            scanf("%d",&x);
            if(x>max){
                max=x;
            }
            if(x<min){
                min=x;
            }
        }
        sum=max-min;
        if(sum>sum_max){
            sum_max=sum;
        }
        if (sum<sum_min){
            sum_min=sum;
        }
        max=INT_MIN;
        min=INT_MAX;
    }
    printf("%d %d %d",sum_max,sum_min,sum_max-sum_min);
}
