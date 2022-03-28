#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*Create(int n);
 void Display(struct node*head);

 
int main()
{
    int n=0;
      struct node*HEAD=NULL;
printf("Enter the number of node in the linked list:");
scanf("%d",&n);
  
   HEAD= Create(n);
    Display(HEAD);

    return 0;
}
struct node*Create(int n){
     int i=0;
     struct node*head=NULL;
     struct node*temp;
     struct node*newnode;
     for(i=0;i<n;i++)
     {
          struct node*newnode=(struct node*)malloc(sizeof(struct node));
     
     printf("Enter the data of node%d: ",i+1);
     scanf("%d",&(newnode->data));
     newnode->next=NULL;
     
     if(head==NULL)
       head=newnode;
       else
       {
           temp=head;
           while(temp->next!=NULL)
           temp=temp->next;
           temp->next=newnode;
       }
     
     }
    return head;
 }
 void Display(struct node*head)
 {
     struct node*temp=head;
     while(temp!=NULL)
     {
         printf("%d->",temp->data);
         temp=temp->next;
     }
 }
