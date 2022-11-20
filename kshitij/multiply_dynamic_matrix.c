#include<stdio.h>
#include<stdlib.h>
int** input(int **a, int r,int c)
 {
  int i,j;
  a=calloc(r,sizeof(int));
  for(i=0;i<r;i++)
   a[i]=calloc(c,sizeof(int));
  for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
     scanf("%d",&a[i][j]);
   }
   return a;
 }
void display(int **a,int r,int c)
 {
  int i,j;
  for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
     printf("%d ",a[i][j]);
    printf("\n");
  }
}
int** multiply(int **a,int **b,int **d,int r,int c)
 {
  int i,j,s,y=0,x=0;
  d=calloc(r,sizeof(int));
  for(i=0;i<r;i++)
   d[i]=calloc(c,sizeof(int));
  for(i=0;i<r;i++)
   {
    x=0;
    y=0;
    while(x<c)
    {
     s=0;
     for(j=0;j<c;j++)
       s=s+(a[i][j]*b[j][x]);
     x++;
     d[i][y]=s;
     y++;
    }
   }
  return d;
 }
     
void main()
 {
  int **a,**b,**d,r,c;
  printf("Enter the no of row : ");
  scanf("%d",&r);
  printf("Enter the no of column : ");
  scanf("%d",&c);
  printf("Enter array 1 : \n");
  a=input(a,r,c);
  printf("Enter array 2 : \n");
  b=input(b,r,c);
  printf("\n");
  printf("array 1 : \n");
  display(a,r,c);
  printf("array 2 : \n");
  display(b,r,c);
  d=multiply(a,b,d,r,c);
  printf("\n");
  printf("Product : \n");
  display(d,r,c);
 }
 
