#include<stdio.h>
#include<stdlib.h>
void main()
{
 int i,n,*list;
 printf("enter the no of elements to generate : ");
 scanf("%d",&n);
 if(n<1)
  {
   fprintf(stderr,"improper value of n\n");
   exit(EXIT_FAILURE);
  }
 list=(int*)malloc(n*sizeof(int));
 for(i=0;i<n;i++)
  scanf("%d",&list[i]);
  
 for(i=0;i<n;i++)
  printf("%d ",list[i]);
 
 printf("\n");
 
 for(i=0;i<n;i++)
  printf("%d ",*(list+i));
}
