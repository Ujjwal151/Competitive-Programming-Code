#include<stdio.h>
main()
{
    double a,b,c,d,average,e,newAvg;

    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    average = (a*2 + b*3 + c*4 + d)/(2+3+4+1);

    printf("Media: %.1lf\n",average);
    if(average >=7.0)
        printf("Aluno aprovado.\n");

    else if(average < 5.0)
      printf("Aluno reprovado.\n");

    else if(average>=5.0 && average<=6.9){
        printf("Aluno em exame.\n");

        scanf("%lf",&e);
        printf("Nota do exame: %.1lf\n",e);
        newAvg = (average + e)/2;
        if(newAvg>=5.0)
            printf("Aluno aprovado.\n");
        //else if(newAvg<=4.9)
        else  printf("Aluno reprovado.\n");

        printf("Media final: %.1lf\n",newAvg);
    }


    return 0;
}
