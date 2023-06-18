#include<stdio.h>
void main()
{
    int day,month,year,sum=0,sum_S=0,sum_SV2=0;
    scanf("%d%d%d",&day,&month,&year);
    if(day>=10)
    {
        sum+=day/10+(day%10);
    }
    else
    {
        sum+=day;
    }
    if(month>=10)
    {
        sum+=month/10+month%10;
    }
    else
    {
        sum+=month;
    }
    sum+=year%10+(year%100)/10+(year%1000)/100+year/1000;
    printf("\n%d ",sum);
    if(sum>=10)
    {
        sum_S+=sum/10+sum%10;
        printf("%d ",sum_S);
        if(sum_S>=10)
        {
            sum_SV2=sum_S%10+sum_S/10;
            printf("%d ",sum_SV2);

        }
    }
}
