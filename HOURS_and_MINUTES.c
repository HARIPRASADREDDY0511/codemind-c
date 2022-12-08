#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int h,m;
    h=n/60;
    m=n%60;
    printf("%d Hour(s) %d Minute(s)",h,m);
}