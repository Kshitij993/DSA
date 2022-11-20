#include<stdio.h>
#include<stdlib.h>

void main()
{
 int i,j,r=3,c=3,**a;
 a=calloc(r,sizeof(int));
 for(i=0;i<r;i++)
  a[i]=calloc(c,sizeof(int));
 for(i=0;i<r;i++)
  {
   for(j=0;j<c;j++)
    printf("%d",a[i][j]);
   printf("\n");
  }
}
 
