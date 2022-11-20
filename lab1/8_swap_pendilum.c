#include<stdio.h>

void swap_pendilum(int a[],int n)
{
 int i,t;
 for(i=0;i<=n/2;i++)
 {
   t=a[i];
   a[i]=a[n-1-i];
   a[n-1-i]=t;
 }
 for(i=0;i<n;i++)
   printf("%d",a[i]);
}

void main()
{
 int n,i;
 printf("enter the no of elements \n");
 scanf("%d",&n);
 int a[n];
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 swap_pendilum(a,n);
 }
