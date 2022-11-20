#include<stdio.h>

struct complex
{
  int r,i;
};
void add(struct complex c1, struct complex c2)
{
 struct complex c3;
 c3.r=c1.r+c2.r;
 c3.i=c1.i+c2.i;
 printf("c1=%d+i%d",c1.r,c1.i);
 printf("\nc2=%d+i%d",c2.r,c2.i);
 printf("\nsum=%d+i%d",c3.r,c3.i); 
}
void main()
{
  struct complex c1,c2;
  printf("\nenter c1\n");
  scanf("%d",&c1.r);
  scanf("%d",&c1.i);
  printf("\nenter c2\n");
  scanf("%d",&c2.r);
  scanf("%d",&c2.i);
  add(c1,c2);
}
