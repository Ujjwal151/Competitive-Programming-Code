#include<stdio.h>
#include<stdbool.h>
#define MAX 5

int list[MAX] = {200,50,100,30,20};

void display(){
    int i;
    printf("[");

    for(i =0;i<MAX; i++){
        printf("%d ",list[i]);
    }
    printf("]\n");
}

void bubbleSort(){
    int temp;
    int i,j;
    bool swapped = false;
    //loop through all numbers

    for(i = 0; i<MAX-1; i++){
        swapped = false;
        for(j = 0; j<MAX-1-i; j++){
            printf("Item compared : [%d %d]",list[j],list[j+1]);
            if(list[j]>list[j+1]){
                temp = list[j];
                list[j]= list[j+1];
                list[j+1] = temp;
                swapped = true;
                printf("=> Swapped [%d %d]\n",list[j],list[j+1]);
            }
            else{
                printf("Not Swapped\n");
            }
        }
        if(!swapped){
            break;
        }
        printf("Iteration %d : ",i+1);
        display();
    }
}

int main()
{
    
    printf("Input Array : ");
    display();
    printf("\n");
    bubbleSort();
    printf("Output Array : ");
    display();

    return 0;
}
