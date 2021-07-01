#include<stdio.h>
main()
{
    int a,b,temp;
    scanf("%d %d",&a,&b);
    while(b !=0){
        temp = a;
        a = b;
        b = temp%b;
    }
    printf("GCD = %d",a);
    return 0;
}

