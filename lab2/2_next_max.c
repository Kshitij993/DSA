#include<stdio.h>
 
 void main()
 {
   int n,i,j,s;
   int *ptr;
   printf("enter the no of elements \n");
   scanf("%d",&n);
   ptr=(int*)calloc(n,sizeof(int));
   for(i=0;i<n;i++)
    scanf("%d",&ptr[i]);
   for(i=0;i<n;i++)
   {
     s=-1;
     for(j=i+1;j<n;j++)
      {
        if(ptr[i]<ptr[j])
         {
          s=ptr[j];
          break;
         }
      }
     printf("%d",ptr[i]);
     printf("--%d",s);
     printf("\n");
    }
   }    
