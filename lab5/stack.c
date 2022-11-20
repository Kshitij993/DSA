#include<stdio.h>
#include<stdlib.h>
struct node
 {
   int data;
   struct node *next;
 };
struct node *start=NULL;
void push()
{
 struct node *temp;
 temp=(struct node*)malloc(sizeof(struct node));
 printf("\nEnter the data : ");
 scanf("%d",&temp->data);
 temp->next=NULL;
 if(start==NULL)
  {
    start= temp;
  }
 else
  {
    temp->next = start;
    start = temp;
  }
}
void pop()
{
 struct node *temp;
 if(start==NULL)
  {
   printf("\n Underflow\n");
  }
  else
  {
   temp=start;
   start=start->next;
   free(temp);
  }
}
void display()
{
  struct node *temp;
  temp=start;
  if(temp!=NULL)
   { 
  while(temp->next!=NULL)
   {
     printf("\n %d",temp->data);
     temp=temp->next;  
   }
   printf("\n%d\n",temp->data);
  } 
}

void main()
{
 int ch;
 do
 {
 printf("\n MENU \n");
 printf("   1-Push          2-Pop         3-Display         4-End\n");
 printf("   Enter the choice : ");
 scanf("%d",&ch);
 if(ch==1)
   push();
 if(ch==2)
   pop();
 if(ch==3)
   display();
   
 }while(ch<4);
  printf("\n Thank you \n");
}

