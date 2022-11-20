#include<stdio.h>
#include<stdlib.h>
struct node1
{
 int data1;
 struct node1 *next1;
 };
 
struct node1 *top1=NULL;

void push1(int a)
 {
  struct node1 *temp1;
  temp1 =(struct node1*)malloc(sizeof(struct node1));
  temp1->data1=a;
  temp1->next1=NULL;
  if(top1==NULL)
   {
    top1=temp1;
   }
  else 
  {
   temp1->next1=top1;
   top1=temp1;
  }
 }
 
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
 printf("Enter data : ");
 scanf("%d",&temp->data);
 temp->next=NULL;
 if(top==NULL)
  {
   top=temp;
  }
 else 
 {
  temp->next=top;
  top=temp;
 }
}

int display()
 {
  int n=0;
  struct node *temp;
  if(top!=NULL)
   {
    temp=top;
    while(temp->next!=NULL)
     {
      printf("%d\n",temp->data);
      n++;
      temp=temp->next;
     }
     printf("%d\n",temp->data);
     n++;
    }
    return n;
   }
void display1()
 {
  struct node1 *temp;
  if(top1!=NULL)
   {
    temp=top1;
    while(temp->next1!=NULL)
     {
      printf("%d\n",temp->data1);
      temp=temp->next1;
     }
     printf("%d\n",temp->data1);
    }
   } 
 void delete_mid( int n)
 {
   struct node *temp;
   int s=0;
   if(top!=NULL)
   {
    temp=top;
    while(temp->next!=NULL)
     {
      if(s!=n/2)
       push1(temp->data);
       s++;
      temp=temp->next;
     }
     push1(temp->data);
    }
    display1();
 }
 void main()
 {
  int ch=1;
  while(ch!=0)
   {
    push();
    printf("Enter 1 to push again 0 to end : ");
    scanf("%d",&ch);
   }
  int n; 
  n=display(); 
  delete_mid(n);
 } 
  
  
  
