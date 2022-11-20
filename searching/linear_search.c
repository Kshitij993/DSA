//linear search
#include<stdio.h>

void main()
 {
  int a[20],i,n,e;
  printf("enter the size of n : ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  printf("\n");
  printf("enter the element to search : ");
  scanf("%d",&e);
  for(i=0;i<n;i++)
   {
    if(e==a[i])
      printf("Element found at %d position",i+1);
   }
 }
  
  
