#include<stdio.h>
#include<stdlib.h>
void disp(int a[],int *n)
 {
  int i;
  for(i=0;i<*n;i++)
   printf("%d ",a[i]);
  printf("\n");
 }
void display(int *a,int n)
 {
  int i;
  for(i=0;i<n;i++)
  {
   printf("%d ",*a);
   a++;
  }
  printf("\n");
  for(i=0;i<n;i++)
  {
   printf("%d ",*(a+i));
  }
 }


void main()
{
 int *a,*n,i;
 
 n=(int*)malloc(sizeof(int));
 scanf("%d",n);
 
 a=(int*)malloc(*n*sizeof(int));
 
 for(i=0;i<(*n);i++)
  scanf("%d",&a[i]);
  
 for(i=0;i<(*n);i++)
  printf("%d ",a[i]);
  
 printf("\n");
 
 disp(a,n);
 display(&a[0],*n);
 
 int r,c,j;
 scanf("%d",&r);
 scanf("%d",&c);
 int *arr[c];
 for(i=0;i<r;i++)
  arr[i]=(int*)malloc(c*sizeof(int)); 
 for(i=0;i<r;i++)
  {
   for(j=0;j<c;j++)
    scanf("%d",&arr[i][j]);
  }
 for(i=0;i<r;i++)
  {
   for(j=0;j<c;j++)
    printf("%d",arr[i][j]);
   printf("\n");
  }  
}


