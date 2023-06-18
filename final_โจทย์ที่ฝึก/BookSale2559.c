#include<stdio.h>
struct book_shop
{
    int BookID;
    char BookName[50+2];
    int BookPrice;
    int Bookbuy;
} typedef SHOP;
void main()
{
    int n;
    scanf("%d",&n);
    SHOP std[n];
    int totalprice[n],totalprofit[n],TotalQ[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d",&std[i].BookID);
        scanf(" %99[^\n]",std[i].BookName);
        //
        int nameLength = strlen(std[i].BookName);
        std[i].BookName[nameLength-1] = 0;
        //
        scanf("%d",&std[i].BookPrice);
        scanf("%d",&std[i].Bookbuy);
        totalprice[i]=0;
        totalprofit[i]=0;
        TotalQ[i]=0;
    }
    int round;
    scanf("%d",&round);
    int check[round],ID[round],Buy,count=0;
    for(int i=0; i<round; i++)
    {
        scanf("%d",&check[i]);
        if (check[i]==1)
        {
            scanf("%d",&ID[i]);
            scanf("%d",&Buy);
            for(int j=0; j<n; j++)
            {
                if(ID[i]==std[j].BookID)
                {
                    totalprice[j]+=std[j].BookPrice*Buy;
                    totalprofit[j]+=(std[j].BookPrice-std[j].Bookbuy)*Buy;
                    TotalQ[j]+=Buy;
                }
            }
        }
        else if(check[i]==2){
            scanf("%d",&ID[i]);
            int count=0;
            for(int k=0; k<n; k++)
            {
                if(ID[i]==std[k].BookID)
                {
                    printf("%d ",std[k].BookID);
                    printf("%s ",std[k].BookName);
                    printf("%d ",TotalQ[k]);
                    printf("%d ",totalprice[k]);
                    printf("%d ",totalprofit[k]);
                    count++;
                }
                else if(count==0 && k==n-1)
                {
                    printf("Error");
                }
            }
            printf("\n");
    }
    }
}
