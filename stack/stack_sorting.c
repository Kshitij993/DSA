#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *next;
};

struct node *top=NULL;

struct node* top1=NULL;

struct node* push(struct node *temp)
{
 temp->next=top;
 top=temp;
}

struct node* push1(struct node *temp)
{
 temp->next=top1;
 top1=temp;
}

struct node* pop()
{
 if(top!=NULL)
  {
   struct node *temp;
   temp=top;
   top=top->next;
   return temp;
  }
 else
 {
  printf("\nUnderflow\n");
 }
}
struct node* pop1()
{
 if(top1!=NULL)
  {
   struct node *temp;
   temp=top1;
   top1=top1->next;
   return temp;
  }
 else
 {
  printf("\nUnderflow\n");
 }
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
 else
  printf("%p\n",top);
}

void display1()
{
 struct node *temp;
 if(top1!=NULL)
  {
   temp=top1;
   while(temp->next!=NULL)
   {
    printf("%d\n",temp->data);
    temp=temp->next;
   }
   printf("%d\n",temp->data);
 }
 else
  printf("%p\n",top1);
}

void sorting()
{
 struct node* temp;
 struct node* temp1;
 struct node* ptr;

 while(top!=NULL)
 {
   temp=pop();
   if(top1==NULL)
    push1(temp);
   else
   {
      while(top1!=NULL && top1->data > temp->data)
      {
        ptr=pop1();
        push(ptr);
      }
      push1(temp);
   }
 }
   printf("\n---------------------------------------------------------------------\n");
   printf("\nstack\n");
   display();
   printf("\ntemp stack\n");
   display1();
   printf("\n---------------------------------------------------------------------\n");
}
void main()
 {
  int ch;
  do
  {
   printf("\n1-Push       2-display       3-pop       4-sorting    5-end\n");
   printf("Enter choice : ");
   scanf("%d",&ch);
   if(ch==1)
    {
     struct node* temp;
     struct node* ptr;
     temp=(struct node*)malloc(sizeof(struct node));
     printf("Data : ");
     scanf("%d",&temp->data);
     ptr=push(temp);
    }
   if(ch==2)
    display();
   if(ch==3)
    {
     struct node *temp ;
     temp=pop();
    }
   if(ch==4)
   {
     sorting();
   }
  }while(ch<5);
}
