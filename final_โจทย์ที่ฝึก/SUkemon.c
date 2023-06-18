#include<stdio.h>
void main()
{
    // input
    int n;
    scanf("%d",&n);
    int arr[2][100000];
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    // ตัวแปร
    int cpA=0,cpB=0;
    int sumA=arr[0][cpA],sumB=arr[1][cpB];
    int tolA=0,tolB=0;
    // output
    while(1)
    {
        // break error
        if (cpB==n-1 || cpA==n-1)
        {
            //ลักไก่
            for(int i=0; i<n; i++)
            {
                tolA+=arr[0][i];
            }
            for(int i=0; i<n; i++)
            {
                tolB+=arr[1][i];
            }
            //ลักไก่
            if(cpB==n-1)
            {
                if (sumB>sumA)
                {
                    printf("2\n");
                }
                if(sumA>sumB)
                {
                    printf("1\n");
                }
            }
            if(cpA==n-1)
            {
                if (sumB>sumA)
                {
                    printf("2\n");
                }
                if(sumA>sumB)
                {
                    printf("1\n");
                }
            }
            if(tolA>tolB)
            {
                printf("1\n");
                break;
            }
            else if (tolB>tolA)
            {
                printf("2\n");
                break;
            }
            else if (tolA==tolB)
            {
                printf("0\n");
                break;
            }
        }
        // break error
        if(sumA>sumB)
        {
            sumA=sumA-sumB;
            cpB+=1;
            printf("1\n");
            //if(cpB<=n-1)
            //{
                sumB=arr[1][cpB];
            //}
        }
        else if (sumB>sumA)
        {
            sumB=sumB-sumA;
            cpA+=1;
            printf("2\n");
            //if(cpA<=n-1)
            //{
                sumA=arr[0][cpA];
            //}
        }
        else if (sumA==sumB)
        {
            cpA+=1;
            cpB+=1;
            //if (cpA && cpB <=n-1)
            //{
                sumA=arr[0][cpA];
                sumB=arr[1][cpB];
            //}
            printf("0\n");
        }
    }
}
