#include<stdio.h>
int top=-1;
int n=20;
char a[20];
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
  a[top]='(';
 }
}
void display()
{
 if(top==-1)
  {
   printf("All brackets matching\n");
   return;
  }
 else
  {
   printf("not matching\n");
  }
  printf("\n");
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
  char str[20]; 
  scanf("%[^\n]%*c", str);
  for(int i=0;str[i]!='\0';i++)
   {
    if(str[i]=='(')
     push();
    if(str[i]==')')
      pop();
   }
   display();
}


