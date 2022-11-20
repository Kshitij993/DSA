#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;

void insert()
{
 struct node *temp;
 temp=(struct node*)malloc(sizeof(struct node));
 printf("Data : ");
 scanf("%d",&temp->data);
 if(front==NULL)
  {
   front=temp;
   rear=temp;
  }
 else
  {
   rear->next=temp;
   rear=temp;
   rear->next=front;
  }
}
void display()
{
 struct node *temp;
 if(front!=NULL)
  {
   temp=front;
   while(temp->next!=NULL)
   {
    printf("%d\n",temp->data);
    temp=temp->next;
   }
   printf("%d\n",temp->data);
 }
}
void delete()
{
 if(front!=NULL)
  {
   struct node *temp;
   temp=front;
   front=front->next;
   free(temp);
  }
  else if(front ==rear)
  {
   front =NULL;
   rear=NULL;
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
   printf("\n1-insert       2-display       3-delete     4-peek       5-isEmpty      6-end\n");
   printf("Enter choice : ");
   scanf("%d",&ch);
   if(ch==1)
    insert();
   if(ch==2)
    display();
   if(ch==3)
    delete();
   if(ch==4)
    {
     if(front!=NULL)
     printf("%d",front->data);
    }
   if(ch==5)
    {
     if(front==NULL)
       printf("\nYes\n");
     else
       printf("\nNo\n");
    }
  }while(ch<6);
}
   
