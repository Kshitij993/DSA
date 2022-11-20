#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
 };
 
void push(struct node **start, int n)
{
 struct node *temp;
 temp= (struct node*)malloc(sizeof(struct node));
 temp->data=n;
 temp->next= *start;
 *start=temp;
}

void disp(struct node **start)
 {
  struct node *temp;
  if(*start!=NULL)
   {
    temp= *start;
    do
    {
     printf("%d",temp->data);
     temp=temp->next;
    }while(temp->next!=NULL);
   }
 }
 
void sort()
 {
  
 }
 
 
 void main()
 {
  struct node *start=NULL;
  int ch;
  do
  {
  printf("1-insert      2-display        3-sort        4-end\n");
  printf("enter choice : ");
  scanf("%d",&ch);
  if(ch==1)
   {
    int n;
    printf("data : ");
    scanf("%d",&n);
    push(&start,n);
   }
  if(ch==2)
   disp(&start);
  if(ch==3)
   {
      int c=1;
      struct node *temp;
     
      if(*start!=NULL)
      {
       temp= *start;
       do
       {
        printf("%d",temp->data);
        temp=temp->next;
        c++;
       }while(temp->next!=NULL);
       
     }
     
     sort(&start);
   }
  }while(ch<4);
 }
  
