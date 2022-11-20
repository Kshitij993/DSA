#include<stdio.h>

void max_min(int a[],int n)
{
    int maxa=a[0],mina=a[0],i;
    for(i=0;i<n;i++)
    {
        if(maxa<a[i])
            maxa=a[i];
        if(mina>a[i])
            mina=a[i];
    }
    printf("max = %d",maxa);
    printf("min = %d",mina);
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
    max_min(a,n);
}

