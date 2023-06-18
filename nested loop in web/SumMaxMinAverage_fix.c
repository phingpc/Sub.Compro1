#include<stdio.h>
#include<limits.h>
void main()
{
    int maxV=INT_MIN, minV=INT_MAX,j=0,countmax=0,countmin=0;
    double plus=0;
    while(1)
    {
        int x,sum=0;
        scanf("%d",&x);
        if(x>0)
        {
            for(int i=1; i<=x; i++)
            {
                int y;
                scanf("%d",&y);
                sum=sum+y;
            }
            printf("%d",sum);
            printf("\n");
            j++;
            if (sum>maxV)
            {
                maxV=sum;
                countmax=j;
            }
            if (sum<minV)
            {
                minV=sum;
                countmin=j;
            }
            plus=plus+sum;
        }
        else
        {
            break;
        }
    }
    printf("%d %d\n",countmax,maxV);
    printf("%d %d\n",countmin,minV);
    printf("%.2lf",plus/j);
}
