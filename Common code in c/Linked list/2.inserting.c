#include<stdio.h>
#include<stdlib.h>

struct linked_list{
    int number;
    struct linked_list *next;
};
typedef struct linked_list node;
    node *deleteFunction(node *);
    node *find(node *, int );
main(){
    node *head;


    head = (node *) malloc (sizeof(node));
    create(head); printf("\n");

    printf("Original List : ");
    print(head); printf("\n");

    head = deleteFunction(head);

    printf("New List : ");
    print(head);
}

node *deleteFunction(node *head){



    int key;
    node *n1; //pointer to node preceding key node
    node *p; //temporary pointer
    printf("\nEnter the item to be deleted : ");
    scanf("%d",&key);

    if(head->number == key){
        p = head->next;
        free(head);
        head = p;
    }
    else{
        n1 = find(head,key);

        if(n1 == NULL){
            printf("\nKey not found\n");
        }
        else{
            p = n1->next->next; //Pointer to the node following(next) to the key node
            free(n1->next); //frees key node
            n1->next = p;   //Established link
        }
    }
    return head;
}

node *find(node *head, int key){

    node *temp;
    temp = head;

    if(temp->next->number == key)
        return head;

    else if(temp->next->next == NULL)
        return NULL;
    else find(head, key);

}

void create(node *list){

    printf("Input a number\n");
    printf("(type -999 at end) : ");
    scanf("%d",&list->number);

    if(list->number == -999){
        list->next = NULL;
    }
    else{
        list->next = (node *)malloc (sizeof(node));
        create(list->next);
    }
    return;
}

void print(node *list){

    if(list->next != NULL){
        printf("%d  ",list->number);
        if(list->next->next == NULL){
            printf("%d  ",list->next->number);
        }
        print(list->next);
    }
    return;
}
