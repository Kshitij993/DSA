#include<stdio.h>

struct distance
{
  int km;
  float m;
};

void main()
{
  struct distance *d1;
  struct distance *d2;
  struct distance *d3;
  printf("enter the distance 1 :\n");
  scanf("%d",&d1->km);
  scanf("%f",&d1->m);
  printf("enter the distance 2 :\n");
  scanf("%d",&d1->km);
  scanf("%f",&d1->m);
  int ms= d1->m+d2->m;
  if(ms>=1000)
  {
   d3->km=1;
   d3->m=ms-1000;
  }
  else
   d3->km=0;
   
  d3->km=d3->km+d1->km+d2->km;
  printf(" km : %d ",d3->km);
  printf(" m  : %f",d3->m);
 }
