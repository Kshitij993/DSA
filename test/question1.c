#include<stdio.h>

struct date
{
 int d,m,y;
};
void display(struct date d)
{
 printf("DD/MM/YYYY :%d/%d/%d ",d.d,d.m,d.y);
 printf("\n");
} 
int month_name(struct date d2)
{
 int d;
 if(d2.m==1)
  {
   d=31;
   return d;
  } 
 if(d2.m==2)
  {
  
  if((d2.y%400==0)||(d2.y%4==0 && d2.y%100!=0))
   d=29;
  else
   d=28;
  return d;
  }
 if(d2.m==3)
 {
  
  d=31;
  return d;
 }
 if(d2.m==4)
  {
  
  d=30;
  return d;
  }
 if(d2.m==5)
 {
  
  d=31;
  return d;
 }
 if(d2.m==6)
  {
  
  d=30;
  return d;
  }
 if(d2.m==7)
  {
  
  d=31;
  return d;
  }
 if(d2.m==8)
 {
  
  d=31;
  return d;
 }
 if(d2.m==9)
  {
  
  d=30;
  return d;
  }
 if(d2.m==10)
 {
  
  d=31;
  return d;
 }
 if(d2.m==11)
 {
  
  d=30;
  return d;
 }
 if(d2.m==12)
 {
  
  d=31;
  return d;
 } 
}

void main()
{
 struct date d1,d2,d;
 printf("DATE 1\n");
 printf("year : ");
 scanf("%d",&d1.y);
  printf("month : ");
 scanf("%d",&d1.m);
  printf("day : ");
 scanf("%d",&d1.d);
  printf("DATE 2\n");
 printf("year : ");
 scanf("%d",&d2.y);
  printf("month : ");
 scanf("%d",&d2.m);
  printf("day : ");
 scanf("%d",&d2.d);
 display(d1);
 display(d2);
 if(d2.y>=d1.y)
  {
   if(d2.d>d1.d)
    d.d=d2.d-d1.d;
   else
    {
     int a=month_name(d2);
     d2.m=d2.m-1;
     d.d=d2.d+a-d1.d;
    }
    if(d2.m>d1.m)
     d.m=d2.m-d1.m;
    else
     {
      d.m=d2.m+12-d1.m;
      d2.m=d2.m-1;
      }
    d.y=d2.y-d1.y;  
  }
  else
  printf("invalid input");
  display(d);
 }
