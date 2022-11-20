#include<stdio.h>

void sorting(int a[],int n)
{
    int i,j,t;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
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
    sorting(a,n);
}

