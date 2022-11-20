#include<stdio.h>

struct times
{
 int h,m,s;
}; 
void sub(struct times h1, struct times h2)
{
 struct times h;
 int t1=(h1.h*60*60)+(h1.m*60)+h1.s;
 int t2=(h2.h*60*60)+(h2.m*60)+h2.s;
 int t,r1;
 if(t2==t1)
  {
   printf("0h 0m 0s");
  }
  else if(t2>t1)
  {
   t=t2-t1;
   printf("\n%d",t);
   h.h=t/3600;
   r1=t%3600;
   h.m=r1/60;
   h.s=r1%60;
   printf("h1=%d h %d m %d s",h1.h,h1.m,h1.s);
   printf("\nh1=%d h %d m %d s",h2.h,h2.m,h2.s);
   printf("\ndiff=%d h %d m %d s",h.h,h.m,h.s);
  }
  else if(t2<t1)
   printf("\ncannot subtract\n");
  

}
void main()
{
  struct times h1,h2;
  printf("\nenter h1\n");
  scanf("%d",&h1.h);
  scanf("%d",&h1.m);
  scanf("%d",&h1.s);
  printf("\nenter h2\n");
  scanf("%d",&h2.h);
  scanf("%d",&h2.m);
  scanf("%d",&h2.s);
  sub(h1,h2);
}
