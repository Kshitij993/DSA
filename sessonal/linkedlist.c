#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
};
struct node *start=NULL;
int n=0;
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
     n++;
    }
    printf("%d\n",temp->data);
  }    
}

void reverse()
{
    if(start==NULL)
     return;
    else
    {
     struct node* temp;
     temp=start;
     int a=n,i=0,j=0;
     while(j<n)
     {
       temp=start;
       i=0;
       while(i<a)
       {
         temp=temp->next;
         i++;
       }
       printf("%d\n",temp->data);
       a=a-1;
     j++;
    }
  printf("%d \n",start->data);
  }
}
void main()
{
 int ch;
 do
 {
  printf("1-insert    2-display     3-reverse   4-end\n");
  printf("Enter the choice : ");
  scanf("%d",&ch);
  if(ch==1)
   create();
  if(ch==2)
   display();
  if(ch==3)
   reverse();
 }while(ch<4); 
}
