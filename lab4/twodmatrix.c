#include<stdio.h>
void main()
 {
  int n,i,j;
  printf("enter the row coloum : ");
  scanf("%d",&n);
  int a[n][n];
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      scanf("%d",&a[i][j]);
  for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
      printf("%d",a[i][j]);
    printf("\n");
   }   
 }
