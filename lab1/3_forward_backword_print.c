#include<stdio.h>

void forward_back(int a[],int n)
{
    int i;
    printf("\n forward \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n backward \n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
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
    forward_back(a,n);
}

