#include<stdio.h>
int top=-1;
int n=10;
int a[20];
void push()
{
 if(top==n)
  {
  printf("overflow\n");
  return;
  }
 else
 {
  top+=1;
  printf("Enter data :");
  scanf("%d",&a[top]);
 }
}
void display()
{
 if(top==-1)
  {
   printf("Underflow\n");
   return;
  }
 else
  {
  for(int i=top;i>=0;i--)
   printf("%d\n",a[i]);
  }
}
void pop()
{
  if(top==-1)
   {
    printf("Underflow");
    return;
    }
   else
   {
   top-=1;
   }
}
void main()
{
 int ch;
 do
 {
  printf("1-push      2-display      3-pop         4-end\n");
  printf("Enter choice : ");
  scanf("%d",&ch);
  if(ch==1)
     push();
  if(ch==2)
     display();
  if(ch==3)
     pop();
  }while(ch<4);
}


