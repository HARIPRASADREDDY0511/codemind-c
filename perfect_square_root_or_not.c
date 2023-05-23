
#include<stdio.h>
int sqrt1(int n)
{
    int t=n/2;
    for(int i=1;i<=t;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i*j==n)
            {
                return j;
                break;
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int x=sqrt1(n);
    int p=x*x;
    if(p==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
