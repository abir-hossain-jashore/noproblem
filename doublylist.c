//changes has been made

#include<stdio.h>
#include<stdlib.h>
struct node* createEmpty(struct node* head, int data);
struct node* addAtFirst(struct node* head, int data);

struct node{

    struct node* previous;
    int data;
    struct node* next;

};

int main(){
    struct node* head = NULL;
    struct node* ptr;
   // int count = 1;
    //struct node*

    head = createEmpty(head, 44);
    printf("Head->|previous|%d|next|<=>", head->data);
    head = addAtFirst(head, 34);
    printf("|previous|%d|next|<=>", head->data);
    head = addAtFirst(head, 24);
    printf("|previous|%d|next|<=>", head->data);
    head = addAtFirst(head, 14);
    printf("|previous|%d|next|<=>", head->data);
    head = addAtFirst(head, 04);
    printf("|previous|%d|next|<=>", head->data);
    printf("NULL\n");

   // ptr = head;
   // while(ptr != NULL){
   //    printf("AT %d PLACE %d\n",count, head->data);
//count++;
    //   ptr = ptr->next;
   // }

    return 0;

}

struct node* createEmpty(struct node* head, int data){
    struct node* temp = (struct node*) malloc(sizeof(struct node*));

    temp->previous = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
}

struct node* addAtFirst(struct node* head, int data){
    struct node* temp = (struct node* ) malloc(sizeof(struct node*));
    temp->previous = NULL;
    temp->data = data;
    temp->next = NULL;
    temp->next = head;
    head->previous = temp;

    head = temp;

    return head;
}
