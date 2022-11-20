#include<stdio.h>

void show(int a, int b)
 {
  printf("a=%d\n",a);
  printf("b=%d\n",b);
  b=b+5;
  a=a+5;
  printf("a=%d\n",a);
  printf("b=%d\n",b);
 }
void display(int *a, int *b)
 {
  printf("a=%d\n",*a);
  printf("b=%d\n",*b);
  *b=*b+5;
  *a=*a+5;
  printf("a=%d\n",*a);
  printf("b=%d\n",*b);
  printf("a=%u\n",a);
  printf("b=%u\n",b);
 }
void displaystr(char *c)
{
 printf("%s\n",c);
 while(*c!='\0')
  {
   printf("%c ",*c);
   c++;
  }
}
void main()
 {
  int x,y;
  x=5;
  y=10;
  show(x,y);
  printf("x=%d\n",x);
  printf("y=%d\n",y);
  display(&x,&y);
  printf("x=%p\n",&x);
  printf("y=%p\n",&y);
  printf("x=%d\n",x);
  printf("y=%d\n",y);
  char ch[30];
  scanf("%[^\n]",ch);
  printf("%s\n",ch);
  displaystr(&ch[0]);
 }
 
