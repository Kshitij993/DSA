#include<stdio.h>
int top=-1;
int n=20;
char a[20];
void push(char c)
{
 if(top==n)
  {
  printf("overflow\n");
  return;
  }
 else
 {
  top+=1;
  a[top]=c;
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
   printf("%c",a[i]);
  }
  printf("\n");
}

void main()
{
  char str[20]; 
  scanf("%[^\n]%*c", str);
  for(int i=0;str[i]!='\0';i++)
   {
    push(str[i]);
   }
   display();
}


