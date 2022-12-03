#include<stdio.h>
int main()
{
    int s,t,b;
    scanf("%d%d%d",&s,&t,&b);
    int capacity,tc;
    capacity=2*s*t*b*512;
    tc=capacity/1024;
    printf("%dkb",tc);
}

