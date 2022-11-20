#include<stdio.h>
void display(int r[], int c[], int v[], int n)
{
 printf("ROW\t COLOUM\t VALUE \n");
 for(int i=0;i<n+1;i++)
 printf("%d\t %d\t %d\n",r[i],c[i],v[i]); 
}
void main()
{
 int n,row,col;
 printf("Enter the number of non zero values : ");
 scanf("%d",&n);
 printf("Enter the number of row : ");
 scanf("%d",&row);
 printf("Enter the number of coloum : ");
 scanf("%d",&col);
 int r[n+1],c[n+1],v[n+1],i;
 r[0]=row;
 c[0]=col;
 v[0]=n;
 for(i=1;i<n+1;i++)
  {
   printf("row : ");
   scanf("%d",&r[i]);
   printf("coloum : ");
   scanf("%d",&c[i]);
   printf("value : ");
   scanf("%d",&v[i]);
  }
  display(r,c,v,n);
  int t;
  for(i=0;i<n+1;i++)
  {
    t=r[i];
    r[i]=c[i];
    c[i]=t;
  }
  display(r,c,v,n);
}
