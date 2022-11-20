#include<stdio.h>
#include<stdlib.h>
struct employee
{
 char name[30],gender,desig[30],dep[30];
 int basic;
 float gross,da,hr;
 } s[10];
 int n;
 void calc()
 {
    for( int i=0;i<n;i++)
     {
      s[i].da=0.75*s[i].basic;
      s[i].ha=0.25*s[i].basic;
      s[i].gross= s[i].basic+s[i].da+s[i].hr;
     }
 }
 void input()
 {
   printf("enter the no of employee \n");
   scanf("%d",&n);
   for( int i=0;i<n;i++)
   {
    printf("--------------------------------------------\n");
    printf("name : ");
    scanf("%s",&s[i].name);
    printf("gender : ");
    scanf("%s",&s[i].desig);
    printf("department : ");
    scanf("%s",&s[i].dep);
    printf("basci : ");
    scanf("%d",&s[i].basic);
   } 
   calc();
 }
 void display()
 {
   for( int i=0;i<n;i++)
   {
    printf("--------------------------------------------\n");
    printf("name :%s",s[i].name);
    printf("basic : %d",s[i].basic);
    printf("hr : %f",s[i].hr);
    printf("da : %f",s[i].da);
    printf("gross : %f",s[i].gross);
   } 
 } 
void main()
{
   input();
   display();
}
