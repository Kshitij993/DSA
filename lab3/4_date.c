#include<stdio.h>

struct date
{
 int d,m,y;
};
void display(struct date d)
{
 printf("DD/MM/YYYY :%d/%d/%d ",d.d,d.m,d.y);
} 
void nextmonth(struct date d)
{
 struct date d1;
 if(d.m==12)
  {
   d.m=0;
   d.y=d.y+1;
  }
 d1.d = d.d;
 d1.m = d.m+1;
 d1.y = d.y;
 display(d1);
}
void nextyear(struct date d)
{
  struct date d1;
  d1.d = d.d;
  d1.m = d.m;
  d1.y = d.y+1;
  display(d1);
}
void add_month(struct date d)
{
 printf("\nEnter months to add\n");
 int d;
 scanf("%d",&d);
 struct date d1;
 d1.d=d.d;
 d1.m=d.m+d;
 d1.y=d.y;
 if(d.m+d>12)
   {
    d1.m=d.d+d-12;
    d1.y=d1.y+1;
   }
  display(d1); 
}
void add_year(struct date d)
{
 struct date d1;
 int y;
 printf("\nenter the year to add\n");
 scanf("%d",&y);
 d1.d = d.d;
 d1.m = d.m;
 d1.y = d.y+y;
 display(d1);
}
int month_name(struct date d)
{
 int d;
 if(d.m==1)
  {
   printf("\nJan\n");
   d=31;
   return d;
  } 
 if(d.m==2)
  {
  printf("\nFeb\n");
  if((d.y%400==0)||(d.y%4==0 && d.y%100!=0))
   d=29;
  else
   d=28;
  return d;
  }
 if(d.m==3)
 {
  printf("\nMarch\n");
  d=31;
  return d;
 }
 if(d.m==4)
  {
  printf("\nApril\n");
  d=30;
  return d;
  }
 if(d.m==5)
 {
  printf("\nMay\n");
  d=31;
  return d;
 }
 if(d.m==6)
  {
  printf("\nJune\n");
  d=30;
  return d;
  }
 if(d.m==7)
  {
  printf("\nJuly\n");
  d=31;
  return d;
  }
 if(d.m==8)
 {
  printf("\nAugust\n"); 
  d=31;
  return d;
 }
 if(d.m==9)
  {
  printf("\nsep\n");
  d=30;
  return d;
  }
 if(d.m==10)
 {
  printf("\nOct\n");
  d=31;
  return d;
 }
 if(d.m==11)
 {
  printf("\nNov\n");
  d=30;
  return d;
 }
 if(d.m==12)
 {
  printf("\nDec\n");  
  d=31;
  return d;
 } 
}
void nextdate(struct date d)
{
 struct date d1;
 int dm=month_name(d);
 if(d.d==dm)
  {
    d.d=0;
    if(d.m==12)
      {d.m=0;
       d.y=d.y+1;
      }
    d.m=d.m+1;
  }
 d1.d = d.d+1;
 d1.m = d.m;
 d1.y = d.y;
 display(d1);
}
void add_days(struct date d)
{
  struct date d1;
  int days,dm;
  printf("\nEnter the no of days to add \n");
  scanf("%d",&days);
  dm = month_name(d);
  if(days+d.d>dm)
   {
     d1.d = days+d-dm;
     d1.m=d1.m+1;
   }
   else
   {
     d1.d=days+d.d;
   }
   display(d1);
}

void main()
{
 struct date d;
 printf("Enter day : ");
 scanf("%d",&d.d);
 printf("Enter month : ");
 scanf("%d",&d.m);
 printf("Enter year : ");
 scanf("%d",&d.y);
 int ch;
 do
 {
  printf("\nMENU\n");
  printf("1-Next date         2-Next month       3-Next year         4-Add few days\n");
  printf("5-Add few month     6-Add few year     7-Month Name        8-DD/MM/YY\n");
  printf("9-End\n");
  printf("enter the chioce\n");
  scanf("%d",&ch);
  if(ch==1)
   {
   nextdate(d);
   }
  if(ch==2)
   {
   nextmonth(d);
   }
  if(ch==3)
   {
   nextyear(d);
   }   
  if(ch==4)
  {
  add_days(d);
  }
  if(ch==5)
  {
  add_month(d);
  }
  if(ch==6)
   {
   add_year(d);
   }
  if(ch==7)
   {
   int n=month_name(d);
   }
  if(ch==8)
   {
   display(d);
   }     
 }while(ch<9);
printf("\nThank you\n");
}

