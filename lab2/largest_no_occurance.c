#include<stdio.h>

void main()
{
 int n,i;
 int *ptr;
 printf("enter the no of element \n");
 scanf("%d",&n);
 ptr=(int*)calloc(n,sizeof(int));
 for(i=0;i<n;i++)
  scanf("%d",&ptr[i]);
 
 int max=ptr[0];
 for(i=0;i<n;i++)
  {
   if(max<ptr[i])
    max=ptr[i];
  }
  int c=0;
  for(i=0;i<n;i++)
   {
    if(ptr[i]==max)
     c++;
   }
  printf("\n max=%d",max);
  printf("\n count=%d",c);
 }
      
