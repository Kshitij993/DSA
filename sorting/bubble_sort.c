#include<stdio.h>
void bubbleSort(int a[],int n)
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
  bubbleSort(a,n);
  printf("\n");
  for(i=0;i<n;i++)
   printf("%d ",a[i]);
 }
 
