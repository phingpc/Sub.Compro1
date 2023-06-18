#include<stdio.h>
#include<limits.h>
void main()
{
    // input //ดูโจทย์ดีดีว่าเขากำหนดขอบเขตเป็นเท่าไหร่
    int n,x[1000];
    scanf("%d",&n);
    int arr[n][2000];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
        for(int j=0; j<x[i]; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    //ตัวแปร
    int A,P,sum=0,max=INT_MIN,min=INT_MAX,miss=0,target=0;

    //adjust
    while(1)
    {
        scanf("%d",&A);
        if (A==0){
            break;
        }
        scanf("%d",&P);
        if (A-1>=n || A-1<0)
        {
            miss++;
        }
        else if (P >= x[A-1] || P<0){
            miss++;
        }
        else //if (A-1<n && P< x[A-1])
        {
            if(P<x[A-1])
            {
                sum+=arr[A-1][P];
                target=arr[A-1][P];
                if(target>max)
                {
                    max=target;
                }
                if (min>target)
                {
                    min=target;
                }
            }
        }
    }

    //output
    printf("%d\n",sum);
    printf("%d\n",max);
    printf("%d\n",min);
    printf("%d\n",miss);
}
