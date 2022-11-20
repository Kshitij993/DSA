#include<stdio.h>
int top=-1;
int a[50];
int n=50;
void push(int b)
{
 if(top==n)
  {
  printf("overflow\n");
  return;
  }
 else
 {
  top+=1;
  a[top]=b;
 }
}
void display()
{
 if(top==-1)
  {
   return;
  }
 else
  {
  for(int i=top;i>=0;i--)
   printf("%d ",a[i]);
  }
}
void main()
{
 int b;
 printf("enter the no to convert to binary : ");
 scanf("%d",&b);
 int p;
 while(b!=0)
  {
   p=b%2;
   push(p);
   b=b/2;
  }
  display();
}
