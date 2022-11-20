//question 1
#include<stdio.h>
#include<math.h>

int level;
void main()
{
 printf("enter the levels of tree : ");
 scanf("%d",&level);
 int size=pow(2,level+1)-1;
 int a[size],i,ch;
 printf("Enter root element : ");
 scanf("%d",&a[0]);
 for(i=0;i<size;i++)
  {
   if(a[i]==-1)
   {
    a[2*i+1]=-1;
    a[2*i+2]=-1;
   }
   else
   {
    if(2*i+2>size)
     break;
    printf("you want to enter left of %d 0-no 1-yes:",a[i]);
    scanf("%d",&ch);
    if(ch==1)
     {
      printf("enter left element : ");
      scanf("%d",&a[2*i+1]);
     }
     else
      a[2*i+1]=-1;
    printf("you want to enter right of %d 0-no 1-yes :",a[i]);
    scanf("%d",&ch);
    if(ch==1)
     {
      printf("enter right element : ");
      scanf("%d",&a[2*i+2]);
     }
     else
      a[2*i+2]=-1;
   }
 }
 printf("\n");
 for(i=0;i<size;i++)
  printf("%d ",a[i]);
}
