#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define n pow(2,level)-1
int level,c=0;
struct node
 {
  int data;
  struct node* left;
  struct node* right;
};

struct node* root = NULL;

void insert(struct node *temp)
 {
  int l,r;
  printf("you want to insert left node of %d : 1/0 : ",temp->data);
  scanf("%d",&l);
  if(l==1)
   {
    struct node *temp_left;
    temp_left=(struct node*)malloc(sizeof(struct node));
    printf("node data : ");
    scanf("%d",&temp_left->data);
    temp_left->left=NULL;
    temp_left->right=NULL;
    temp->left=temp_left;
    insert(temp_left);
   }
  else if(l==0)
   {
     temp->left=NULL;
   }
  printf("you want to insert right node of %d : 1/0 : ",temp->data);
  scanf("%d",&r);
  if(r==1)
   {
    struct node *temp_right;
    temp_right=(struct node*)malloc(sizeof(struct node));
    printf("node data : ");
    scanf("%d",&temp_right->data);
    temp_right->left=NULL;
    temp_right->right=NULL;
    temp->right=temp_right;
    insert(temp_right);
   }
  else if(r==0)
   {
    temp->right=NULL;
   }
}
void inorder(struct node *temp)
 {
  if(temp)
   {
    if(temp->left==NULL && temp->right==NULL)
     c++;
    inorder(temp->left);
    printf("%d ",temp->data);
    inorder(temp->right);
    
   }
}
void main()
 {
  printf("Enter the levels to create in the tree : ");
  scanf("%d",&level);
  root=(struct node*)malloc(sizeof(struct node));
  printf("enter the root : ");
  scanf("%d",&root->data);
  root->left=NULL;
  root->right=NULL;
  insert(root);
  printf("\n");
  inorder(root);
  printf("\nNo of leaf node : %d \n",c);
 } 
 
 
