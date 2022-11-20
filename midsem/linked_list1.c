#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
};

void create(struct node **start)
{
 struct node *temp;
 temp=(struct node*)malloc(sizeof(struct node));
 printf("Enter data : ");
 scanf("%d",&temp->data);
 temp->next=NULL;
 if(**start==NULL)
  {
   start=temp;
  }
 else
 {
  struct node *ptr;
  ptr=**start;
  while(ptr->next!=NULL)
   {
    ptr=ptr->next;
   }
  ptr->next=temp;
 }
}
void display(struct node **start)
{
 struct node *temp;
 if(**start!=NULL)
  {
   temp=**start;
   while(temp->next!=NULL)
    {
     printf("%d\n",temp->data);
     temp=temp->next;
    }
    printf("%d\n",temp->data);
   }    
}
void end(struct node **start)
{
 struct node *temp;
 int n=1;
 if(**start!=NULL)
  {
   temp=**start;
   while(temp->next!=NULL)
    {
     temp=temp->next;
     n=n+1;
    }
   int s=1;
   struct node *ptr;
   temp=**start;
   while(s<n-1)
    {
     temp=temp->next;
     s++;
    }
    ptr=temp->next;
    temp->next=NULL;
    free(ptr);
   }    
}
void main()
{
struct node *start=NULL;
//struct node *start1=NULL;
 int ch;
 do
 {
  printf("1-insert    2-display     3-end delet  \n");
//  printf("4-insert1   5-display1   6-end delet1   7-end\n");
  printf("Enter the choice : ");
  scanf("%d",&ch);
  if(ch==1)
   create(&start);
  if(ch==2)
   display(&start);
  if(ch==3)
   end(&start);
 }while(ch<4); 
}
