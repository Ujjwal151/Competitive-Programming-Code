#include<stdio.h>
int main(){

    int x;
    bool y = false;

    x = 10!=15 && !(10<20) || 15>30 && (28%2 == 0);

//    y = (4>9 && -3<2) && (1<-1) || (!(3!=3)&&!(28%3 == 1));



    if(x){
        printf("x = true\n");
    }
    else printf("x = False\n");


    if(y){
        printf("y = true\n");
    }
    else printf("y = False\n");

}
