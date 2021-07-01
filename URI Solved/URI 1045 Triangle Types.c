#include<stdio.h>
#define N 3
void large(double arr[]){

    double max,temp;
    int i,j;
    for(i = 0; i<N ; i++){
        max = arr[i];
        for(j = i+1; j<N ; j++){
            if(arr[i]<arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    double arr[N];
    double A,B,C;
    scanf("%lf %lf %lf",&arr[0],&arr[1],&arr[2]);
    large(arr);
    A = arr[0];
    B = arr[1];
    C = arr[2];
    //printf("%lf %lf %lf",A ,B ,C);

    if(A >= B + C) printf("NAO FORMA TRIANGULO\n");
    else{
         if(A*A == B*B + C*C) printf("TRIANGULO RETANGULO\n");
         else if(A*A > B*B + C*C) printf("TRIANGULO OBTUSANGULO\n");
         else if(A*A < B*B + C*C) printf("TRIANGULO ACUTANGULO\n");

         if(A==B && B==C) printf("TRIANGULO EQUILATERO\n");
         else if(A==B || B==C) printf("TRIANGULO ISOSCELES\n");
    }


    return 0;
}
