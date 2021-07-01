#include <stdio.h>
#include <stdlib.h>

struct linked_list{
    int data;
    struct linked_list *next;
    struct linked_list *back;//
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
        nptr->back = NULL;//

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

printList(node* tptr)
{
    if(tptr == NULL){
        return;
    }
    else{
        printf("%d  ",tptr->data);
        printList(tptr->next);
    }
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
}
