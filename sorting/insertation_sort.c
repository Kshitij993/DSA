#include<stdio.h>
void insertationSort(int a[],int n)
 {
  int i,j,temp;
  for(i=1;i<n;i++)
   {
    temp=a[i];
    j=i-1;
    while(temp<a[j])
     {
      if(j==-1)
       break;
      a[j+1]=a[j];
      j--;
    }
    a[j+1]=temp;
   }    
 }
void main()
 {
  int n;
  printf("Enter the size of array : ");
  scanf("%d",&n);
  int a[n],i;
  int *p;
  printf("Enter the array element : \n");
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  p=a;
  insertationSort(p,n);
  printf("\n");
  for(i=0;i<n;i++)
   printf("%d ",a[i]);
 }
 
