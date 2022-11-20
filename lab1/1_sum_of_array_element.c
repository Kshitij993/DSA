#include<stdio.h>

int sum_arr(int a[],int n)
{
    int s=0,i;
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    return s;
}
int main()
{
    int a[10],n,i;
    scanf("%d",&n);
    printf("enter the element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum = sum_arr(a,n);
    printf("sum =%d",sum);
}

