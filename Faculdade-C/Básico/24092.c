#include <stdio.h>
#include <math.h>

int main(){

double a, b, c, r1, r2, delta;

scanf("%lf %lf %lf", &a, &b, &c);

delta = b * b - 4 * a * c;

 if (delta >= 0) {
    r1 = (-b + sqrt(delta)) / (2 * a);
    r2 = (-b - sqrt(delta)) / (2 * a);

    printf("R1 = %lf\n", r1);
    printf("R2 = %lf\n", r2);


 } else {
        printf("Impossivel calcular\n");
        }




return 0;
}
