#include<stdio.h>
void selectionSort(int a[],int n)
 {
  int i,j,small,pos,temp;
  for(i=0;i<n;i++)
   {
    small=a[i];
    pos=i;
    for(j=i+1;j<n;j++)
     {
      if(small>a[j])
       {
        small=a[j];
        pos=j;
       }
     }
    temp=a[i];
    a[i]=a[pos];
    a[pos]=temp;
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
  selectionSort(p,n);
  printf("\n");
  for(i=0;i<n;i++)
   printf("%d ",a[i]);
 }
 
