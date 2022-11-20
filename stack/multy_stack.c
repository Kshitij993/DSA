#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
};

void push(struct node **top)
	{
 	  struct node *temp;
	  temp=(struct node*)malloc(sizeof(struct node));
 	  printf("Enter data : ");
 	  scanf("%d",&temp->data);
 	  temp->next=(*top);
 	  *top=temp;
	}
	
void display(struct node **top)
	{
	 struct node *temp;
	 if((*top)!=NULL)
  		{
   			temp=(*top);
 		        while(temp->next!=NULL)
    			{
    			  printf("%d\n",temp->data);
   			  temp=temp->next;
    			}
    		printf("%d\n",temp->data);
   		}    
	}

void pop(struct node **top)
	{
 	   struct node *temp;
	   if((*top)!=NULL)
           {
             temp= (*top);
             *top=(*top)->next;
             free(temp);
           }
           else
             printf("underflow");
	}

void main()
	{
	 int ch;
	 struct node *top=NULL;
	 struct node *top1=NULL;	
	 do
	  {
	  printf("1-insert    2-display     3-pop   \n");
 	  printf("4-insert1   5-display1   6-pop1   7-end\n");
	  printf("Enter the choice : ");
	  scanf("%d",&ch);
	  if(ch==1)
  	     push(&top);
  	  if(ch==2)
   	     display(&top);
  	  if(ch==3)
   	     pop(&top);
 	  if(ch==4)
   	     push(&top1);
  	  if(ch==5)
   	     display(&top1);
  	  if(ch==6)
   	     pop(&top1);
         }while(ch<7); 
	}
