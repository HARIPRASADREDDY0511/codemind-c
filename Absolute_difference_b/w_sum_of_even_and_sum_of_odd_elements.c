#include<stdio.h>
int absl(int se,int so)
{
    if(se>so)
    {
        return se-so;
    }
    else
    {
        return so-se;
    }
}
int main()
{
    int n,se=0,so=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            se=se+arr[i];
        }
        else
        {
            so=so+arr[i];
        }
    }
    int res=absl(se,so);
    printf("%d",res);
}