#include<stdio.h>
#include<stdlib.h>
#define calloc(a,n) a=calloc(n,sizeof(int))
void main()
 {
  int n=5,*a;
  calloc(a,n);
  int i;
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  for(i=0;i<n;i++)
   printf("%d",a[i]);
  realloc(a,10*sizeof(int));
  for(i=0;i<n+5;i++)
   printf("%d",a[i]);
 }
