#include<stdio.h>
#include<math.h>
main()
{
    double a,b,c,d,R1,R2;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a!=0){
        d = b*b - 4*a*c;
        if(d>=0){
            R1 = (- b + sqrt(d))/(2*a);
            R2 = (- b - sqrt(d))/(2*a);
            printf("R1 = %.5lf\n",R1);
            printf("R2 = %.5lf\n",R2);
        } else printf("Impossivel calcular\n");
    } else printf("Impossivel calcular\n");
    return 0;
}
