#include<stdio.h>

void sorting_even(int a[],int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        if(i%2==0)
        {
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
    }
    printf("\n");
    for(i=0;i<n;i++)
        printf("%d",a[i]);
}
int main()
{
    int a[10],n,i;
    printf("enter the no of element \n");
    scanf("%d",&n);
    printf("enter the element \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sorting_even(a,n);
}

