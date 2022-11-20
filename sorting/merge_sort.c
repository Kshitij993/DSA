#include<stdio.h>
void mergeArray(int* la,int* ra,int* a,int l,int r,int n)
 {
  int i=0,j=0,k=0;
  while(i<l&&j<r)
   {
    if(la[i]<=ra[j])
     {
      a[k]=la[i];
      i++;
     }
    else
     {
      a[k]=ra[j];
      j++;
     }
    k++;
   }
  while(i<l)
   {
    a[k]=la[i];
    i++;
    k++;
   }
  while(j<r)
   {
    a[k]=ra[j];
    j++;
    k++;
   } 
 } 
void mergeSort(int* a,int n)
 {
  if(n<2)
   return;
  int i,mid,l,r,k=0;
  mid=n/2;
  l=mid;
  r=n-mid;
  int la[l],ra[r];
  for(i=0;i<l;i++)
   {
     la[i]=a[k];
     k++;
   }
  for(i=0;i<r;i++)
   {
    ra[i]=a[k];
    k++;
   }
  mergeSort(la,l);
  mergeSort(ra,r);
  mergeArray(la,ra,a,l,r,n);
 }
void main()
 {
  int n,i;
  printf("Enter array size : ");
  scanf("%d",&n);
  int a[n];
  printf("Enter array element :\n");
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  mergeSort(a,n);
  printf("\n");
  for(i=0;i<n;i++)
    printf("%d ",a[i]);  
  printf("\n");
 }
