#include<stdio.h>
void main()
{
    int n=0;
    int arr[501];
    while(1)
    {
        int x;
        scanf("%d",&x);
        if(x>=10 || x<0)
        {
            break;
        }
            arr[n] = x;
            n++;
    }

    int nasterisk = 1,nspace=n-1;
    for (int r=0; r<n; r++)
    {
        for(int u=0; u<nspace; u++)
        {
            printf(" ");
        }
        nspace--;
        for(int y=0; y<nasterisk; y++)
        {
            printf("%d",arr[r]);
        }
        nasterisk++;
        printf("\n");
    }

}
