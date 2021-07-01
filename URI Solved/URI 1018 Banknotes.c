#include<stdio.h>
main()
{
    int money;
    scanf("%d",&money);
    int notes[7] = {100,50,20,10,5,2,1};
    int numOfNotes[7];
    int i = 0;
    while(money>0){
        if(money<notes[i++])
            continue;
        numOfNotes[i] = money % notes[i];
        i++;
    }
    for(i = 0; i<7 ; i++){
        printf("%d ",numOfNotes[i]);
    }
}
