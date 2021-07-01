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
void printList(node* list){
    tptr = list;
    if(tptr == NULL){
        return;
    }
    else{
        printf("%d  ",tptr->data);
        printList(tptr->next);
    }
}
int main(){
    createNode();
    if(list == NULL){
        printf("list has no item\n");
        return;
    }
    else {
        printf("\nList items : ");
        printList(list);
        printf("\n");
    }
    int item;
    again:
    printf("Item to be searched : ");
    scanf("%d",&item);
    searching(item);
    goto again;
}
void searching(int item){
    tptr = list;
    while(tptr->data != item){
            if(tptr->next == NULL){
                printf("%d is not found!!!\n",item);
                break;
            }
        tptr = tptr->next;
    }
    if(tptr->data == item){
        printf("%d is found\n",tptr->data);
    }
}
