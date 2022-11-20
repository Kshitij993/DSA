#include<stdio.h>
#include<stdlib.h>

void main()
 {
  int i,j,r,c,**a;
  printf("No of rows : ");
  scanf("%d",&r);
  printf("No of coloums : ");
  scanf("%d",&c);
  a=(int**)malloc(r*sizeof(int));
  for(i=0;i<r;i++)
    {
     a[i]=(int*)malloc(c*sizeof(int));
    }
    
  for(i=0;i<r;i++)
    {
     for(j=0;j<c;j++)
      scanf("%d",&a[i][j]);
    }
 
  for(i=0;i<r;i++)
    {
     for(j=0;j<c;j++)
       printf("%d",a[i][j]);
      printf("\n");
    }
  printf("\n");
  for(i=0;i<r;i++)
    {
     for(j=0;j<c;j++)
       printf("%d",*(*(a+i)+j));
      printf("\n");
    }
  }
