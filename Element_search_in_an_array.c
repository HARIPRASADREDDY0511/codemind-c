#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b;
    scanf("%d",&b);
    for(int i=0;i<n;i++)
    {
        if(a[i]==b)
        {
            printf("True");
            return 0;
        }
    }
    printf("False");
}