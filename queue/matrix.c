#include<stdio.h>
void main()
{
 int n,i,j,a[20][20],p,q;
 printf("enter the size of array : ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
    {
     scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
    {
     printf(" %d ",a[i][j]);
    }
    printf("\n");
  }
 printf("\n\n");
 p=(n-1)/2+1;
 q=(n-1)/2-1;
 int s=0;
 for(i=0;i<n;i++)
  {
    if(s<=(n-1)/2)
    {
     p--;
     q++;
      for(j=0;j<n;j++)
      {
       if(j>=p&&j<=q)
        printf("%d",a[i][j]);
       else
        printf(" ");
      } 
    }
    if(s>(n-1)/2)
     {
      p++;
      q--;
      for(j=0;j<n;j++)
       {
        if(j>=p&&j<=q)
         printf("%d",a[i][j]);
        else
         printf(" ");
       }  
     }
    printf("\n");
    s++;
  }
 }
 //
/
