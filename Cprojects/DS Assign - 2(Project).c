//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//struct linked_list
//{
//    int roll;
//    char name[30];
//    double cgpa;
//    struct linked_list *next;
//};
//
//typedef struct linked_list node;
//node* list = NULL;
//node* tptr = NULL;
//node* nptr = NULL;
//node* tempnode = NULL;
//
//void insert()
//{
//    int Roll;
//    char Name[30];
//    double Cgpa;
//
//    printf("Enter roll number: ");
//    scanf("%d",&Roll);
//    fflush(stdin);
//    printf("Enter name: ");
//    gets(Name);
//    printf("Enter cgpa: ");
//    scanf("%lf",&Cgpa);
//
//    //nptr = new(node);
//    nptr = (node *)malloc (sizeof(node));
//    nptr->roll = Roll;
//    strcpy(nptr->name,Name);
//    nptr->cgpa = Cgpa;
//    nptr->next = NULL;
//
//    tptr = list;
//
//    if(list == NULL)
//    {
//        list = nptr;
//        return;
//    }
//    if(Roll < tptr->roll)
//    {
//        list = nptr;
//        nptr->next = tptr;
//        return;
//    }
//     while(Roll >= tptr->roll) {
//
//         if(tptr->next == NULL) {
//            tptr->next = nptr;
//            return;
//        }
//
//        tempnode = tptr;
//        tptr = tptr->next;
//     }
//
//     if(Roll < tptr->roll) {
//        tempnode->next = nptr;
//        nptr->next = tptr;
//     }
//
//}
//
//void search()
//{
//    int roll_no;
//    printf("Enter roll number to search : ");
//    scanf("%d",&roll_no);
//
//    tptr = list;
//    while(tptr->roll != roll_no)
//    {
//        if(tptr->next == NULL)
//        {
//            printf("Roll no %d is not found!!!\n\n",roll_no);
//            break;
//        }
//        tptr = tptr->next;
//    }
//
//    if(tptr->roll == roll_no)
//    {
//        printf("Roll Number : %d\n",tptr->roll);
//        printf("Name : %s\n",tptr->name);
//        printf("Cgpa : %.2lf\n\n",tptr->cgpa);
//    }
//}
//
//void deleting()
//{
//    int roll_no;
//    printf("Enter roll number to delete : ");
//    scanf("%d",&roll_no);
//
//    tptr = list;
//    if(list == NULL)
//    {
//        printf("Rcord with roll number %d is not found\n\n",roll_no);
//        return;
//    }
//
//    if(roll_no == tptr->roll)
//    {
//        list = tptr->next;
//        //delete(tptr);
//        free(tptr);
//        printf("Rcord with roll number %d is found\n",roll_no);
//        printf("Rcord deleted successfully!!!\n\n");
//        return;
//    }
//    while(roll_no != tptr->roll)
//    {
//        if(tptr->next == NULL)
//        {
//            printf("Rcord with roll number %d is not found\n\n",roll_no);
//            return;
//        }
//        tempnode = tptr;
//        tptr = tptr->next;
//    }
//    if(roll_no == tptr->roll)
//    {
//        if(tptr->next == NULL){
//            tempnode->next = NULL;
//        }
//
//        else{
//            tempnode->next = tptr->next;
//        }
//
//        printf("Rcord with roll number %d is found\n",roll_no);
//        printf("Rcord successfully deleted\n\n");
//        //delete(tptr);
//        free(tptr);
//    }
//}
//
//void update()
//{
//    char Name[30];
//    double Cgpa;
//
//    int roll_no;
//    printf("Enter roll number to update : ");
//    scanf("%d",&roll_no);
//
//    tptr = list;
//
//    while(tptr->roll != roll_no)
//    {
//        if(tptr->next == NULL)
//        {
//            printf("Roll no %d is not found!!!\n",roll_no);
//            break;
//        }
//        tptr = tptr->next;
//    }
//
//    if(tptr->roll == roll_no){
//        printf("Roll no %d is found !!!\n",roll_no);
//        printf("Enter new name: ");
//        fflush(stdin);
//        gets(Name);
//        printf("Enter new cgpa: ");
//        scanf("%lf",&Cgpa);
//
//        strcpy(tptr->name,Name);
//        tptr->cgpa = Cgpa;
//        printf("Updation successfull!!!\n\n");
//    }
//
//}
//
//void display(node* list)
//{
//    tptr = list;
//    if(tptr == NULL){
//        return;
//    }
//    else{
//        printf("Roll number : %d\n",tptr->roll);
//        printf("Name : %s\n",tptr->name);
//        printf("Cgpa : %.2lf\n\n",tptr->cgpa);
//        display(tptr->next);
//    }
//}
//
//
//int main(){
//    printf("***Welcome to Student Management System***\n\n");
//    printf("1 to insert student details\n");
//    printf("2 to search for student details\n");
//    printf("3 to delete student details\n");
//    printf("4 to update student details\n");
//    printf("5 to display all student details\n");
//again:
//    fflush(stdin);
//    int choice;
//    printf("\nEnter choice: ");
//    scanf("%d",&choice);
//    printf("\n");
//
//    switch(choice)
//    {
//        case 1: insert(); break;
//        case 2: search(); break;
//        case 3:
//            if(list == NULL) printf("There is no student in the list!!!\n");
//            else deleting();
//            break;
//        case 4: update(); break;
//        case 5: display(list); break;
//        default : return 0;
//    }
//
//    goto again;
//}
