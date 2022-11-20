#include<stdio.h>
int size=20;
int a[20],front=-1 ,rear=-1;
void insert()
	{
	 int e;
	 printf("data : ");
	 scanf("%d",&e);
	 if(front==-1)
	  {
	   front =0;
	   rear=0;
	  }
	 else
	  {
	   rear=(rear+1)%size;
	  }
	  a[rear]=e;
	 }
void delete()
	{
	 if(front==-1)
	 	printf("underflow");
	 else if(front==rear)
	 	{
	 	front=-1;
	 	rear=-1;
	 	}
	 else
	 	front=(front+1)%size;
	}  
void display()
	{
	 int i;
	 if(front!=-1)
	  {
	   i=front;
	   for(i=front;i<=rear;i++)
	    printf("%d ",a[i]);
	    printf("\n");
	  }
	}
void main()
	{
	int ch;
	do
	{
	printf("1-insert      2-delete       3-display    4-peek     5-isEmpty      6-isFull       7-end\n");
	printf("choice : ");
	scanf("%d",&ch);
	if(ch==1)
		insert();
	if(ch==2)
		delete();
	if(ch==3)
		display();
	if(ch==4)
	        {
	        if(front!=-1)
	         {
	 	  printf("%d",a[front]);
	 	 }
	 	}
	if(ch==5)
		{
		if(front==-1)
			printf("\nqueue is empty\n");
		else
			printf("\nnot empty\n");
		}
	if(ch==6)
		{
		if(size==rear)
			printf("\nFULL\n");
		else
			printf("\nNot full\n");
		}
	}while(ch<7);
	}
	 
	 
