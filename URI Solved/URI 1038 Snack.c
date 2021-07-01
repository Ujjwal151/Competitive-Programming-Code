#include<stdio.h>
main()
{
    int x,y;
    scanf("%d %d",&x,&y);

    double price[5] = {4.00, 4.50, 5.00, 2.00, 1.50};

    printf("Total: R$ %.2lf\n",price[x-1]*y);

    return 0;
}
