#include<stdio.h>
#include<stdlib.h>

void main()
{
 int i,*a,n=5;
 a=calloc(n,sizeof(int));
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 for(i=0;i<n;i++)
  printf("%d ",a[i]);
 n=n+5;
 a=realloc(a,n*sizeof(int));
 printf("\n");
  for(i=0;i<n;i++)
  printf("%d ",a[i]);
}

