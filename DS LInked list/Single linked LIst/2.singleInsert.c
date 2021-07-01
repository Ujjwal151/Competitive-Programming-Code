#include <stdio.h>
#include <stdlib.h>

struct linked_list
{
    int data;
    struct linked_list *next;
};
typedef struct linked_list node;


node* list = NULL;
node* tptr = NULL;
node* nptr = NULL;
node* tempnode = NULL;


void createNode()
{
    int item;
    printf("Enter any data or -999 to end\n");
    printf("Your input: ");
    scanf("%d",&item);
    if(item == -999)
    {
        return;
    }
    else
    {

        nptr = (node *)malloc (sizeof(node));
        nptr->data = item;
        nptr->next = NULL;

        if(list == NULL)
        {
            list = nptr;
            tptr = nptr;
        }
        else
        {
            tptr->next = nptr;
            tptr = nptr;
        }
        createNode();
    }
}

void printList(node* list)
{
    tptr = list;
    if(tptr == NULL)
    {
        return;
    }
    else
    {
        printf("%d  ",tptr->data);
        printList(tptr->next);
    }
}

int main()
{
    createNode();

    if(list == NULL)
    {
        printf("list has no item\n");
    }
    else
    {
        printf("\nList items : ");
        printList(list);
        printf("\n");
    }

    int item;
again:
    printf("\nItem to be inserted : ");
    scanf("%d",&item);
    inserting(item);
    printf("New list : ");
    printList(list);
    goto again;

}

void inserting(int item)
{
    nptr = (node *)malloc (sizeof(node));
    nptr->data = item;
    nptr->next = NULL;

    tptr = list;

    if(item < list-> data)
    {
        list = nptr;
        nptr->next = tptr;
        return;
    }

    while(item >= tptr->data)
    {
        if(tptr->next == NULL)
        {
            tptr->next = nptr;
            return;
        }
        tempnode = tptr;
        tptr = tptr->next;
    }

    if(item < tptr->data)
    {
        tempnode->next = nptr;
        nptr->next = tptr;
    }
}
