#include<stdio.h>
int main()
{
    int N,n,sum3=0,sum2=0;
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            sum2=sum2+n;
        }
        else
        {
            sum3=sum3+n;
        }
    }
    printf("%d %d",sum2,sum3);
    return 0;
}