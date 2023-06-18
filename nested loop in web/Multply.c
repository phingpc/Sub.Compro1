#include<stdio.h>
void main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int sum1=y-x+1;
    int sum2=x-y+1;
    if(x<y){
    for(int j=1; j<=sum1; j++)
    {
        printf("%d: ",x);
        for(int i=1; i<=z; i++)
        {
            printf("%d ",x*i);
        }
        printf("\n");
        x++;
    }
    }
    else {
        for(int j=1; j<=sum2; j++)
    {
        printf("%d: ",y);
        for(int i=1; i<=z; i++)
        {
            printf("%d ",y*i);
        }
        printf("\n");
        y++;
    }
    }
}
