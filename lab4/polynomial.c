#include<stdio.h>
void main()
{
 int d1,d2,i;
 printf("Enter the degree of 1st polynomial : ");
 scanf("%d",&d1);
 int p1[d1+1];
 printf("Enter the Polynomial : \n\n");
 for(i=0;i<d1+1;i++)
  {
   printf("Enter the cofficient of X^%d : ",i);
   scanf("%d",&p1[i]);
  }
  printf("\n P1 \n");
 for(i=d1;i>=0;i--)
  {
   printf("%dx^%d + ",p1[i],i);
   
  }
  printf("0 \n"); 
 printf("Enter the degree of 2nd polynomial : ");
 scanf("%d",&d2);
 int p2[d2+1];
  for(i=0;i<d2+1;i++)
  {
   printf("Enter the cofficient of X^%d : ",i);
   scanf("%d",&p2[i]);
  }
  printf("\nP2 \n");
  
  for(i=d2;i>=0;i--)
  {
   printf("%dx^%d + ",p2[i],i);
  } 
  printf("0 \n");
  printf("\n Sum \n");
  int d3,c=0,d4;
  if(d1>=d2)
   {
   d3=d1;
   c=1;
   d4=d2;
   }
  else 
  {
   d3=d2;
   d4=d1;
  }
   
  int p3[d3+1];
  
  for(i=0;i<d3+1;i++)
   {
     if(i<=d4)
       p3[i]=p1[i]+p2[i];
     if(c==1&&i>d4)
       p3[i]=
       
   }
 for(i=d2;i>=0;i--)
  {
   printf("%dx^%d + ",p3[i],i);
  }
  printf("0 \n"); 
 }
