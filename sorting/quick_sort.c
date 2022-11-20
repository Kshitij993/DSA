#include<stdio.h>
int n,a[20];
void quickSort(int f,int l)
 {
  int pivot=a[l],i,j,t,k;
  i=f;
  j=l-1;
  while(i<j)
   {
    if(a[i]<=pivot)
     i++;
    if(a[j]>=pivot)
     j--;
    if(a[i]>pivot && a[j]<pivot)
     {
      t=a[i];
      a[i]=a[j];
      a[j]=t;
     }
   }
  for(k=l-1;k>=j;k--)
   a[k+1]=a[k];
  a[j]=pivot;
  quickSort(f,i);
  quickSort(j,l);
 }
void main()
 {
  int i;
  printf("Enter the size of array : ");
  scanf("%d",&n);
  printf("Enter the array element : \n");
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  quickSort(0,n-1);
  printf("\n");
  for(i=0;i<n;i++)
   printf("%d ",a[i]);
 }
