#include<stdio.h>
#include<stdlib.h>
struct node
 {
   int data;
   int visited;
   struct node *next;
 };
struct node *front=NULL;
struct node *rear=NULL;
void push()
{
 struct node *temp;
 temp=(struct node*)malloc(sizeof(struct node));
 printf("\nEnter the data : ");
 scanf("%d",&temp->data);
 temp->next=NULL;
 if(front==NULL)
  {
    front= temp;
    rear=temp;
  }
 else
  {
    rear->next = temp;
    rear = temp;
  }
}
void pop()
{
 struct node *temp;
 if(front==NULL)
  {
    printf("\n under flow\n");
  }
 else if(front==rear)
  {
   front=NULL;
   rear = NULL;
  }
  else
  {
   temp=front;
   front=front->next;
  }
 
}
void display()
{
  struct node *temp;
  temp=front;
  if(temp!=NULL)
   {
  while(temp->next!=NULL)
   {
     printf("\n %d",temp->data);
     temp=temp->next;
   }
   printf("\n %d\n",temp->data);
  }
}
void displayRev()
{
 int n=0,i,j;
 struct node *temp;
 temp=front;
 while(temp->next != NULL)
 {
  n++;
  temp=temp->next;
 }
 temp=front;
 for(i=n-1;i>=0;i--)
  {
   for(j=0;j>=n-1;j++)
     {
      if(i==j)
       printf("%d",temp->data);
      temp=temp->next;
     }
   }   
}
void addtop()
 {
   struct node *temp;
   scanf("%d",&temp->data);
   temp->next=start;
   start=temp;
 }
void addend()
{
  struct node *temp;
  scanf("%d",&temp->data);
  rear->next=temp;
  rear=temp;
}
void main()
{
 int ch;
 do
 {
 printf("\n MENU \n");
 printf("   1-Push          2-Pop         3-Display         4-Display Rev     5-add top    6-add end       5-End\n");
 printf("   Enter the choice : ");
 scanf("%d",&ch);
 if(ch==1)
   push();
 if(ch==2)
   pop();
 if(ch==3)
   display();
 if(ch==4)
   displayRev();
  if(ch==5)
   addtop();
  if(ch==6)
   addend();
 }while(ch<5);
  printf("\n Thank you \n");
}

