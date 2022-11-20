#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *prev;
 struct node *next;
};
struct node *start=NULL;
struct node *end=NULL;

void create()
{
 struct node *temp;
 temp=(struct node*)malloc(sizeof(struct node));
 printf("enter data : ");
 scanf("%d",&temp->data);
 temp->next=NULL;
 temp->prev=NULL;
 if(start==NULL)
  {
   start=temp;
   end=temp;
  }
  else
  {
   end->next=temp;
   temp->prev=end;
   end=temp;
  }
}
void fdisplay()
{
 struct node *temp;
 temp=start;
 if(start==NULL)
  printf("\nunderflow\n");
 else
 {
  while(temp->next!=NULL)
   {
    printf("\n%d",temp->data);
    temp=temp->next;
   } 
  printf("\n%d\n",temp->data);
 } 
}
void bdisplay()
{
 struct node *temp;
 temp=end;
 if(end==NULL)
  printf("\nunderflow\n");
 else
 {
  while(temp->prev!=NULL)
   {
    printf("\n%d",temp->data);
    temp=temp->prev;
   } 
  printf("\n%d\n",temp->data);
 } 
}
void insert()
{
  int ch;
  do
  {
   printf("1-begining    2-end       3-any position     4-back to main menu \n");
   printf("enter the choice \n");
   scanf("%d",&ch);
   if(ch==1)
    {
     struct node *temp;
     temp=(struct node*)malloc(sizeof(struct node));
     printf("enter data : ");
     scanf("%d",&temp->data);
     temp->prev=NULL;
     temp->next=start;
     start->prev=temp;
     start=temp;
    }
   if(ch==2)
    {
     struct node *temp;
     temp=(struct node*)malloc(sizeof(struct node));
     printf("enter data : ");
     scanf("%d",&temp->data);
     temp->next=NULL;
     temp->prev=end;
     end->next=temp;
     end=temp;
    }
   if(ch==3)
    {
     struct node *temp;
     struct node *tmp;
     temp=(struct node*)malloc(sizeof(struct node));
     printf("enter data : ");
     scanf("%d",&temp->data);    
     int p;
     printf("enter the position to insert : ");
     scanf("%d",&p);
     int c=1;
     tmp=start;
     while(c<p)
      {
       tmp=tmp->next;
       c++;
      }
      temp->prev=tmp;
      temp->next=tmp->next;
      tmp->next=temp;
    }
  }while(ch<4);
}
void delete()
{
 int ch;
  do
  {
   printf("1-begining    2-end       3-any position     4-back to main menu \n");
   printf("enter the choice \n");
   scanf("%d",&ch);
   if(ch==1)
    {
      struct node *temp;
      temp=start;
      start=start->next;
      start->prev=NULL;
      free(temp);
    }
   if(ch==2)
    {
      struct node *temp;
      temp=end;
      end=end->prev;
      end->next=NULL;
      free(temp);
    }
   if(ch==3)
    {
     struct node *temp;
     struct node *tmp;
     int p;
     printf("Element position to delete : ");
     scanf("%d",&p);
     int c=1;
     while(c<=p)
      {
        tmp=tmp->next;
        c++;
      }
     temp=tmp->prev;
     temp->next=tmp->next;
     temp=tmp->next;
     temp->prev=tmp->prev;
    }
   }while(ch<4);
}
void main()
{
  int ch;
  do
  {
   printf("1-create         2-forward Display      3-backword Dispaly          4-insert         5-Delete     6-end\n");
   printf("enter the choice : ");
   scanf("%d",&ch);
   if(ch==1)
    create();
   if(ch==2)
    fdisplay();
   if(ch==3)
    bdisplay();
   if(ch==4)
    insert();
   if(ch==5)
    delete();
  }while(ch<6);  
}
