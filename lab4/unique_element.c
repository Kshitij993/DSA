#include<stdio.h>
void main()
{
 int n;
 printf("Enter the size \n");
 scanf("%d",&n);
 
 int a[n],i,j,c=0;
 
 for(i=0;i<n;i++);
  scanf("%d",&a[i]);
  
 for(i=0;i<n-1;i++)
  {
  c=0;
   for(j=i+1;j<n;j++)
    {
     if(a[i]==a[j])
      {
       c++;
      }
      if(a[i]==a[j]&&c==1)
       {
        a[i]=a[i+1];
        n--;
       }
    } 
  }
  printf("\n");
  for(i=0;i<n;i++)
   printf("%d",a[i]);
 }  
