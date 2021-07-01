#include<stdio.h>
main()
{
    int a,b,temp;
    scanf("%d %d",&a,&b);
    while(b !=0){0.

        temp = a;
        a = b;
        b = temp%b;
    }

    if(a>1)
        printf("Sao Multiplos\n");
    else printf("Nao sao Multiplos\n");

    return 0;
}
