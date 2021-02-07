#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void peek();
void display();

struct node
{
    int data;
    struct node *link;
};
struct node *top=0;

 void main()
 {
  int option;
 while(1)
 {
  printf("\nchoose option");
  printf("\n 1.push"); 
  printf("\n 2.pop");
  printf("\n 3.peek");
  printf("\n 4.display");
  printf("\n 5.Exit");
  printf("\nenter your choice:");
  scanf("%d",&option);
  switch(option)
  {
   case 1 : push();
           break;
   case 2 : pop();
         break;
   case 3 : peek();
           break;
           
   case 4 :display();
           break;
   case 5 : exit(1);
   default : printf("\ninvalid choice \n");
  }

 }
  
}
void push()
{
    int data;
  struct node *newnode;
  newnode=(struct node *)malloc(sizeof(newnode));
  printf("enter the data:");
  scanf("%d",&newnode->data);
  newnode->link=top;
  top=newnode;
}
void pop()
{
    struct node *temp;
    temp=top;
    if(temp==0)
    {
        printf("stck is EMPTY:");
    }
    else
    {
        printf("poped data is %d",temp->data);
        top=temp->link;
    }
}

    
void peek()
{
  struct node *temp;
    temp=top;
    if(temp==0)
    {
        printf("stck is EMPTY:");
    }
    else
    {
        printf("top most data onto the stack is %d",temp->data);
        
    }
}
void display()
{
   struct node *temp;
   temp=top;
    if(temp==0)
    {
        printf("stck is EMPTY:");
    }
else
{
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->link;
        
    }
}
   
}


