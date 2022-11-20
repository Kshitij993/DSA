//binary search without recursion
#include<stdio.h>
void main()
 {
  int i,a[20],n,f,l,m;
  printf("Enter the size of array ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
 
  f=0;
  l=n-1;
  int e;
  printf("enter the element to find : ");
  scanf("%d",&e);
  while(a[m]!=e && l>=f)
   {
    m=(f+l)/2;
    if(a[m]==e)
     {
       break;
     }
    if(a[m]<e)
      f=m+1;
    else
      l=m-1;
   }
   if(a[m]==e)
     printf(" Element found ");
   else
     printf(" Element not found ");
 }        
    
