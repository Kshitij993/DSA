#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
};
struct node *start=NULL;
void create()
{
 struct node *temp;
 temp=(struct node*)malloc(sizeof(struct node));
 printf("Enter data : ");
 scanf("%d",&temp->data);
 temp->next=NULL;
 if(start==NULL)
  {
   start=temp;
  }
 else
 {
  struct node *ptr;
  ptr=start;
  while(ptr->next!=NULL)
   {
    ptr=ptr->next;
   }
  ptr->next=temp;
 }
}
void display()
{
 struct node *temp;
 if(start!=NULL)
  {
   temp=start;
   while(temp->next!=NULL)
    {
     printf("%d\n",temp->data);
     temp=temp->next;
    }
    printf("%d\n",temp->data);
   }    
}
void maxmin()
{
 struct node *temp;
 int max,min;
 if(start!=NULL)
  {
   temp=start;
   max=temp->data;
   min=temp->data;
   do
   {
    if(max<temp->data)
      max=temp->data;
    if(min>temp->data)
      min=temp->data;
    temp=temp->next; 
   }while(temp->next!=NULL);
  }
 printf("max=%d \n",max);
 printf("min=%d \n",min); 
}
void main()
{
 int ch;
 do
 {
  printf("1-insert    2-display     3-max min   4-end\n");
  printf("Enter the choice : ");
  scanf("%d",&ch);
  if(ch==1)
   create();
  if(ch==2)
   display();
  if(ch==3)
   maxmin();
 }while(ch<4); 
}
