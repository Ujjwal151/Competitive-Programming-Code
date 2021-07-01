#include <stdio.h>
#include <stdlib.h>

struct linked_list{
    int data;
    struct linked_list *next;
};
typedef struct linked_list node;

node* list = NULL;
node* tptr;

createNode(){
    int item;
    printf("Enter any data or -999 to end\n");
    printf("Your input: ");
    scanf("%d",&item);
    if(item == -999){
        return;
    }
    else{
        node* nptr;
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

deleting(node* list){
    if(list == NULL){
        printf("List is empty. Nothig to delete");
    }
    else{
        int item;
        printf("\nWhich data you want to dalete : ");
        scanf("%d",&item);
        searching(item,list);
    }

}

searching(int item,node* tptr){
    if(tptr->next == NULL){
        printf("Item not found");
    }
    else{
        if(tptr->data == item){
        //printf("%d  %d  %d   %d\n",tptr,tptr->next,list,list->next);
        tptr = tptr->next; //temporary node ahed
        list = list->next; // list node ahed
        //printf("%d  %d  %d   %d\n",tptr,tptr->next,list,list->next);
        }
        else if(tptr->next->data == item  && tptr->next->next == NULL){
            tptr->next = NULL;
        }
        else if(tptr->next->data == item){
            tptr->next = tptr->next->next;
        }
        else{
            searching(item,tptr->next);
        }
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

    again:
    deleting(list);
    printf("\nList items : ");
    printList(list);

    goto again;

}
