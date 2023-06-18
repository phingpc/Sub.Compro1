#include<stdio.h>
void main()
{
    int x,y,z,p;
    scanf("%d%d%d%d",&x,&y,&z,&p);
    int time1=z-x+1;
    int time2=p-y+1;
    int time3=60-y;
    if (x==z)
    {
        for(int i=1; i<=time1; i++)
        {
            for(int j=1; j<=time2; j++)
            {
                printf("%d:%02d",x,y);
                y++;
                printf("\n");
            }
        }
    }
    if(x<z)
    {
        for(int i=1; i<=time1; i++)
        {
            if(x<z)
            {
                if(y!=0){
                for(int j=0; j<time3; j++)
                {
                    printf("%d:%02d",x,y);
                    y++;
                    printf("\n");
                }
                } else if (y==0){
                    for(int j=0; j<=59; j++)
                {
                    printf("%d:%02d",x,j);
                    printf("\n");
                }
                }
            }
            x++;
            y=0;
            if (x==z)
            {
                for(int g=0; g<=p; g++)
                {
                    printf("%d:%02d",z,g);
                    printf("\n");
                }
            }
        }
    }
}
