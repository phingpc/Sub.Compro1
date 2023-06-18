#include<stdio.h>
int N;
int arr[10000];
int count (){
    int count=0;
    for(int j=0; j<N; j++)
    {
        for(int i=0; i<N; i++)
        {
            if(arr[j]==arr[i])
            {
                count++;
            }
        }
    }
    return count;
}
void main(){
    scanf("%d",&N);
    for(int i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }
    int Uniq = count();
    if(Uniq == N)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}
