#include<stdio.h>
#define N 3
main()
{
    int arr[N],copy[N];
    for(int i = 0; i<N; i++){
        scanf("%d",&arr[i]);
        copy[i] = arr[i];
    }

    int min,temp;

    for(int i = 0; i<N ; i++){
        min = arr[i];
        for(int j = i+1; j<N ; j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i= 0; i<N ; i++)
        printf("%d\n",arr[i]);

    printf("\n");
    for(int i= 0; i<N ; i++)
        printf("%d\n",copy[i]);
    return 0;
}
