#include<stdio.h>

void search_ele(int a[],int n, int ele)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(ele==a[i])
            printf("element found at position %d",i+1);
    }
}
int main()
{
    int a[10],n,i,ele;
    printf("enter the no of element \n");
    scanf("%d",&n);
    printf("enter the element \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n enter the element to search \n");
    scanf("%d",&ele);
    search_ele(a,n,ele);
}

