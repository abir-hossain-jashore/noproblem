#include<stdio.h>
#include<stdlib.h>
struct Node *creatlinklist(int link_list[], int x);

struct Node{
    int data;
    struct Node *next;

};

int main()
{
    int x;
    printf("HOW MANY DATA DO YOU WANT TO PUT IN THE LIST ");
    scanf("%d",&x);
    int link_list[x];

    printf("PUT THE DATA INTO THE LINKED LIST\n");
    for(int i = 0; i<x; i++){
        scanf("%d",&link_list[i]);
    }

    struct Node *head = NULL;
    head = creatlinklist(link_list, x);

    while(head != NULL){
        printf("%d -> ",head->data);
        head = head->next;
    }
    printf("NULL");
}

struct Node *creatlinklist(int link_list[], int x){
    struct Node *head = NULL, *temp = NULL, *current = NULL;
    for(int i = 0; i<x; i++){
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = link_list[i];
        temp->next = NULL;

        if(head == NULL){
            head = temp;
            current = temp;
        }
        else{
            current->next = temp;
            current = current->next;
        }
    }

    return head;
}
