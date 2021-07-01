#include <stdio.h>
#include <stdlib.h>

struct linked_list{
    int data;
    struct linked_list *next;
    struct linked_list *back;
};
typedef struct linked_list node;

node* list = NULL;
node* tptr = NULL;
node* nptr = NULL;

createNode(){
    int item;
    printf("Enter any data or -999 to end\n");
    printf("Your input: ");
    scanf("%d",&item);
    if(item == -999){
        return;
    }
    else{

        nptr = (node *)malloc (sizeof(node));
        nptr->data = item;
        nptr->next = NULL;
        nptr->back = NULL;

        if(list == NULL){
            list = nptr;
            tptr = nptr;
        }
        else{
            tptr->next = nptr;
            nptr->back = tptr;
            tptr = nptr;
        }
       createNode();
    }
}

printList(node* list)
{
    tptr = list;
    if(tptr == NULL){
        return;
    }
    else{
        printf("%d  ",tptr->data);
        printList(tptr->next);
    }
}

void inserting(int item){

    node* nptr;
        nptr = (node *)malloc (sizeof(node));
        nptr->data = item;
        nptr->next = NULL;
        nptr->back = NULL;


    tptr = list;
    node* tempnode;

    while(item >= tptr->data){
        if(tptr->next == NULL){
            tptr->next = nptr;
            nptr->back = tptr;
            break;
        }
        tempnode = tptr;
        tptr = tptr->next;
    }
    if(item < list->data){
        list = nptr;
        nptr->next = tptr;
        tptr->back = nptr;

    }
    else if(item < tptr->data){
        tempnode->next = nptr;
        nptr->back = tempnode;
        nptr->next = tptr;
        tptr->back = nptr;
    }
    printf("New list : ");
    printList(list);
}

int main()
{
    createNode();

    if(list == NULL){
        printf("list has no item\n");
    }
    else {
        printf("\nList items : ");
        printList(list);
        printf("\n");
    }
    int item;
    again:
    printf("\nItem to be inserted : ");
    scanf("%d",&item);
    inserting(item);
    goto again;
}
