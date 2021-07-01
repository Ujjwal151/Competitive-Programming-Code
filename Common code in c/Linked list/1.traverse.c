#include<stdio.h>
#include<stdlib.h>
#define NULL 0
struct linked_list{
    int number;
    struct linked_list *next;
};
typedef struct linked_list node;

main(){

    node *head;
//  void create(node *p); int count(node *p); void print(node *p); == they are not needed
    head = (node *) malloc (sizeof(node));
    create(head); printf("\n");

    print(head); printf("\n");
    printf("\nNumber of items = %d\n",count(head));
}

void create(node *list){

    printf("Input a number\n");
    printf("Type -999 at end : ");
    scanf("%d",&list->number);

    if(list->number == -999){
        list->next = NULL;
    }
    else{
        list->next = (node *)malloc (sizeof(node));
        create(list->next);
    }
//    return; // no need
}

void print(node *list){

    if(list->next != NULL){
        printf("%d  ",list->number);
        if(list->next->next == NULL){
            printf("%d  ",list->next->number);
        }
        print(list->next);
    }
//    return; // no need
}

int count(node *list){

    if(list->next == NULL){
        return 0;
    }
    else
        return 1+ count(list->next);
}
