#include<stdio.h>
#include<stdlib.h>
struct student
{
 int roll;
 char name[30],gender;
 float marks;
 } s[10];
 int n;
 void input()
 {
   printf("enter the no of student \n");
   scanf("%d",&n);
   for( int i=0;i<n;i++)
   {
    printf("--------------------------------------------\n");
    printf("roll : ");
    scanf("%d",&s[i].roll);
    getchar();
    printf("name : ");
    scanf("%s",&s[i].name);
    getchar();
    printf("gender : ");
    scanf("%c",&s[i].gender);
    printf("marks : ");
    scanf("%f",&s[i].marks);
   } 
 }
 void display()
 {
   for( int i=0;i<n;i++)
   {
    printf("--------------------------------------------\n");
    printf("roll :%d ",s[i].roll);
    printf("\n");
    printf("name :%s",s[i].name);
    printf("\n");
    printf("gender :%c ",s[i].gender);
    printf("\n");
    printf("marks : %f",s[i].marks);
    printf("\n");
   } 
 } 
void main()
{
   input();
   display();
}
