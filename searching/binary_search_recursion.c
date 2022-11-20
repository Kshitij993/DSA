//binary search recursion
#include<stdio.h>

int a[20];

int bsearch(int f, int l,int m,int e)
 {
  if(l>=f)
  {
     m=(f+l)/2;
     if(a[m]==e)
      {
        return 1;
      }
     if(a[m]<e)
      {
       f=m+1;
       return bsearch(f,l,m,e);
      }
     else
      {
       l=m-1;
       return bsearch(f,l,m,e);
      }
   }
   else
    return -1;
 }
 
void main()
 {
  int i,n,f,l,m;
  printf("Enter the size of array ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
 
  f=0;
  l=n-1;
  int e,r;
  printf("enter the element to find : ");
  scanf("%d",&e);
  r=bsearch(f,l,m,e); 
  if(r==1)
   printf(" Element found ");
  else
   printf(" Element is not found ");
 }            
