#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *next;
};
struct node *top=NULL;

void push()
{
 struct node *temp;
 temp=(struct node*)malloc(sizeof(struct node));
 printf("Data : ");
 scanf("%d",&temp->data);
 temp->next=top;
 top=temp;
}
void display()
{
 struct node *temp;
 if(top!=NULL)
  {
   temp=top;
   while(temp->next!=NULL)
   {
    printf("%d\n",temp->data);
    temp=temp->next;
   }
   printf("%d\n",temp->data);
 }
}
void pop()
{
 if(top!=NULL)
  {
   struct node *temp;
   temp=top;
   top=top->next;
   free(temp);
  }
 else
 {
  printf("\nUnderflow\n");
 }
}
void main()
 {
  int ch;
  do
  {
   printf("\n1-Push       2-display       3-pop       4-end\n");
   printf("Enter choice : ");
   scanf("%d",&ch);
   if(ch==1)
    push();
   if(ch==2)
    display();
   if(ch==3)
    pop();
  }while(ch<4);
}
