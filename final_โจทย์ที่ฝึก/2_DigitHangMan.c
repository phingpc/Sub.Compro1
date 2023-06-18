#include<stdio.h>
void main()
{
    int arr[12],count=0;
    for(int i=0; i<12; i++)
    {
        scanf("%d",&arr[i]);
    }
    int x[5];
    for(int i=0; i<5; i++)
    {
        scanf("%d",&x[i]);
    }
    // 1
    for(int i=0; i<12; i++)
    {
        printf("_ ");
    }
    printf("\n");
    // 2
    int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;
    for(int i=0; i<12; i++)
    {
        if (x[0]==arr[i])
        {
            printf("%d ",arr[i]);
            count++;
        }
        else if (x[0]!=arr[i])
        {
            printf("_ ");
        }
        for(int j=0; j<12; j++)
        {
            if (x[0]==arr[i])
            {
                sum1++;
            }
        }
    }
    if(sum1==0)
    {
        printf("%d",x[0]);
    }
    printf("\n");
    // 3
    for (int i=0; i<12; i++){
        if (x[1]==arr[i]){
            printf("%d ",arr[i]);
            count++;
        }
        else if (x[0]==arr[i]){
            printf("%d ",arr[i]);
        }
        else if (x[1]!=arr[i]){
            printf("_ ");
        }
        for(int j=0; j<12; j++)
        {
            if (x[0]==arr[i])
            {
                sum1++;
            }
            if (x[1]==arr[i]){
                sum2++;
            }
        }
    }
    if(sum1==0)
    {
        printf("%d ",x[0]);
    }
    if (sum2==0){
        printf("%d ",x[1]);
    }
    printf("\n");
    // 4
    for (int i=0; i<12; i++){
        if (x[1]==arr[i]){
            printf("%d ",arr[i]);
            count++;
        }
        else if (x[0]==arr[i]){
            printf("%d ",arr[i]);
        }
        else if (x[2]==arr[i]){
            printf("%d ",arr[i]);
        }
        else if (x[1]!=arr[i]){
            printf("_ ");
        }
        for(int j=0; j<12; j++)
        {
            if (x[0]==arr[i])
            {
                sum1++;
            }
            if (x[1]==arr[i]){
                sum2++;
            }
            if (x[2]==arr[i]){
                sum3++;
            }
        }
    }
    if(sum1==0)
    {
        printf("%d ",x[0]);
    }
    if (sum2==0){
        printf("%d ",x[1]);
    }
    if (sum3==0){
        printf("%d ",x[2]);
    }
    printf("\n");
    // 5
    for (int i=0; i<12; i++){
        if (x[1]==arr[i]){
            printf("%d ",arr[i]);
            count++;
        }
        else if (x[0]==arr[i]){
            printf("%d ",arr[i]);
        }
        else if (x[2]==arr[i]){
            printf("%d ",arr[i]);
        }
        else if (x[3]==arr[i]){
            printf("%d ",arr[i]);
        }
        else if (x[1]!=arr[i]){
            printf("_ ");
        }
        for(int j=0; j<12; j++)
        {
            if (x[0]==arr[i])
            {
                sum1++;
            }
            if (x[1]==arr[i]){
                sum2++;
            }
            if (x[2]==arr[i]){
                sum3++;
            }
            if (x[3]==arr[i]){
                sum4++;
            }
        }
    }
    if(sum1==0)
    {
        printf("%d ",x[0]);
    }
    if (sum2==0){
        printf("%d ",x[1]);
    }
    if (sum3==0){
        printf("%d ",x[2]);
    }
    if (sum4==0){
        printf("%d ",x[3]);
    }
    printf("\n");
    // 6
    for (int i=0; i<12; i++){
        if (x[1]==arr[i]){
            printf("%d ",arr[i]);
            count++;
        }
        else if (x[0]==arr[i]){
            printf("%d ",arr[i]);
        }
        else if (x[2]==arr[i]){
            printf("%d ",arr[i]);
        }
        else if (x[3]==arr[i]){
            printf("%d ",arr[i]);
        }
        else if (x[4]==arr[i]){
            printf("%d ",arr[i]);
        }
        else if (x[1]!=arr[i]){
            printf("_ ");
        }
        for(int j=0; j<12; j++)
        {
            if (x[0]==arr[i])
            {
                sum1++;
            }
            if (x[1]==arr[i]){
                sum2++;
            }
            if (x[2]==arr[i]){
                sum3++;
            }
            if (x[3]==arr[i]){
                sum4++;
            }
            if (x[4]==arr[i]){
                sum5++;
            }
        }
    }
    if(sum1==0)
    {
        printf("%d ",x[0]);
    }
    if (sum2==0){
        printf("%d ",x[1]);
    }
    if (sum3==0){
        printf("%d ",x[2]);
    }
    if (sum4==0){
        printf("%d ",x[3]);
    }
    if (sum5==0){
        printf("%d ",x[4]);
    }
    printf("\n");
    // ans
    int Join=0;
    for (int i=0; i<5; i++){
        for(int j=0; j<12; j++){
            if(x[i]==arr[j]){
                Join++;
            }
        }
    }
    printf("%d",Join);
}
