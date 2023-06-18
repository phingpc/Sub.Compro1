#include<stdio.h>
#include<limits.h>
void main()
{
    int Van,target;
    scanf("%d%d",&Van,&target);
    int arr[100],str[10000];
    //input
    for(int i=0; i<Van; i++)
    {
        arr[i]=0;
    }
    for(int i=0; i<target; i++)
    {
        scanf("%d",&str[i]);
        if(str[i]>15 || str[i]<=0){
            str[i]=0;
        }
    }


    //check
    int min=INT_MAX;
    for(int i=0; i<target; i++)
    {
        //checkV2
        for(int k=0; k<Van; k++)
        {
            for(int q=0; q<Van; q++)
            {
                if (arr[k]<=arr[q])
                {
                    min=arr[k];
                }
            }
        }
        //checkV2
        for(int j=0; j<Van; j++)
        {
            if(arr[j]<=min)
            {
                arr[j]+=str[i];
                str[i]=j;
                break;
            }
        }
    }



    //output
    for(int i=0; i<target; i++)
    {
        printf("%d\n",str[i]+1);
    }
}
