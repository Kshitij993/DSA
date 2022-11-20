#include<stdio.h>
#include<stdlib.h>
void sum(int **p,int **p2,int r, int c)
{
  int a[r][c],i,j;
  for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
     {
       a[i][j]=p[i][j]+p2[i][j];
      }
     } 
   for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
        printf("%d",a[i][j]);   
      printf("\n");
    } 
}
int main() 
{
    int **p;
    int **p2;
    int r,c,i,j;
    scanf("%d",&r);
    scanf("%d",&c);
    p = calloc(r, sizeof *p);
    for (i=0; i<r; i++)
    {
       p[i] = calloc(c, sizeof *(p[i]));
    }
    for(i=0;i<r;i++)
      for(j=0;j<c;j++)
        scanf("%d",&p[i][j]);
        
    p2 = calloc(r, sizeof *p2);
    
    for (i=0; i<r; i++)
    {
       p2[i] = calloc(c, sizeof *(p2[i]));
    }
    printf("\n");
    
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
        scanf("%d",&p2[i][j]);
        printf("\n");
    }
        
   printf("\n");
   for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
        printf("%d",p2[i][j]);   
      printf("\n");
    }
    sum(p,p2,r,c);

}


