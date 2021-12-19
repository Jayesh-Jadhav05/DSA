#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void travarsal(struct node *head){

      while(head!=NULL){

          printf("%d ",head->data);
          head=head->next;
      }
}
int main(){

    struct node *head;
    struct node *e1;
    struct node *e2;
    struct node *e3;
    struct node *e4;
    head=(struct node *)malloc(sizeof(struct node));  //request the heap for memory create.
    e1=(struct node *)malloc(sizeof(struct node));
    e2=(struct node *)malloc(sizeof(struct node));
    e3=(struct node *)malloc(sizeof(struct node));
    e4=(struct node *)malloc(sizeof(struct node));
    head->data=2;
    head->next=e1;
    e1->data=3;
    e1->next=e2;
    e2->data=4;
    e2->next=e3;
    e3->data=5;
    e3->next=e4;
    e4->data=6;
    e4->next=NULL;
    travarsal(head);
    return 0;
}