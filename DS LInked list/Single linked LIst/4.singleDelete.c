#include <stdio.h>
#include <stdlib.h>
struct linked_list{
    int data;
    struct linked_list *next;
};
typedef struct linked_list node;
node* list = NULL;
node* tptr = NULL;
node* nptr = NULL;
node* tempnode = NULL;
void createNode(){
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

        if(list == NULL){
            list = nptr;
            tptr = nptr;
        }
        else{
            tptr->next = nptr;
            tptr = nptr;
        }
       createNode();
    }
}
void printList(node* list)
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
void deleting(int item){

    tptr = list;

    if(list == NULL){
        printf("List is empty\n");
        return;
    }
    if(item == list->data){
        list = tptr->next;
        return;
    }
    while(item != tptr->data){
        if(tptr->next == NULL){
            printf("Item not found!! Can't be deleted\n");
            return;
        }
        tempnode = tptr;
        tptr = tptr->next;
    }
    if(item == tptr->data){
        if(tptr->next == NULL){
            tempnode->next = NULL;
        }
        else{
            tempnode->next = tptr->next;
        }
    }
}
int main(){
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
    printf("\nItem to be deleted : ");
    scanf("%d",&item);
    deleting(item);
    if(list == NULL){
        printf("List is empty. Nothing to delete anymore\n");
        return 0;
    }
    printf("New list : ");
    printList(list);
    goto again;
}
